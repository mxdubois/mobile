/*
created with obj2opengl.pl

source file    : ./minion.obj
vertices       : 24
faces          : 44
normals        : 32
texture coords : 40


// include generated arrays
#import "./minion.h"

// set input data to arrays
glVertexPointer(3, GL_FLOAT, 0, minionVerts);
glNormalPointer(GL_FLOAT, 0, minionNormals);
glTexCoordPointer(2, GL_FLOAT, 0, minionTexCoords);

// draw data
glDrawArrays(GL_TRIANGLES, 0, minionNumVerts);
*/

unsigned int minionNumVerts = 132;

float minionVerts [] = {
  // f 1/1/1 2/2/1 3/3/1
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  // f 1/4/2 6/5/2 18/6/2
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.328724339619391, -0.152851976390656, -0.330272486713882,
  // f 1/4/2 18/6/2 16/7/2
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  -0.328724339619391, -0.152851976390656, -0.330272486713882,
  -0.132744006559274, -0.136450811857839, -0.471369294431107,
  // f 1/1/3 3/3/3 14/8/3
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.254516399286087, 0.0623938273231485, -0.407565612495785,
  // f 1/1/3 14/8/3 13/9/3
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  0.254516399286087, 0.0623938273231485, -0.407565612495785,
  0.133068265185259, -0.137091297134256, -0.47113921719589,
  // f 1/4/4 4/10/4 5/11/4
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  -0.000978152119657785, -0.30072556915939, 0.190878878845033,
  // f 1/4/5 5/11/5 6/5/5
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  -0.000978152119657785, -0.30072556915939, 0.190878878845033,
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  // f 6/12/6 11/13/6 24/14/6
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  -0.418205729208162, 0.129536738320957, 0.150480891865384,
  // f 6/12/6 24/14/6 23/15/6
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.418205729208162, 0.129536738320957, 0.150480891865384,
  -0.418479723212941, -0.0302997047471696, 0.0232030980884287,
  // f 3/3/7 2/2/7 7/16/7
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  0.000808055605107659, 0.374264685592851, 0.208957042144683,
  // f 19/17/8 20/15/8 4/12/8
  0.355814509038369, 0.15071783514422, -0.0417976073003921,
  0.418456922766207, -0.0323202647909154, 0.0239298623280526,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  // f 19/17/8 4/12/8 3/18/8
  0.355814509038369, 0.15071783514422, -0.0417976073003921,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  // f 5/11/9 4/10/9 9/19/9
  -0.000978152119657785, -0.30072556915939, 0.190878878845033,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.203513872711583, -0.218055165292227, 0.421653730004105,
  // f 6/5/10 5/11/10 10/20/10
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.000978152119657785, -0.30072556915939, 0.190878878845033,
  -0.205123506522158, -0.217070730094919, 0.421300452627732,
  // f 2/18/11 11/13/11 7/21/11
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  0.000808055605107659, 0.374264685592851, 0.208957042144683,
  // f 3/18/12 7/22/12 8/13/12
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.000808055605107659, 0.374264685592851, 0.208957042144683,
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  // f 4/12/13 8/13/13 9/23/13
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  0.203513872711583, -0.218055165292227, 0.421653730004105,
  // f 5/11/14 9/19/14 10/20/14
  -0.000978152119657785, -0.30072556915939, 0.190878878845033,
  0.203513872711583, -0.218055165292227, 0.421653730004105,
  -0.205123506522158, -0.217070730094919, 0.421300452627732,
  // f 6/12/15 10/24/15 11/13/15
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.205123506522158, -0.217070730094919, 0.421300452627732,
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  // f 7/25/16 11/26/16 12/27/16
  0.000808055605107659, 0.374264685592851, 0.208957042144683,
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  -8.50482572750632e-05, 0.119717259562488, 0.528630705568893,
  // f 8/28/17 7/25/17 12/27/17
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  0.000808055605107659, 0.374264685592851, 0.208957042144683,
  -8.50482572750632e-05, 0.119717259562488, 0.528630705568893,
  // f 9/29/18 8/28/18 12/27/18
  0.203513872711583, -0.218055165292227, 0.421653730004105,
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  -8.50482572750632e-05, 0.119717259562488, 0.528630705568893,
  // f 10/30/19 9/29/19 12/27/19
  -0.205123506522158, -0.217070730094919, 0.421300452627732,
  0.203513872711583, -0.218055165292227, 0.421653730004105,
  -8.50482572750632e-05, 0.119717259562488, 0.528630705568893,
  // f 11/26/20 10/30/20 12/27/20
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  -0.205123506522158, -0.217070730094919, 0.421300452627732,
  -8.50482572750632e-05, 0.119717259562488, 0.528630705568893,
  // f 13/31/21 14/32/21 15/33/21
  0.133068265185259, -0.137091297134256, -0.47113921719589,
  0.254516399286087, 0.0623938273231485, -0.407565612495785,
  0.328724469167383, -0.154439587042454, -0.329702734641535,
  // f 4/10/22 1/4/22 13/34/22
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  0.133068265185259, -0.137091297134256, -0.47113921719589,
  // f 4/10/22 13/34/22 15/35/22
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.133068265185259, -0.137091297134256, -0.47113921719589,
  0.328724469167383, -0.154439587042454, -0.329702734641535,
  // f 3/18/23 4/12/23 15/33/23
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.328724469167383, -0.154439587042454, -0.329702734641535,
  // f 3/18/23 15/33/23 14/32/23
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.328724469167383, -0.154439587042454, -0.329702734641535,
  0.254516399286087, 0.0623938273231485, -0.407565612495785,
  // f 17/36/24 16/37/24 18/38/24
  -0.253339455771473, 0.0636172785671785, -0.408004780191386,
  -0.132744006559274, -0.136450811857839, -0.471369294431107,
  -0.328724339619391, -0.152851976390656, -0.330272486713882,
  // f 2/2/25 1/1/25 16/39/25
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.00203915018071298, -0.142976921543274, -0.0778598820569164,
  -0.132744006559274, -0.136450811857839, -0.471369294431107,
  // f 2/2/25 16/39/25 17/40/25
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.132744006559274, -0.136450811857839, -0.471369294431107,
  -0.253339455771473, 0.0636172785671785, -0.408004780191386,
  // f 6/12/26 2/18/26 17/36/26
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.253339455771473, 0.0636172785671785, -0.408004780191386,
  // f 6/12/26 17/36/26 18/38/26
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
  -0.253339455771473, 0.0636172785671785, -0.408004780191386,
  -0.328724339619391, -0.152851976390656, -0.330272486713882,
  // f 20/15/27 19/17/27 21/14/27
  0.418456922766207, -0.0323202647909154, 0.0239298623280526,
  0.355814509038369, 0.15071783514422, -0.0417976073003921,
  0.418730916770985, 0.127515789633233, 0.151207656105007,
  // f 3/18/28 8/13/28 21/14/28
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  0.418730916770985, 0.127515789633233, 0.151207656105007,
  // f 3/18/28 21/14/28 19/17/28
  0.204953410007608, 0.193811068114132, -0.0955909862838472,
  0.418730916770985, 0.127515789633233, 0.151207656105007,
  0.355814509038369, 0.15071783514422, -0.0417976073003921,
  // f 8/13/29 4/12/29 20/15/29
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  0.330237848819306, -0.172265520400117, 0.0358639529730422,
  0.418456922766207, -0.0323202647909154, 0.0239298623280526,
  // f 8/13/29 20/15/29 21/14/29
  0.330785836828862, 0.147406977092158, 0.290419540526952,
  0.418456922766207, -0.0323202647909154, 0.0239298623280526,
  0.418730916770985, 0.127515789633233, 0.151207656105007,
  // f 22/17/30 23/15/30 24/14/30
  -0.354843546832312, 0.152431366445023, -0.042413996650148,
  -0.418479723212941, -0.0302997047471696, 0.0232030980884287,
  -0.418205729208162, 0.129536738320957, 0.150480891865384,
  // f 11/13/31 2/18/31 22/17/31
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.354843546832312, 0.152431366445023, -0.042413996650148,
  // f 11/13/31 22/17/31 24/14/31
  -0.330407945333856, 0.14900585841933, 0.289845513370843,
  -0.354843546832312, 0.152431366445023, -0.042413996650148,
  -0.418205729208162, 0.129536738320957, 0.150480891865384,
  // f 23/15/32 22/17/32 2/18/32
  -0.418479723212941, -0.0302997047471696, 0.0232030980884287,
  -0.354843546832312, 0.152431366445023, -0.042413996650148,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  // f 23/15/32 2/18/32 6/12/32
  -0.418479723212941, -0.0302997047471696, 0.0232030980884287,
  -0.203683969226133, 0.194795503311441, -0.0959446523041989,
  -0.330955933343412, -0.170666639072944, 0.0352899258169329,
};

