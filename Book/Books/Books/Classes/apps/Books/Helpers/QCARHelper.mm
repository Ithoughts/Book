//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import "QCARHelper.h"

//#import "EAGLView.h"
#import "Texture.h"
#include <QCAR/QCAR.h>
#include <QCAR/TrackerManager.h>
#include <QCAR/ObjectTracker.h>
#include <QCAR/ImageTarget.h>
#include <QCAR/DataSet.h>
#include <QCAR/TargetFinder.h>
#include <QCAR/TargetSearchResult.h>

@implementation QCARHelper

#pragma mark - Private

+(void)toggleDetection:(BOOL)isEnabled
{
    //  Starts / Stops Target and Books recognition
    
    QCAR::TrackerManager& trackerManager = QCAR::TrackerManager::getInstance();
    QCAR::ObjectTracker* objectTracker = static_cast<QCAR::ObjectTracker*>(
                                                                        trackerManager.getTracker(QCAR::ObjectTracker::getClassType()));
    assert(objectTracker != 0);
    
    QCAR::TargetFinder* targetFinder = objectTracker->getTargetFinder();
    assert (targetFinder != 0);

    
    if (isEnabled)
    {
        objectTracker->start();
        targetFinder->startRecognition();
    }
    else
    {
        objectTracker->stop();
        targetFinder->stop();
    }
}

#pragma mark - Public

+(TargetStatus)targetStatus
{
    TargetStatus retVal = kTargetStatusNone;
    
    // Get the tracker manager:
    QCAR::TrackerManager& trackerManager = QCAR::TrackerManager::getInstance();
    
    // Get the image tracker:
    QCAR::ObjectTracker* objectTracker = static_cast<QCAR::ObjectTracker*>(trackerManager.getTracker(QCAR::ObjectTracker::getClassType()));
    
    // Get the target finder:
    if (objectTracker)
    {
        QCAR::TargetFinder * finder = objectTracker->getTargetFinder();
        
        if (finder && finder->isRequesting())
        {
            retVal = kTargetStatusRequesting;
        }
    }
    
    return retVal;
}

+ (NSString*) errorStringFromCode:(int) code{
    
    NSString* errorMessage = [NSString stringWithUTF8String:"Unknown error occured"];
    if (code == QCAR::TargetFinder::UPDATE_ERROR_AUTHORIZATION_FAILED)
        errorMessage=@"Error: AUTHORIZATION_FAILED";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_PROJECT_SUSPENDED)
        errorMessage=@"Error: PROJECT_SUSPENDED";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_NO_NETWORK_CONNECTION)
        errorMessage=@"Error: NO_NETWORK_CONNECTION";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_SERVICE_NOT_AVAILABLE)
        errorMessage=@"Error: SERVICE_NOT_AVAILABLE";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_BAD_FRAME_QUALITY)
        errorMessage=@"Error: BAD_FRAME_QUALITY";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_UPDATE_SDK)
        errorMessage=@"Error: UPDATE_SDK";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_TIMESTAMP_OUT_OF_RANGE)
        errorMessage=@"Error: TIMESTAMP_OUT_OF_RANGE";
    if (code == QCAR::TargetFinder::UPDATE_ERROR_REQUEST_TIMEOUT)
        errorMessage=@"Error: REQUEST_TIMEOUT";
    
    return errorMessage;
}

+ (void) stopDetection
{
    [QCARHelper toggleDetection:NO];
}

+ (void) startDetection
{
    [QCARHelper toggleDetection:YES];
}

+ (BOOL) isRetinaDevice
{
    BOOL retVal = ([[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)] &&
                   ([UIScreen mainScreen].scale == 2.0));
    return retVal;
}

@end
