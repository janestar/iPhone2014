//
//  AppDelegate.h
//  AirPlane
//
//  Created by JANESTAR on 14-12-15.
//  Copyright JANESTAR 2014年. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

// Added only for iOS 6 support
@interface MyNavigationController : UINavigationController <CCDirectorDelegate>
@end

@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*__weak director_;							// weak ref
}

@property (nonatomic, strong) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (weak, readonly) CCDirectorIOS *director;

@end