float minionNormals [] = {
  // f 1/1/1 2/2/1 3/3/1
  0.000735999897688293, -0.0530259926288308, -0.998592861185117,
  0.000735999897688293, -0.0530259926288308, -0.998592861185117,
  0.000735999897688293, -0.0530259926288308, -0.998592861185117,
  // f 1/4/2 6/5/2 18/6/2
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  // f 1/4/2 18/6/2 16/7/2
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  0.0630959769215149, -0.99709563529439, -0.0426519843992718,
  // f 1/1/3 3/3/3 14/8/3
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  // f 1/1/3 14/8/3 13/9/3
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  -0.80131236829607, 0.516560237419405, -0.301768138697497,
  // f 1/4/4 4/10/4 5/11/4
  0.0968970286875808, -0.858175254073549, -0.504129149253758,
  0.0968970286875808, -0.858175254073549, -0.504129149253758,
  0.0968970286875808, -0.858175254073549, -0.504129149253758,
  // f 1/4/5 5/11/5 6/5/5
  -0.10090905027386, -0.858172427549763, -0.503346250771946,
  -0.10090905027386, -0.858172427549763, -0.503346250771946,
  -0.10090905027386, -0.858172427549763, -0.503346250771946,
  // f 6/12/6 11/13/6 24/14/6
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  // f 6/12/6 24/14/6 23/15/6
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  -0.741555020810259, -0.4171400117062, 0.525443014745507,
  // f 3/3/7 2/2/7 7/16/7
  0.00251499921909915, 0.861050732645942, -0.508512842108058,
  0.00251499921909915, 0.861050732645942, -0.508512842108058,
  0.00251499921909915, 0.861050732645942, -0.508512842108058,
  // f 19/17/8 20/15/8 4/12/8
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  // f 19/17/8 4/12/8 3/18/8
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  0.262717968738009, -0.245191970823506, -0.933198888954471,
  // f 5/11/9 4/10/9 9/19/9
  0.365476168128944, -0.930771428180086, 0.00957700440568162,
  0.365476168128944, -0.930771428180086, 0.00957700440568162,
  0.365476168128944, -0.930771428180086, 0.00957700440568162,
  // f 6/5/10 5/11/10 10/20/10
  -0.37037619521164, -0.928837489556003, 0.00907700478415463,
  -0.37037619521164, -0.928837489556003, 0.00907700478415463,
  -0.37037619521164, -0.928837489556003, 0.00907700478415463,
  // f 2/18/11 11/13/11 7/21/11
  -0.575302032123716, 0.8126920453791, -0.0925160051659089,
  -0.575302032123716, 0.8126920453791, -0.0925160051659089,
  -0.575302032123716, 0.8126920453791, -0.0925160051659089,
  // f 3/18/12 7/22/12 8/13/12
  0.579390663492897, 0.809896529616282, -0.0915099468514958,
  0.579390663492897, 0.809896529616282, -0.0915099468514958,
  0.579390663492897, 0.809896529616282, -0.0915099468514958,
  // f 4/12/13 8/13/13 9/23/13
  0.933390036786769, -0.22452400884894, 0.27995001103339,
  0.933390036786769, -0.22452400884894, 0.27995001103339,
  0.933390036786769, -0.22452400884894, 0.27995001103339,
  // f 5/11/14 9/19/14 10/20/14
  -0.00256000011268097, -0.940692041405502, 0.339252014932517,
  -0.00256000011268097, -0.940692041405502, 0.339252014932517,
  -0.00256000011268097, -0.940692041405502, 0.339252014932517,
  // f 6/12/15 10/24/15 11/13/15
  -0.934945462722057, -0.220027873558268, 0.278324840057198,
  -0.934945462722057, -0.220027873558268, 0.278324840057198,
  -0.934945462722057, -0.220027873558268, 0.278324840057198,
  // f 7/25/16 11/26/16 12/27/16
  -0.355557801476313, 0.731653591485355, 0.581602675265436,
  -0.355557801476313, 0.731653591485355, 0.581602675265436,
  -0.355557801476313, 0.731653591485355, 0.581602675265436,
  // f 8/28/17 7/25/17 12/27/17
  0.358084865747205, 0.729926726336653, 0.582221781714033,
  0.358084865747205, 0.729926726336653, 0.582221781714033,
  0.358084865747205, 0.729926726336653, 0.582221781714033,
  // f 9/29/18 8/28/18 12/27/18
  0.57686970697305, 0.0906139539717023, 0.81179458764052,
  0.57686970697305, 0.0906139539717023, 0.81179458764052,
  0.57686970697305, 0.0906139539717023, 0.81179458764052,
  // f 10/30/19 9/29/19 12/27/19
  -0.00155400037966643, -0.302783073974607, 0.953058232846927,
  -0.00155400037966643, -0.302783073974607, 0.953058232846927,
  -0.00155400037966643, -0.302783073974607, 0.953058232846927,
  // f 11/26/20 10/30/20 12/27/20
  -0.577829916636195, 0.0933949865258596, 0.810795883026081,
  -0.577829916636195, 0.0933949865258596, 0.810795883026081,
  -0.577829916636195, 0.0933949865258596, 0.810795883026081,
  // f 13/31/21 14/32/21 15/33/21
  0.577829916636195, -0.0933949865258596, -0.810795883026081,
  0.577829916636195, -0.0933949865258596, -0.810795883026081,
  0.577829916636195, -0.0933949865258596, -0.810795883026081,
  // f 4/10/22 1/4/22 13/34/22
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  // f 4/10/22 13/34/22 15/35/22
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  -0.0672779720725159, -0.996807586219276, -0.042991982153774,
  // f 3/18/23 4/12/23 15/33/23
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  // f 3/18/23 15/33/23 14/32/23
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  0.944722109521641, 0.327650037984471, 0.0120660013988116,
  // f 17/36/24 16/37/24 18/38/24
  -0.576870175272799, -0.0906140275316266, -0.811794246650731,
  -0.576870175272799, -0.0906140275316266, -0.811794246650731,
  -0.576870175272799, -0.0906140275316266, -0.811794246650731,
  // f 2/2/25 1/1/25 16/39/25
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  // f 2/2/25 16/39/25 17/40/25
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  0.80803681907492, 0.509085886012119, -0.296492933613164,
  // f 6/12/26 2/18/26 17/36/26
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  // f 6/12/26 17/36/26 18/38/26
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  -0.943152297782937, 0.332197104885107, 0.0104320032937126,
  // f 20/15/27 19/17/27 21/14/27
  0.934945462722057, 0.220027873558268, -0.278324840057198,
  0.934945462722057, 0.220027873558268, -0.278324840057198,
  0.934945462722057, 0.220027873558268, -0.278324840057198,
  // f 3/18/28 8/13/28 21/14/28
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  // f 3/18/28 21/14/28 19/17/28
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  0.264783938226312, 0.963854775134153, 0.0295539931050985,
  // f 8/13/29 4/12/29 20/15/29
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  // f 8/13/29 20/15/29 21/14/29
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  0.738627122738418, -0.420700069908157, 0.526727087526774,
  // f 22/17/30 23/15/30 24/14/30
  -0.933390036786769, 0.22452400884894, -0.27995001103339,
  -0.933390036786769, 0.22452400884894, -0.27995001103339,
  -0.933390036786769, 0.22452400884894, -0.27995001103339,
  // f 11/13/31 2/18/31 22/17/31
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  // f 11/13/31 22/17/31 24/14/31
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  -0.260184906841982, 0.965120654442954, 0.0290849895862522,
  // f 23/15/32 22/17/32 2/18/32
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
  // f 23/15/32 2/18/32 6/12/32
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
  -0.262273098220507, -0.243931091351479, -0.933654349650818,
};

