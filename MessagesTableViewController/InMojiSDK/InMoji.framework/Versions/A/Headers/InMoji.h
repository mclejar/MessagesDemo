//
//  InMoji.h
//  InMoji
//
//  Created by Fogg, Daniel on 4/26/14.
//  Copyright (c) 2014 Fogg, Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

extern NSString* const InMojiDataDidFinishUpdateNotification;

//nsdictionary keys for constructing userParams dictionary during SDK configuration
extern NSString* const InMojiUserParamFirstName;
extern NSString* const InMojiUserParamLastName;
extern NSString* const InMojiUserParamEmail;
extern NSString* const InMojiUserParamPhoneNumber;
extern NSString* const InMojiUserParamAccountId;
extern NSString* const InMojiUserParamAge;
extern NSString* const InMojiUserParamGender;
extern NSString* const InMojiUserParamRace;
extern NSString* const InMojiUserParamEmploymentStatus;
extern NSString* const InMojiUserParamIncome;
extern NSString* const InMojiUserParamMarried;
extern NSString* const InMojiUserParamHasKids;

@protocol InMojiLocationProvider <NSObject>

- (CLLocation*) currentLocation;

@end

@interface InMoji : NSObject

@property(weak, nonatomic) id<InMojiLocationProvider> locationProvider;

+ (InMoji*) sharedInMoji;
//pass in your application's provided api key and secret and construct the user params dictionary using predefined UserParam key strings defined above
- (void) configureWithAPIKey:(NSString*)apiKey secret:(NSString*)secret userParams:(NSDictionary*)params;

+ (NSBundle*) frameworkBundle;

@end
