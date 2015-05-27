//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Book.h"

@protocol BooksControllerDelegateProtocol <NSObject>

- (NSString *)lastTargetIDScanned;

- (void)setLastTargetIDScanned:(NSString *) targetId;

- (BOOL)isVisualSearchOn;

- (void)setVisualSearchOn:(BOOL) isOn;

- (void)enterScanningMode;

- (void)setLastScannedBook: (Book *) book;

- (void)setOverlayLayer:(CALayer *)overlayLayer;

@end
