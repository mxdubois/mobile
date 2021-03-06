package edu.pugetsound.vichar.ar;

import java.util.Iterator;

import org.json.JSONException;
import org.json.JSONObject;
import org.json.JSONArray;

/**
 * Parses the engine state of the JSONObject and loads the information into a float array. 
 * The ARGameRenderer class passes this float array to the native code via the renderFrame() 
 * method, whenever the updated flag is set to true.
 * 
 * @author matthewcburke
 * @version 2012.12.07
 *
 */
public class GameParser {

	private static final String TURRET_NAMESPACE = "turrets";
	private static final float[] TURRET_TRANSFORM = {0.0f,60.0f,290.0f,0.0f,0.0f, 90.0f}; 
	private static final float[] TOWER_TRANSFORM = {0.0f,0.0f,74.0f,0.0f,0.0f,0.0f}; 
	
	private static final String TURRETBULLET_NAMESPACE = "turretBullets";
	private static final float[] BULLET_TRANSFORM = {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}; 
	
	private static final String FIREBALL_NAMESPACE = "fireballs";
	private static final float[] FIREBALL_TRANSFORM = {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}; 
	
	private static final String MINION_NAMESPACE = "minions";
	private static final float[] MINION_TRANSFORM = {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}; 
	
	private static final String BATTERY_NAMESPACE = "batteries";
	private static final float[] BATTERY_TRANSFORM = {0.0f,0.0f,0.0f,90.0f,0.0f,0.0f}; 
	
	private static final String PLAYER_NAMESPACE = "player";
	private static final float[] PLAYER_TRANSFORM = {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}; 
	
	private static final String EYEBALL_NAMESPACE = "eyeballs";
	private static final float[] EYEBALL_TRANSFORM = {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f}; 
	
	private static final String PLATFORM_NAMESPACE = "platforms";
	private static final String POSITION_NAMESPACE = "position";
	private static final String ROTATION_NAMESPACE = "rotation";
	
	private static final String ZERO_ROTATION = "{rotation:{x:0.0,y:0.0,z:0.0}}";

	//JSON parsing
	//The array in which we store data about game objects.
	protected static float[] poseData; 
	protected static final int OBJ_SIZE = 7; 	// the number of array positions to use to represent a game object.
	// Each object gets 7 spots in the array:
	// 1 = id
	// 2 = x pos.
	// 3 = y pos.
	// 4 = z pos.
	// 6 = x rotation in deg. 
	// 7 = y rotation in deg. 
	// 8 = z rotation in deg. 

	protected static boolean updated = false; 	// a flag to indicate if ImageTargets.cpp should update the draw list 
												// (via the renderFram() method in ARGameRenderer.java).

	//Game Board
	// the current C++ code can only handle 100 objects including tiles. TODO Fix this.
	static int xTiles = 8; //number of board tiles in the x direction // don't enter zeros!!! 
	static int yTiles = 8;// number of tiles in the y direction // don't enter zeros!!!
	static boolean[][] board = new boolean[xTiles][yTiles];
	static int[] tileCoordinate = new int[2];
	private static final float[] THEIR_BOARD_DIMENSIONS = {2000.0f, 2000.0f}; // don't enter zeros!!!
	private static boolean freshBoard = false;
	private static int count;

