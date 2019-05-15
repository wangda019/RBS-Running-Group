//
//  AccountDetailcontrollerViewController.m
//  RBS RUNNING GROUP
//
//  Created by 国境以南 on 15/5/5.
//  Copyright (c) 2015年 国境以南. All rights reserved.
//

#import "AccountDetailcontrollerViewController.h"
#import "MathController.h"

@interface AccountDetailcontrollerViewController ()

@property (nonatomic, weak) IBOutlet UILabel *donatedLabel;
@property (nonatomic, weak) IBOutlet UILabel *wordLabel;

@end

@implementation AccountDetailcontrollerViewController

-(void)donated{
    int money = [MathController getMoney];
    self.donatedLabel.text=[NSString stringWithFormat:@"You have donated %d Pence to charity!", money/200];

}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self donated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
