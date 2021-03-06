#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false);
    ofBackground(0);
    ofSetColor(255);
}

//--------------------------------------------------------------
void testApp::update(){
    float positionStandard = 120;
    x = generator.getNormal(positionStandard, ofGetWidth()/2);
    y = generator.getNormal(positionStandard, ofGetHeight()/2);
    
    float colorStandard = 120;
    float hue = generator.getNormal(30, 255/2);
    color = ofColor::fromHsb(hue, 255, 255);
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(color, 120);
    ofCircle(x, y, 20);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
