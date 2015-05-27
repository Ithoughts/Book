//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//



#import "Book.h"

@implementation Book

@synthesize targetID, thumbnailURL, ratingsQuantity, ratingAverage, listPrice, yourPrice, title, author, bookURL;

#pragma mark - Public

-(id)initWithDictionary:(NSDictionary *)aDictionary
{
    self = [super init];
    if (self)
    {
        self.targetID = [aDictionary objectForKey:@"targetid"];
        self.thumbnailURL = [aDictionary objectForKey:@"thumburl"];
        self.ratingsQuantity = [[aDictionary objectForKey:@"# of ratings"] integerValue];
        self.ratingAverage = [[aDictionary objectForKey:@"average rating"] floatValue];
        self.listPrice = [[aDictionary objectForKey:@"list price"] floatValue];
        self.yourPrice = [[aDictionary objectForKey:@"your price"] floatValue];
        self.title = [aDictionary objectForKey:@"title"];
        self.author = [aDictionary objectForKey:@"author"];
        self.bookURL = [aDictionary objectForKey:@"bookurl"];
    }
    return self;
}

-(void)dealloc
{
    [bookURL release];
    [thumbnailURL release];
    [title release];
    [author release];
    [super dealloc];
}

#pragma mark - Properties

-(NSString *)listPriceString
{
    NSString *retVal = [NSString stringWithFormat:@"$%.2f", listPrice];
    return retVal;
}

-(NSString *)yourPriceString
{
    NSString *retVal = [NSString stringWithFormat:@"$%.2f", yourPrice];
    return retVal;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@ ::: %@ - %@ - %@ - %@ - %f (%ld)", [super description], self.title, self.author, self.listPriceString, self.yourPriceString, self.ratingAverage, (long)self.ratingsQuantity];
}
@end
