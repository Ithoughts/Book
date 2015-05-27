//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Book.h"

@protocol BooksManagerDelegateProtocol <NSObject>

-(void)infoRequestDidFinishForBook:(Book *)theBook withTrackableID:(const char*)trackable byCancelling:(BOOL)cancelled;

@end
