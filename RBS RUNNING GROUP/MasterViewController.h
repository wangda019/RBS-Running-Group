//
//  MasterViewController.h
//  RBS RUNNING GROUP
//
//  Created by 国境以南 on 15/5/3.
//  Copyright (c) 2015年 国境以南. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

