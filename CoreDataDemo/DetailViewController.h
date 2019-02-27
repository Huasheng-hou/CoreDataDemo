//
//  DetailViewController.h
//  CoreDataDemo
//
//  Created by 华生侯 on 2019/2/27.
//  Copyright © 2019 华生侯. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataDemo+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

