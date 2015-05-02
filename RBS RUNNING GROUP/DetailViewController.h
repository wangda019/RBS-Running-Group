//
//  DetailViewController.h
//  RBS RUNNING GROUP
//
//  Created by 国境以南 on 15/5/3.
//  Copyright (c) 2015年 国境以南. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

