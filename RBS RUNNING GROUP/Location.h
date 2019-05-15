//
//  Location.h
//  RBS RUNNING GROUP
//
//  Created by 国境以南 on 15/5/3.
//  Copyright (c) 2015年 国境以南. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Location : NSManagedObject

@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSDate * timestamp;
@property (nonatomic, retain) NSManagedObject *run;

@end
