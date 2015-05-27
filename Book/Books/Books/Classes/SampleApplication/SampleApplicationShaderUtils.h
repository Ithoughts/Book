//
//  Created by  on 15/4/21.
//  Copyright (c) 2015年 BR. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SampleApplicationShaderUtils : NSObject



+ (int)createProgramWithVertexShaderFileName:(NSString*) vertexShaderFileName
                      fragmentShaderFileName:(NSString*) fragmentShaderFileName;

+ (int)createProgramWithVertexShaderFileName:(NSString*) vertexShaderFileName
                        withVertexShaderDefs:(NSString *) vertexShaderDefs
                      fragmentShaderFileName:(NSString *) fragmentShaderFileName
                      withFragmentShaderDefs:(NSString *) fragmentShaderDefs;


@end