float minionTexCoords [] = {
  // f 1/1/1 2/2/1 3/3/1
  0.180967, 0.168394,
  0.313612, 0.286716,
  0.313350, 0.0469349999999999,
  // f 1/4/2 6/5/2 18/6/2
  0.225771, 0.744893,
  0.012992, 0.678758,
  0.020270, 0.906335,
  // f 1/4/2 18/6/2 16/7/2
  0.225771, 0.744893,
  0.020270, 0.906335,
  0.137591, 0.98786,
  // f 1/1/3 3/3/3 14/8/3
  0.180967, 0.168394,
  0.313350, 0.0469349999999999,
  0.129379, 0.017852,
  // f 1/1/3 14/8/3 13/9/3
  0.180967, 0.168394,
  0.129379, 0.017852,
  0.020231, 0.089116,
  // f 1/4/4 4/10/4 5/11/4
  0.225771, 0.744893,
  0.438128, 0.680309,
  0.228896, 0.57629,
  // f 1/4/5 5/11/5 6/5/5
  0.225771, 0.744893,
  0.228896, 0.57629,
  0.012992, 0.678758,
  // f 6/12/6 11/13/6 24/14/6
  0.695807, 0.140809,
  0.973755, 0.283436,
  0.900504, 0.272455,
  // f 6/12/6 24/14/6 23/15/6
  0.695807, 0.140809,
  0.900504, 0.272455,
  0.722720, 0.184135,
  // f 3/3/7 2/2/7 7/16/7
  0.313350, 0.0469349999999999,
  0.313612, 0.286716,
  0.514586, 0.166723,
  // f 19/17/8 20/15/8 4/12/8
  0.730229, 0.388492,
  0.722720, 0.184135,
  0.695807, 0.140809,
  // f 19/17/8 4/12/8 3/18/8
  0.730229, 0.388492,
  0.695807, 0.140809,
  0.710990, 0.439632,
  // f 5/11/9 4/10/9 9/19/9
  0.228896, 0.57629,
  0.438128, 0.680309,
  0.357894, 0.438769,
  // f 6/5/10 5/11/10 10/20/10
  0.012992, 0.678758,
  0.228896, 0.57629,
  0.098194, 0.439959,
  // f 2/18/11 11/13/11 7/21/11
  0.710990, 0.439632,
  0.973755, 0.283436,
  0.973280, 0.46709,
  // f 3/18/12 7/22/12 8/13/12
  0.710990, 0.439632,
  0.973185, 0.468526,
  0.973755, 0.283436,
  // f 4/12/13 8/13/13 9/23/13
  0.695807, 0.140809,
  0.973755, 0.283436,
  0.952790, 0.013576,
  // f 5/11/14 9/19/14 10/20/14
  0.228896, 0.57629,
  0.357894, 0.438769,
  0.098194, 0.439959,
  // f 6/12/15 10/24/15 11/13/15
  0.695807, 0.140809,
  0.952919, 0.012896,
  0.973755, 0.283436,
  // f 7/25/16 11/26/16 12/27/16
  0.975865, 0.718432,
  0.795759, 0.468252,
  0.713643, 0.71729,
  // f 8/28/17 7/25/17 12/27/17
  0.793588, 0.967032,
  0.975865, 0.718432,
  0.713643, 0.71729,
  // f 9/29/18 8/28/18 12/27/18
  0.500830, 0.870499,
  0.793588, 0.967032,
  0.713643, 0.71729,
  // f 10/30/19 9/29/19 12/27/19
  0.502170, 0.562237,
  0.500830, 0.870499,
  0.713643, 0.71729,
  // f 11/26/20 10/30/20 12/27/20
  0.795759, 0.468252,
  0.502170, 0.562237,
  0.713643, 0.71729,
  // f 13/31/21 14/32/21 15/33/21
  0.352087, 0.312032,
  0.453426, 0.428267,
  0.445960, 0.261721,
  // f 4/10/22 1/4/22 13/34/22
  0.438128, 0.680309,
  0.225771, 0.744893,
  0.316865, 0.992396,
  // f 4/10/22 13/34/22 15/35/22
  0.438128, 0.680309,
  0.316865, 0.992396,
  0.436399, 0.904427,
  // f 3/18/23 4/12/23 15/33/23
  0.710990, 0.439632,
  0.695807, 0.140809,
  0.445960, 0.261721,
  // f 3/18/23 15/33/23 14/32/23
  0.710990, 0.439632,
  0.445960, 0.261721,
  0.453426, 0.428267,
  // f 17/36/24 16/37/24 18/38/24
  0.453563, 0.427771,
  0.352204, 0.311088,
  0.446110, 0.261504,
  // f 2/2/25 1/1/25 16/39/25
  0.313612, 0.286716,
  0.180967, 0.168394,
  0.020401, 0.24509,
  // f 2/2/25 16/39/25 17/40/25
  0.313612, 0.286716,
  0.020401, 0.24509,
  0.129704, 0.315853,
  // f 6/12/26 2/18/26 17/36/26
  0.695807, 0.140809,
  0.710990, 0.439632,
  0.453563, 0.427771,
  // f 6/12/26 17/36/26 18/38/26
  0.695807, 0.140809,
  0.453563, 0.427771,
  0.446110, 0.261504,
  // f 20/15/27 19/17/27 21/14/27
  0.722720, 0.184135,
  0.730229, 0.388492,
  0.900504, 0.272455,
  // f 3/18/28 8/13/28 21/14/28
  0.710990, 0.439632,
  0.973755, 0.283436,
  0.900504, 0.272455,
  // f 3/18/28 21/14/28 19/17/28
  0.710990, 0.439632,
  0.900504, 0.272455,
  0.730229, 0.388492,
  // f 8/13/29 4/12/29 20/15/29
  0.973755, 0.283436,
  0.695807, 0.140809,
  0.722720, 0.184135,
  // f 8/13/29 20/15/29 21/14/29
  0.973755, 0.283436,
  0.722720, 0.184135,
  0.900504, 0.272455,
  // f 22/17/30 23/15/30 24/14/30
  0.730229, 0.388492,
  0.722720, 0.184135,
  0.900504, 0.272455,
  // f 11/13/31 2/18/31 22/17/31
  0.973755, 0.283436,
  0.710990, 0.439632,
  0.730229, 0.388492,
  // f 11/13/31 22/17/31 24/14/31
  0.973755, 0.283436,
  0.730229, 0.388492,
  0.900504, 0.272455,
  // f 23/15/32 22/17/32 2/18/32
  0.722720, 0.184135,
  0.730229, 0.388492,
  0.710990, 0.439632,
  // f 23/15/32 2/18/32 6/12/32
  0.722720, 0.184135,
  0.710990, 0.439632,
  0.695807, 0.140809,
};

