//
//  AppDelegate.h
//  YDHeaderTableView
//
//  Created by cq on 2017/4/26.
//  Copyright © 2017年 cq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

