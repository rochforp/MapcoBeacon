//
//  BeacondoApp.h
//  Beacondo
//
//  Created by Narcelia on 16/03/2014.
//  Copyright (c) 2014 Beacondo. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>

#define ENABLE_BEACONS 1

@interface BeacondoApp : NSObject

@property (strong, nonatomic) id activeApp;
@property (assign, nonatomic) bool regionEntryShown;


/* loadApp will read your app configuration from the Content directory inside Xcode. */
- (UIViewController*)loadAppWithOptions:(NSDictionary*)options;


/* loadAppWithPath lets you have multiple content directories inside a single app,
 for example if you want to download things remotely. NB: this is available only
 with the Enterprise license. */
- (UIViewController*)loadAppWithPath:(NSString*)path options:(NSDictionary*)options;


/* Internal methods are below */
#if ENABLE_BEACONS
- (void)applicationDidDetermineState:(CLRegionState)state forRegion:(CLRegion *)region;
#else
- (void)applicationDidDetermineState:(NSInteger)state forRegion:(id)region;
#endif

- (void)applicationDidRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;

@end
