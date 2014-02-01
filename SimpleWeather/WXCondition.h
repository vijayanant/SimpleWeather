//
//  WXCondition.h
//  SimpleWeather
//
//  Created by Vijay Ananth on 01/02/2014.
//  Copyright (c) 2014 Vijay Ananth. All rights reserved.
//

#import <Mantle.h>

@interface WXCondition : MTLModel <MTLJSONSerializing>
    @property (nonatomic, strong) NSDate *date;
    @property (nonatomic, strong) NSNumber *humidity;
    @property (nonatomic, strong) NSNumber *temperature;
    @property (nonatomic, strong) NSNumber *tempHigh;
    @property (nonatomic, strong) NSNumber *tempLow;
    @property (nonatomic, strong) NSString *locationName;
    @property (nonatomic, strong) NSDate *sunrise;
    @property (nonatomic, strong) NSDate *sunset;
    @property (nonatomic, strong) NSString *conditionDescription;
    @property (nonatomic, strong) NSString *condition;
    @property (nonatomic, strong) NSNumber *windBearing;
    @property (nonatomic, strong) NSNumber *windSpeed;
    @property (nonatomic, strong) NSString *icon;

    - (NSString *)imageName;
@end
