#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLog(OF_LOG_NOTICE, "setup"); // ログの出力。Xcode下のコンソールに"setup"を出力
}

//--------------------------------------------------------------
void ofApp::update(){
    ofLog(OF_LOG_NOTICE, "update");　// Xcode下のコンソールに"update"を出力
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofLog(OF_LOG_NOTICE, "draw"); // Xcode下のコンソールに"draw"を出力
    // Xcode下のコンソールに経過時間を表示。
    // ofToStringは数字を文字列に変換する関数
    ofLog(OF_LOG_NOTICE, "ElapsedTime : " + ofToString(ofGetElapsedTimef()));
    

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
