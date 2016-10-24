#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("005_ofDrawTextExample"); // ウィンドウのタイトルを表示
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // 色をHSBで指定する方法：経過時間で背景色を変化させる例
    ofColor c = ofColor::fromHsb(ofGetFrameNum()/10%255, 200, 255);
    ofBackground(c); // 背景色を指定
    
    // テキストに背景を付けて表示（読みやすくしたいなどの場合）
    ofDrawBitmapStringHighlight("FPS : " + ofToString(ofGetFrameRate(),2), 20, 20); // FPSを表示
    // テキストを表示
    ofDrawBitmapString("FrameNumber : " + ofToString(ofGetFrameNum()), 20,40); // 現在のフレーム数を表示

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
