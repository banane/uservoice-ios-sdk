//
//  UVDeflection.h
//  UserVoice
//
//  Created by Austin Taylor on 9/19/13.
//  Copyright (c) 2013 UserVoice Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UVBaseModel;

@interface UVDeflection : NSObject

+ (void)setSearchText:(NSString *)query;
+ (void)trackDeflection:(NSString *)kind deflector:(UVBaseModel *)model;
+ (void)trackSearchDeflection:(NSArray *)results;
@end
