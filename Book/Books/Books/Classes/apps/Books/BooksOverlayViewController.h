//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import "BooksControllerDelegateProtocol.h"

@class TargetOverlayView;

// OverlayViewController class overrides one UIViewController method
@interface BooksOverlayViewController : UIViewController
{
    UILabel * statusLabel;
    UIButton * closeButton;
    NSTimer * statusTimer;
    
    UIView * optionsOverlayView; 
    UIView * loadingView;
    
    id <BooksControllerDelegateProtocol> booksDelegate;
}

@property (nonatomic, retain) IBOutlet TargetOverlayView * targetOverlayView;

- (id)initWithDelegate:(id<BooksControllerDelegateProtocol>) delegate;

- (void) handleViewRotation:(UIInterfaceOrientation)interfaceOrientation;

- (void) killTimer;

@end
