#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("005_FunctionExample"); // ウィンドウタイトルを設定
    ofSetBackgroundColor(ofColor::white); // 背景色を白に
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix(); // 座標の原点(0,0)を保存（左上）
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // 原点を画面の中心へ移動
    stripePattern(); // 関数stripePatternを実行
    ofPopMatrix(); // 座標の原点を復帰
    
    
}

//--------------------------------------------------------------
// 自作関数stripePattern
void ofApp::stripePattern(){
    ofSetColor(ofColor::black); // 色を黒に指定
    ofSetLineWidth(1.0); // 線幅を1pxに
    //-50〜50の間で1ずつ変数iの値を増やしながら、{}内を繰り返す
    for(int i = -50; i < 50; i++){
        ofPushMatrix(); // 原点となる座標位置を保存（画面の中心）
        ofTranslate(i*10,0); // 原点となる座標位置を移動
        ofRotate(i*5); // 回転
        ofDrawLine(0,-200,0,200); // 線を描画
        ofDrawCircle(0, sin((i+ofGetFrameNum())/100.0)*200, 5); // 線分上を移動する円を描画
        ofPopMatrix(); // 座標位置を復帰（画面の中心）
    }
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
