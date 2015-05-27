//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "Book.h"

@interface BookDataParser : NSObject

+(NSDictionary *)parseData:(NSData *)dataToParse;
+(NSDictionary *)parseString:(NSString *)stringToParse;

@end
