#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1024, 768); // ウィンドウサイズを指定
    ofSetWindowTitle("004_ofDrawShape2DExample"); // ウィンドウのタイトルを指定
    ofSetBackgroundColor(ofColor::white); // 背景色を白に 方法1
    // ofSetBackgroundColor(255, 255, 255); // 背景色を白に 方法2
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0); // 描画色を黒に
    ofSetLineWidth(1); // 線幅を1pxに
    ofDrawLine(100,100,100,668); // 線を引く
    
    ofSetLineWidth(3); // 線幅を3pxに
    ofDrawLine(300,100,300,668); // 線を引く
    
    ofFill(); // 塗りつぶしとして描画
    ofDrawRectangle(450, 100, 200, 568); // 引数：x,y,w(幅),h(高さ)

    ofNoFill(); // 塗りつぶしナシの線として描画
    ofDrawRectangle(724, 100, 200, 568); // 引数：x,y,w(幅),h(高さ)
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
