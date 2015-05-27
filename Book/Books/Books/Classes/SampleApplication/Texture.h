//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface Texture : NSObject {
@private
    int channels;
}


// --- Properties ---
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readwrite) int textureID;
@property (nonatomic, readonly) unsigned char* pngData;


// --- Public methods ---
- (id)initWithImageFile:(NSString*)filename;

@end