	/**
	 * Parse the engineState JSONObject into a float array in ARGameRender.
	 * 
	 * @throws JSONException
	 */
	protected static void parseEngineState(JSONObject engineState, String deviceUUID) //throws JSONException
	{    	
		//    	available = false;
		JSONObject platforms = engineState.optJSONObject(PLATFORM_NAMESPACE);
		if(platforms != null)
		{
			// TODO do something with the platforms
			// like delete them from board.
			JSONArray missing = platforms.optJSONArray("deletedTiles");
			if(missing != null)
			{
				int numTiles = missing.length();
				if(numTiles>0)
				{
					for(int i = 0; i < xTiles; i++)
					{
						for(int j = 0; j < yTiles; j++)
						{
							board[i][j] = true;
						}
					}
				}
				
				int i = 0;
				while(i<numTiles)
				{
					try{
						JSONArray coords = missing.getJSONArray(i);
						board[coords.getInt(0)][coords.getInt(1)] = false;
					}catch(JSONException e)
					{
						e.printStackTrace();
					}
					i++;
				}
				freshBoard = false;
			}
			
		}

		if(freshBoard)
		{
			freshBoard = false;
		}
		else
		{
			count = 0;
			poseData = new float[(xTiles * yTiles + 10)* OBJ_SIZE]; // ZERO IS IN THERE FOR TESTING.
			loadBoard(board);
		}

		try
		{
			JSONObject turrets = engineState.optJSONObject(TURRET_NAMESPACE);
			if(turrets != null){
				loadObject(turrets, 1.0f, deviceUUID, false, TURRET_TRANSFORM);
				loadObject(turrets, 9.0f, deviceUUID, false, TOWER_TRANSFORM);				
			}
			// TODO change type indices
			JSONObject turretBullets = engineState.optJSONObject(TURRETBULLET_NAMESPACE);
			if(turretBullets != null){
				loadObject(turretBullets, 2.0f, deviceUUID, false, BULLET_TRANSFORM);
			}

			JSONObject fireballs = engineState.optJSONObject(FIREBALL_NAMESPACE);
			if(fireballs != null){
				loadObject(fireballs, 3.0f, deviceUUID, false, FIREBALL_TRANSFORM);
			}

			JSONObject minions = engineState.optJSONObject(MINION_NAMESPACE);
			if(minions != null){
				loadObject(minions, 4.0f, deviceUUID, false, MINION_TRANSFORM);
			}

			JSONObject batteries = engineState.optJSONObject(BATTERY_NAMESPACE);
			if(batteries != null){
				loadObject(batteries, 5.0f, deviceUUID, false, BATTERY_TRANSFORM);
			}

			JSONObject player = engineState.optJSONObject(PLAYER_NAMESPACE);
			// load player 
			if(player != null)
			{
				if( count + OBJ_SIZE >= poseData.length)
				{
					int newLen = poseData.length * 2;
					resizeArray(newLen);
				}
				poseData[count++] = 6.0f; // TODO use enums to represent the types of gameobjects.
				parsePosition(player.getJSONObject(POSITION_NAMESPACE), PLAYER_TRANSFORM[0], PLAYER_TRANSFORM[1], PLAYER_TRANSFORM[2]);
				try{
					parseRotaion(player.getJSONObject(ROTATION_NAMESPACE), PLAYER_TRANSFORM[3], PLAYER_TRANSFORM[4], PLAYER_TRANSFORM[5]);
				}
				catch(JSONException e)
				{
					JSONObject temp = new JSONObject(ZERO_ROTATION);
//					DebugLog.LOGI("Object has no rotation. setting to 0,0,0.");
					parseRotaion(temp.getJSONObject(ROTATION_NAMESPACE), PLAYER_TRANSFORM[3], PLAYER_TRANSFORM[4], PLAYER_TRANSFORM[5]);
//					poseData[count++] = 0.0f;
//					poseData[count++] = 0.0f;
//					poseData[count ++] = 0.0f;  
				}
			}
			else DebugLog.LOGW("No Player");

			JSONObject eyeballs = engineState.optJSONObject(EYEBALL_NAMESPACE);
			if(eyeballs != null)
			{
//				DebugLog.LOGI("Recognized Eyeball");
				loadObject(eyeballs, 7.0f, deviceUUID, true, EYEBALL_TRANSFORM);
			}
		}catch(JSONException e)
		{
			DebugLog.LOGW("Exited game engine parser on JSONException: ");
			e.printStackTrace();
		}
		updated = true;
	}


	/**
	 * A helper method to load the object in the array
	 * @param type
	 * @param typeIndex
	 * @param i
	 * @return
	 * @throws JSONException
	 */
	private static void loadObject(JSONObject type, float typeIndex, String deviceUUID, boolean isEye, float[] transform) throws JSONException
	{
		Iterator<String> objItr = type.keys();

		while( objItr.hasNext())
		{
//			DebugLog.LOGI("Recognized a Key");

			String thisEye = objItr.next();
			JSONObject obj = type.getJSONObject(thisEye);
			if(isEye)
			{
//				DebugLog.LOGI("Recognized and Eye Key");
				if (deviceUUID.equals(thisEye))
				{
//					DebugLog.LOGI("Recognized own eye");
					continue;
				}
				else
				{
					DebugLog.LOGI("My Device UUID: " + deviceUUID + "does not equal this key: " + thisEye);
				}
			}
			if( count + OBJ_SIZE >= poseData.length)
			{
				int newLen = poseData.length * 2;
				//poseData = poseData.
				resizeArray(newLen);
			}

			poseData[count++] = typeIndex; // TODO use enums to represent the types of gameobjects.
			parsePosition(obj.getJSONObject(POSITION_NAMESPACE), transform[0], transform[1], transform[2]);
			try
			{
				parseRotaion(obj.getJSONObject(ROTATION_NAMESPACE), transform[3], transform[4], transform[5]);
			}
			catch(JSONException e)
			{
				JSONObject temp = new JSONObject(ZERO_ROTATION);
				//					DebugLog.LOGI("Object has no rotation. setting to 0,0,0.");
				parseRotaion(temp.getJSONObject(ROTATION_NAMESPACE), transform[3], transform[4], transform[5]);
				//					poseData[count++] = 0.0f;
				//					poseData[count++] = 0.0f;
				//					poseData[count++] = 0.0f;
			}
		}
	}

