//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Vijay Ananth on 01/02/2014.
//  Copyright (c) 2014 Vijay Ananth. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    return paths;
}
@end
