//
//  cdmMasterViewController.h
//  cdmiOS
//
//  Created by Bill Banks on 12/4/12.
//  Copyright (c) 2012 DePaul. All rights reserved.
//

#import <UIKit/UIKit.h>

@class cdmDetailViewController;

#import <CoreData/CoreData.h>

@interface cdmMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) cdmDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
