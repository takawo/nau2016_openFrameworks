#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
    fbo.begin();
    ofBackground(255,255,255);
    fbo.end();
    
    gui.setup();
    gui.add(radius.setup("radius", 10, 1, 100));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(255,0,0);
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), radius);
    fbo.end();

    fbo.draw(0,0);
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    fbo.begin();
    ofBackground(255,255,255);
    fbo.end();
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
