//
//  demoParticle.h
//  mySketch
//
//  Created by Albert Kim on 5/8/17.
//
//

#ifndef demoParticle_h
#define demoParticle_h


#pragma once
#include "ofMain.h"


enum particleMode{
    PARTICLE_MODE_ATTRACT = 0,
    PARTICLE_MODE_REPEL,
    PARTICLE_MODE_NEAREST_POINTS,
    PARTICLE_MODE_NOISE
};

class Particle{
    
public:
    Particle();
    
    void setup();
    void setMode(particleMode newMode);
    void setAttractPoints( vector <ofPoint> * attract );
    
    void reset();
    void update(ofPoint centerOfFace, vector <ofPoint> attractPoints, float _scale, float _drag);
    void draw();
    void chaos(float forceMultipler);
    
    ofPoint pos;
    ofPoint vel;
    ofPoint frc;
    float posVal;
    float timeVal;
    float frcVar;
    ofFloatColor color;
    
    float drag;
    float uniqueVal;
    float scale;
    
    particleMode mode;
    
    vector <ofPoint> * attractPoints;
    
};

#endif /* Particle_h */
