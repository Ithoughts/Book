//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "BooksManagerDelegateProtocol.h"

@interface BooksManager : NSObject
{
    NSMutableSet * badTargets;
    NSString * thisTrackable;
    NSMutableData * bookInfo;
    
    id <BooksManagerDelegateProtocol> delegate;
    
}
@property (readwrite, nonatomic, setter = cancelNetworkOperations:) BOOL cancelNetworkOperation;
@property (readonly, nonatomic, getter = isNetworkOperationInProgress) BOOL networkOperationInProgress;

+(BooksManager *)sharedInstance;
- (void)bookWithJSONFilename:(NSString *)jsonFilename withDelegate:(id <BooksManagerDelegateProtocol>)aDelegate forTrackableID:(const char *)trackableID;
- (void)addBadTargetId:(const char*)aTargetId;
- (BOOL)isBadTarget:(const char*)aTargetId;

@end
