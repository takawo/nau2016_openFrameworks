#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxPanel gui; // GUI
    ofParameter<float> posX; // GUIのパラメータ: x座標
    ofParameter<float> posY; // GUIのパラメータ: y座標
    ofParameter<float> radius; // GUIのパラメータ: 半径
    ofParameter<bool> filled; // GUIのパラメータ: 塗りつぶしの真偽値
    ofParameter<ofColor> color; // GUIのパラメータ: 色
    
};
