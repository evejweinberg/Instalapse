#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    fbo.allocate(500, 500, GL_RGB);
    img.allocate(256, 256, OF_IMAGE_COLOR);
    
    mGrabber.setup( 640, 640 );
    
}

//--------------------------------------------------------------
void ofApp::update()
{
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    //mGrabber.draw( 0, 0 );


    fbo.begin();
    mGrabber.draw( 0, 0 );
    fbo.end();
    
    ofPixels fboPixels;
    
    fbo.readToPixels(fboPixels);
    img.setFromPixels(fboPixels);
    
    img.draw(0,0);
    
    
    img.save("a.png");
    
    
    //printf( "hello %f\n", 2.2 );
    
    float something = 2.3;
    std::cout << "Hello " << something << " and ... " << std::endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if( key == ' ' )
    {
        img.save("b.png");
        mGrabber.grabScreen();
    }
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
