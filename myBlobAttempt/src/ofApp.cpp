#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    ofEnableDepthTest();
    baseNode.setPosition(0,0,0);
    childNode.setParent(baseNode);
    childNode.setPosition(0, 0, 200);
    grandChildNode.setParent(childNode);
    grandChildNode.setPosition(0, 50, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    baseNode.panDeg(1);
    childNode.tiltDeg(3);
    
    line.addVertex(grandChildNode.getGlobalPosition());
    if(line.size() > 500) {
        line.getVertices().erase(line.getVertices().begin());
    }
    if(mouseInFrame) {
        for (auto &vert : line.getVertices()){
            vert.x += ofRandom(-1,1);
            vert.y += ofRandom(-1,1);
            vert.z += ofRandom(-1,1);
        }
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    } else {
        ofSetColor(255,255,255);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    line.draw();
    cam.end();
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
    mouseInFrame = true;
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    mouseInFrame = false;
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
