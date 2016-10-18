#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 垂直同期をON
    ofSetVerticalSync(true);
    // フレームレートを60fpsに指定(垂直同期ONのとき、MAXで60fps)
    ofSetFrameRate(60);
    isFullScreen = true;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 背景色を指定
    ofBackground(0, 128, 255);
    // 円の解像度を指定(3で三角形)
    ofSetCircleResolution(3);
    // 画面の中央に、半径300pxの円を描画
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 300);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofToggleFullscreen();
    isFullScreen = !isFullScreen;
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
