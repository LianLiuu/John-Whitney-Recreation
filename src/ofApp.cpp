#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float xorig = 400;
	float yorig = 400;
	float radius = 200;
	float angle = ofGetElapsedTimef();
	float x = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, ofGetWidth());
	float y = ofMap(sin(ofGetElapsedTimef()*2) + sin(ofGetElapsedTimef()*2), -2, 2, 0, ofGetWidth());
	
	// create 12 vertical lines
	for (int i = 0; i < 12; i++) {
		float scale = ofMap(i, 0, 12, 1, 2.5);
		// setting x
		float x = ofMap(sin(ofGetElapsedTimef()*scale), -1, 1, 0, ofGetWidth());

		// combining two sine waves to get y to mimic infinity sign 
		float y = ofMap(sin(ofGetElapsedTimef()*2*scale) + sin(ofGetElapsedTimef()*2*scale), -2, 2, 0, ofGetWidth()/2);
		//float x = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, ofGetWidth());
		
		// draw 12 lines with roun edges with x y values
		ofDrawRectRounded(x, y, 5, 400, 2);
		//std::cout << scale;
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
