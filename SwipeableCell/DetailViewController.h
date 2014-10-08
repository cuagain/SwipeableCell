//
//  DetailViewController.h
//  SwipeableCell
//
//  Created by thanawat.s on 10/8/2557 BE.
//  Copyright (c) 2557 thanawat.s. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

