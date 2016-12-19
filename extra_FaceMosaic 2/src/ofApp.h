#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"

#include "ofxFaceTracker.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofVideoGrabber cam;
	ofxFaceTracker tracker;
    ofxPanel gui;
    ofParameter<float> mosaic_width;
    ofParameter<float> mosaic_height;
    ofParameter<float> mosaic_ratio;
    
};