	/**
	 * loads position JSON data into poseData array.
	 * @param xyz
	 * @param i
	 * @throws JSONException
	 */
	private static void parsePosition(JSONObject xyz, float dx, float dy, float dz) throws JSONException
	{
		poseData[count++] = Float.parseFloat(xyz.getString("x")) + dx;
		poseData[count++] = Float.parseFloat(xyz.getString("z")) + dy;
		poseData[count++] = Float.parseFloat(xyz.getString("y")) + dz;
	}

	/**
	 * loads rotation JSON data into poseData array. Designed to be called immediately after parsePosition.
	 * @param xyz
	 * @param i
	 * @throws JSONException
	 */
	private static void parseRotaion(JSONObject xyz, float dx, float dy, float dz) throws JSONException
	{
		poseData[count++] = Float.parseFloat(xyz.getString("x")) + dx;
		poseData[count++] = Float.parseFloat(xyz.getString("z")) + dy;
		poseData[count++] = -Float.parseFloat(xyz.getString("y")) + dz;
	}

	/**
	 * A helper method to resize the poseData array
	 * @param newSize
	 */
	private static void resizeArray (int newSize) 
	{
		float[] tempArray = new float[newSize];
		int preserveSize = Math.min(poseData.length, newSize);
		for(int i=0; i<preserveSize; i++)
		{
			tempArray[i] = poseData[i];
		}
		poseData = new float[newSize];
		for(int i=0; i<preserveSize; i++)
		{
			poseData[i] = tempArray[i];
		} 
	}

	/**
	 * Loads tile locations into the poseData array based on boolean flags in currentBoard
	 * @param currentBoard two-dimensional boolean array with each entry representing a board tile.
	 * @param count counter tracking the location in the array
	 * @return
	 */
	private static void loadBoard(boolean[][] currentBoard) 
	{

		float tilesX = THEIR_BOARD_DIMENSIONS[0]/xTiles; //space alloted for each tile
		float tilesY = THEIR_BOARD_DIMENSIONS[1]/yTiles; 
		float xPos = -(THEIR_BOARD_DIMENSIONS[0]/2);// - tilesX / 2; //
		float yPos = -(THEIR_BOARD_DIMENSIONS[1]/2);// - tilesY / 2;
		float tempY = yPos;

		if(count + (xTiles*yTiles*OBJ_SIZE) >= poseData.length)
		{
			int newLen = poseData.length * 2 + (xTiles*yTiles*OBJ_SIZE);
			resizeArray(newLen);
		}
		for(int i=0; i < xTiles; i++)
		{
			for(int j = 0; j < yTiles; j++)
			{
				if(currentBoard[i][j])
				{
					poseData[count++] = 8.0f; //TODO use enums or change the hard coded id's
					poseData[count++] = xPos;
					poseData[count++] = tempY;
					tempY += tilesY;
					poseData[count++] = -150.0f; // z position
					poseData[count++] = 0.0f; // x rotation
					poseData[count++] = 0.0f; // y rotation. the 90 is to compensate for discrepancies when exporting the models from blender.
					poseData[count++] = 0.0f; // z rotation
				}
				else
				{
					tempY += tilesY;
				}
			}
			xPos += tilesX;
			tempY = yPos;
		}
	}

	/**
	 * Generates the two-dimensional boolean array that represents the board, and sets all flags to true.
	 * Then calls loadBoard() so that a board will be displayed on a target regardless of the network connection.
	 */
	static void generateBoard() {
		poseData = new float[(xTiles * yTiles + 10)* OBJ_SIZE]; // the hard coded digit is space for game objects.
		for(int i = 0; i < xTiles; i++)
		{
			for(int j = 0; j < yTiles; j++)
			{
				board[i][j] = true;
			}
		}
		count = 0;
		loadBoard(board);
		updated = true;
		freshBoard = true;
	}

}
