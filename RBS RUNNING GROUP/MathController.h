//
//  MathController.h
//  RBS RUNNING GROUP
//
//  Created by 国境以南 on 15/5/3.
//  Copyright (c) 2015年 国境以南. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MathController : NSObject


+ (NSString *)stringifyDistance:(float)meters;
+ (NSString *)stringifySecondCount:(int)seconds usingLongFormat:(BOOL)longFormat;
+ (NSString *)stringifyAvgPaceFromDist:(float)meters overTime:(int)seconds;
+ (NSArray *)colorSegmentsForLocations:(NSArray *)locations;
+ (int) getMoney;

@end
