//
//  WXManager.h
//  SimpleWeather
//
//  Created by Vijay Ananth on 01/02/2014.
//  Copyright (c) 2014 Vijay Ananth. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

#import "WXCondition.h"

@interface WXManager : NSObject <CLLocationManagerDelegate>

+ (instancetype) sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocatio;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void) findCurrentLocation;

@end
