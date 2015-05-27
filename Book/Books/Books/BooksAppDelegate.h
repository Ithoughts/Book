//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "SampleGLResourceHandler.h"

@interface BooksAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (assign, nonatomic) id <SampleGLResourceHandler> glResourceHandler;

@end
