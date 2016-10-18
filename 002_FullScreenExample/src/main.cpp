#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    // フルスクリーンにするにはOF_WINDOWをOF_FULLSCREENにする
    // ofSetupOpenGL(1024,768,OF_FULLSCREEN);			// <-------- setup the GL context
    ofSetupOpenGL(1024,768,OF_WINDOW);  // ←ウィンドウの形式にする場合はこれ

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
