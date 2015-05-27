//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleAppLeftMenuViewController;
@interface SampleAppSlidingMenuController : UIViewController <UIGestureRecognizerDelegate>{
    
    // we keep track of the gesture recognizer in order to be able to enable/disable them
    UITapGestureRecognizer * tapGestureRecognizer;
    UIPanGestureRecognizer * panGestureRecognizer;
    
    CGFloat kSlidingMenuWidth;
    BOOL ignoreDoubleTap;
    // true when the left menu is displayed
    BOOL showingLeftMenu;
}

- (id)initWithRootViewController:(UIViewController *)controller;
- (void)showRootController:(BOOL)animated;
- (void)showLeftMenu:(BOOL)animated;
- (void)shouldIgnoreDoubleTap;
- (void)dismiss;

@end

