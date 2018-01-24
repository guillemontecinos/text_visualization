#include "ofApp.h"
string myString = "New York, I Love You But you're bringing me down New York, I Love You But you're bringing me down Like a rat in a cage Pulling minimum wage New York, I Love You But you're bringing me down New York, you're safer And you're wasting my time Our records all show You are filthy but fine But they shuttered your stores When you opened the doors To the cops who were bored Once they'd run out of crime New York, you're perfect Don't please don't change a thing Your mild billionaire mayor's Now convinced he's a king So the boring collect I mean all disrespect In the neighborhood bars I'd once dreamed I would drink New York, I Love You But you're freaking me out There's a ton of the twist But we're fresh out of shout Like a death in the hall That you hear through your wall New York, I Love You But you're freaking me out New York, I Love You But you're bringing me down New York, I Love You But you're bringing me down Like a death of the heart Jesus, where do I start? But you're still the one pool Where I'd happily drown And oh.. Take me off your mailing list For kids who think it still exists Yes, for those who think it still exists Maybe I'm wrong And maybe you're right Maybe I'm wrong And maybe you're right Maybe you're right Maybe I'm wrong And just maybe you're right And oh.. Maybe mother told you true And there'll always be somebody there for you And you'll never be alone But maybe she's wrong And maybe I'm right And just maybe she's wrong Maybe she's wrong And maybe I'm right And if so, is there? ";
int pixPix = 10;
int counter = 0;

//--------------------------------------------------------------
void ofApp::setup(){
//    image.load("sofi2.jpg");
    image.load("sofi2.jpg");
    font.load("helvetica.otf",(int) pixPix*.9);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSeedRandom(0);
}

//--------------------------------------------------------------
void ofApp::draw(){
    counter = -1;
    ofBackground(0);
    ofRectangle rect = font.getStringBoundingBox(myString, 0, 0);
    unsigned char * data = image.getPixels().getData();
    
    for (int j = 0; j < image.getHeight(); j += pixPix) {
        for (int i = 0; i < image.getWidth(); i += pixPix) {
            counter++;
            if (counter >= myString.length()) {
                counter = 0;
            }
            //getting pixels data
            int index = (j * image.getWidth() + i) * 3;
            int red =   data[index];
            int green = data[index + 1];
            int blue =  data[index + 2];
            //drawing chars with symbol and color selected
            ofSetColor(red, green, blue);
            ofPushMatrix();
                ofTranslate(i,j);
//                font.drawString(myString,0,rect.getHeight());
                font.drawString(myString.substr(counter,1),0,rect.getHeight());
            ofPopMatrix();
        }
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
