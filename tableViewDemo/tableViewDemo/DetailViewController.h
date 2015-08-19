//
//  DetailViewController.h
//  tableViewDemo
//
//  Created by MAC_AO on 15/8/19.
//  Copyright (c) 2015年 MAC_AO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

