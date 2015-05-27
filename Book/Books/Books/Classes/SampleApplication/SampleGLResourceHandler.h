//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//

@protocol SampleGLResourceHandler

@required
- (void) freeOpenGLESResources;
- (void) finishOpenGLESCommands;

@end