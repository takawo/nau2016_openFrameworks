#include "ofMain.h" // openFrameworksのライブラリの読み込み
#include "ofApp.h" // ofApp.hの読み込み



//========================================================================
// 実行ファイル
int main( ){
    // ウィンドウサイズを指定,OF_WINDOWをOF_FULLSCREENにすることで、フルスクリーンになる
    ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context
    // ofAppを実行
	ofRunApp(new ofApp());

}
