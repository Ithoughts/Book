//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Book.h"

@protocol ImagesManagerDelegateProtocol <NSObject>

-(void)imageRequestDidFinishForBook:(Book *)theBook withImage:(UIImage *)anImage byCancelling:(BOOL)cancelled;

@end
