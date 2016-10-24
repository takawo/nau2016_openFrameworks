#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("008_ofxGuiExample2"); // ウィンドウのタイトルを設定
    ofSetBackgroundColor(ofColor::white); // 背景色を白に
   
    // GUIのセットアップ
    gui.setup("Parameters","setting.xml");
    gui.add(countX.set("countX",50, 0, 200)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(stepX.set("stepX", 20,0,200)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(twistX.set("twistX",5, -45, 45)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.loadFromFile( "settings.xml" ); // XMLの読み込み
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
    
    gui.draw();
}

//--------------------------------------------------------------
// 自作関数stripedPattern
void ofApp::stripePattern(){
    ofSetColor(ofColor::black); // 色を黒に指定
    ofSetLineWidth(1.0); // 線幅を1pxに
    ofNoFill();
    for (int i=-countX; i<=countX; i++) {
        ofPushMatrix();
        ofTranslate( i * stepX, 0 ); ofRotate( i * twistX );
        ofScale( 6, 6 );
        ofDrawTriangle( 0, 0, -50, 100, 50, 100 );
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::exit(){
    gui.saveToFile("settings.xml");
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
