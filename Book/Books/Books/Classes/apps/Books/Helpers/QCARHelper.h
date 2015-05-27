//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import <UIKit/UIKit.h>

typedef enum {
    kTargetStatusRequesting,
    kTargetStatusNone
} TargetStatus;

@interface QCARHelper : NSObject
{
    
}

+(TargetStatus)targetStatus;
+(NSString*) errorStringFromCode:(int) code;

+ (void)startDetection;
+ (void)stopDetection;

+ (BOOL)isRetinaDevice;

@end
