//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "ImagesManagerDelegateProtocol.h"


@interface ImagesManager : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSMutableData * bookImage;
    Book * thisBook;
    
    id <ImagesManagerDelegateProtocol> delegate;
}
@property (readwrite, nonatomic) BOOL cancelNetworkOperation;
@property (readonly, nonatomic) BOOL networkOperationInProgress;

+(id)sharedInstance;
-(void)imageForBook:(Book *)theBook withDelegate:(id <ImagesManagerDelegateProtocol>)aDelegate;
-(UIImage *)cachedImageFromURL:(NSString*)anURLString;

@end
