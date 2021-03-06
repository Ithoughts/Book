//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#ifndef _QCAR_QUAD_H_
#define _QCAR_QUAD_H_


#define NUM_QUAD_VERTEX 4
#define NUM_QUAD_INDEX 6


// How To Draw a 2D image on top of a target using OpenGL ES

static const float quadVertices[NUM_QUAD_VERTEX * 3] =
{
   -1.00f,  -1.00f,  0.0f,
    1.00f,  -1.00f,  0.0f,
    1.00f,   1.00f,  0.0f,
   -1.00f,   1.00f,  0.0f,
};

static const float quadTexCoords[NUM_QUAD_VERTEX * 2] =
{
    0, 0,
    1, 0,
    1, 1,
    0, 1,
};

static const float quadNormals[NUM_QUAD_VERTEX * 3] =
{
    0, 0, 1,
    0, 0, 1,
    0, 0, 1,
    0, 0, 1,

};

static const unsigned short quadIndices[NUM_QUAD_INDEX] =
{
     0,  1,  2,  0,  2,  3,
};


#endif // _QC_AR_QUAD_H_
