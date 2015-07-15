//
//  AppDelegate.h
//  BeacondoApp
//
//  Created by Narcelia on 22/10/2014.
//  Copyright (c) 2014 Beacondo. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

#import "BeacondoApp.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BeacondoApp *app;

@property (strong, nonatomic) CLLocationManager *locationManager;

@end

