//
//  AppDelegate.m
//
//  Created by Jesse Squires on 2/12/13.
//  Copyright (c) 2013 Hexed Bits. All rights reserved.
//
//  http://www.hexedbits.com
//
//
//  The MIT License
//  Copyright (c) 2013 Jesse Squires
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
//  associated documentation files (the "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the
//  following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
//  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
//  OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import "AppDelegate.h"
#import "DemoViewController.h"
#import <InMoji/InMoji.h>

@implementation AppDelegate

#define InMojiAPIKey @"PXbJLxIDGgPALQJIq2w213dmuZRXhIW4t64qebHJ"
#define InMojiAPISecret @"NQhdKVKtQFwl9vnTZFwxX7O3izqvy7BBzXlZAbPojRKiggRvO1Nt7Ko1qUi0H6lBOJOvZaz2vQAbPiRc"

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    NSDictionary* userParamsDictionary = [self exampleUserParams];
    [[InMoji sharedInMoji] configureWithAPIKey:InMojiAPIKey secret:InMojiAPISecret userParams:userParamsDictionary];

    DemoViewController *vc = [DemoViewController new];
	UINavigationController *nc = [[UINavigationController alloc] initWithRootViewController:vc];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
	self.window.rootViewController = nc;
	[self.window makeKeyAndVisible];
    
    return YES;
}
							
- (NSDictionary*) exampleUserParams{
    NSDictionary* userParamsDictionary = @{InMojiUserParamFirstName:       @"First Name",
                                           InMojiUserParamLastName:        @"Last Name",
                                           InMojiUserParamAccountId:       @"account id",
                                           InMojiUserParamAge:             @"13",
                                           InMojiUserParamEmail:           @"email address",
                                           InMojiUserParamEmploymentStatus:@"employmentStatus",
                                           InMojiUserParamGender:          @"gender string",
                                           InMojiUserParamHasKids:         @(YES),
                                           InMojiUserParamIncome:          @"58000",
                                           InMojiUserParamMarried:         @(NO),
                                           InMojiUserParamPhoneNumber:     @"+1 555 (555)-5555",
                                           InMojiUserParamRace:            @"race"};
    return userParamsDictionary;
}

- (void)applicationWillResignActive:(UIApplication *)application { }

- (void)applicationDidEnterBackground:(UIApplication *)application { }

- (void)applicationWillEnterForeground:(UIApplication *)application { }

- (void)applicationDidBecomeActive:(UIApplication *)application { }

- (void)applicationWillTerminate:(UIApplication *)application { }

@end