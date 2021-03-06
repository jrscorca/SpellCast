//
//  AppDelegate.h
//  SpellCast
//
//  Created by Joshua Scorca on 8/9/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@class WTMGlyphDetectorView;
@interface AppController : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	UINavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UINavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@property (nonatomic, strong) WTMGlyphDetectorView *gestureDetectorView;
@property (nonatomic, strong) IBOutlet UILabel *lblStatus;

@end
