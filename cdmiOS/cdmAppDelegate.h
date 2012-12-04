//
//  cdmAppDelegate.h
//  cdmiOS
//
//  Created by Bill Banks on 12/4/12.
//  Copyright (c) 2012 DePaul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cdmAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
