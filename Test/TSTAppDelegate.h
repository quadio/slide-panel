//
//  TSTAppDelegate.h
//  Test
//
//  Created by Ryan Connelly on 2/27/13.
//  Copyright (c) 2013 Test Account. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TSTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
