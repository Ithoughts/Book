//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface Book : NSObject
{
    NSString * targetID;
    NSString * thumbnailURL;
    NSInteger ratingsQuantity;
  
    NSString * title;
    NSString * author;
    NSString * bookURL;
    
    float ratingAverage;
    float listPrice;
    float yourPrice;
}
@property (copy) NSString * targetID;
@property (copy) NSString * thumbnailURL;
@property (assign) NSInteger ratingsQuantity;

@property (copy) NSString * title;
@property (copy) NSString * author;
@property (copy) NSString * bookURL;

@property (assign) float ratingAverage;
@property (assign) float listPrice;
@property (assign) float yourPrice;

@property (readonly) NSString * listPriceString;
@property (readonly) NSString * yourPriceString;

-(id)initWithDictionary:(NSDictionary *)aDictionary;

@end
