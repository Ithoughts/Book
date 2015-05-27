//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "SampleAppMenu.h"
#import "BooksControllerDelegateProtocol.h"
#import "SampleApplicationSession.h"
#import "BooksEAGLView.h"
#import "BooksOverlayViewController.h"
#import "Book.h"

@interface BooksViewController : UIViewController <SampleApplicationControl, BooksControllerDelegateProtocol, UIGestureRecognizerDelegate>{
    BooksOverlayViewController * bookOverlayController;
    BooksEAGLView * eaglView;
    SampleApplicationSession * vapp;
   
    UITapGestureRecognizer * tapGestureRecognizer;
    BOOL scanningMode;
    BOOL isVisualSearchOn;
    
    NSString * lastTargetIDScanned;
    Book * lastScannedBook;
    
    id backgroundObserver;
    id activeObserver;
    int lastErrorCode;
}

@end
