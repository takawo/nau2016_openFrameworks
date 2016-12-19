#include "ofApp.h"

using namespace ofxCv;

void ofApp::setup() {
    cam.initGrabber(1280, 720);
    tracker.setup();
    gui.setup();
    gui.add(mosaic_width.set("mosaic_width", 250, 0, 400)); // パラメータの追加  引数は(ラベル名,初期値,最小値，最大値)
    gui.add(mosaic_height.set("mosaic_height", 90, 0, 400)); // パラメータの追加  引数は(ラベル名,初期値)
    gui.add(mosaic_ratio.set("mosaic_ratio", 0.2, 0, 1.0)); // パラメータの追加  引数は(ラベル名,初期値)
    
}

void ofApp::update() {
    cam.update();
    if(cam.isFrameNew()) {
        tracker.update(toCv(cam));
    }
}

void ofApp::draw() {
    ofSetColor(255);
    cam.draw(0, 0);
    ofSetLineWidth(2);
    if(tracker.getFound()){
        ofPolyline leftEyes = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE_TOP);
        ofPoint leftEye = leftEyes.getCentroid2D();

        ofPolyline rightEyes = tracker.getImageFeature(ofxFaceTracker::RIGHT_EYE_TOP);
        ofPoint rightEye = rightEyes.getCentroid2D();
        
        //leftEyes.draw();
        //rightEyes.draw();
        ofDrawCircle(leftEye.x, leftEye.y, 50);
        ofDrawCircle(rightEye.x, leftEye.y, 50);

    }
    ofDrawBitmapString(ofToString((int) ofGetFrameRate()), 10, 20);
    gui.draw();
}

void ofApp::keyPressed(int key) {
    if(key == 'r') {
        tracker.reset();
    }
}


