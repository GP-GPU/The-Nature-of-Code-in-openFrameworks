//
//  Balloon.h
//  2_Forces_Exercise_2_1
//
//  Created by Torbjørn Vik Lunde on 25.01.14.
//
//

#ifndef ____Forces_Exercise_2_1__Balloon__
#define ____Forces_Exercise_2_1__Balloon__

#include <iostream>
#include "ofMain.h"
#include <ctime>

class Balloon {
    
public:
    Balloon();
    
    void update();
    void draw();
    
private:
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float radius;
    
    ofVec2f wind;
    ofVec2f updrift;
    
    float windNoiseOffsetX;
    float windNoiseOffsetY;
    
};

#endif /* defined(____Forces_Exercise_2_1__Balloon__) */
