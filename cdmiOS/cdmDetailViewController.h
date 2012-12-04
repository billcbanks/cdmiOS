//
//  cdmDetailViewController.h
//  cdmiOS
//
//  Created by Bill Banks on 12/4/12.
//  Copyright (c) 2012 DePaul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cdmDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
