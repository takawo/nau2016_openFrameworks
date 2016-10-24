#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("007_ofxGuiExample"); // ウィンドウのタイトルを設定
    
    // 円の解像度を設定
    ofSetCircleResolution(64);
    
    // GUIのセットアップ
    gui.setup();
    gui.add(posX.set("posX", ofGetWidth()/2, 0, 800)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(posY.set("posY", ofGetHeight()/2, 0, 800)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(radius.set("radius", 200, 0, 400)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(filled.set("filled",false)); // パラメータの追加  引数は(ラベル名,初期値)
    gui.add(color.set("color",ofColor(0,128,255))); // パラメータの追加  引数は(ラベル名,初期値)
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 背景色を指定（描画色の補色）
    ofColor bgColor = color.get().getInverted();
    ofSetBackgroundColor(bgColor);
    
    // 描画色を指定
    ofSetColor(color);
    
    // パラメータから塗りつぶし/線での描画を判別
    if(filled){
        ofFill();
    }else{
        ofNoFill();
        ofSetLineWidth(5);
    }
    // 円を描画
    ofDrawCircle(posX, posY, radius);
    // GUIを描画
    gui.draw();
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
