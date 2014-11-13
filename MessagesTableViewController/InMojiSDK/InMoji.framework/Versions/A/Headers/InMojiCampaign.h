//
//  InMojiCampaign.h
//  InMoji
//
//  Created by Fogg, Daniel on 5/10/14.
//  Copyright (c) 2014 Fogg, Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kCodingKeyCampaignId;
extern NSString * const kCodingKeyCampaignAccountId;
extern NSString * const kCodingKeyCampaignSlug;
extern NSString * const kCodingKeyCampaignStartDate;
extern NSString * const kCodingKeyCampaignEndDate;
extern NSString * const kCodingKeyCampaignTitle;
extern NSString * const kCodingKeyCampaignName;
extern NSString * const kCodingKeyCampaignDescription;
extern NSString * const kCodingKeyCampaignUrl;
extern NSString * const kCodingKeyCampaignLogoUrl;
extern NSString * const kCodingKeyCampaignCreatedDate;
extern NSString * const kCodingKeyCampaignDeletedDate;
extern NSString * const kCodingKeyCampaignModifiedDate;
extern NSString * const kCodingKeyCampaignType;
extern NSString * const kCodingKeyCampaignCallToActionUrl;
extern NSString * const kCodingKeyCampaignEmojiUrl;
extern NSString * const kCodingKeyCampaignGroup;
extern NSString * const kCodingKeyCampaigniTunesUrl;
extern NSString * const kCodingKeyCampaignLocatorQuery;
extern NSString * const kCodingKeyCampaignPlayUrl;
extern NSString * const kCodingKeyCampaignLocales;

extern NSString * const kInMojiCampaignTypeStickerStr;
extern NSString * const kInMojiCampaignTypeLinkStr;
extern NSString * const kInMojiCampaignTypeLocationStr;
extern NSString * const kInMojiCampaignTypeAppLinkStr;
extern NSString * const kInMojiCampaignTypeStickerSort;

typedef enum {
    InMojiCampaignTypeSticker = 0,
    InMojiCampaignTypeLink = 1,
    InMojiCampaignTypeLocation = 2,
    InMojiCampaignTypeAppLink = 3,
} InMojiCampaignType;

@interface InMojiCampaign : NSObject

@property(nonatomic, copy)      NSString* campaignId;
@property(nonatomic, copy)      NSString* accountId;
@property(nonatomic, copy)      NSDate* createdDate;
@property(nonatomic, copy)      NSDate* deletedDate;
@property(nonatomic, copy)      NSString* slug;
@property(nonatomic, strong)    NSDate* startDate;
@property(nonatomic, strong)    NSDate* endDate;
@property(nonatomic, copy)      NSString* title;
@property(nonatomic, copy)      NSString* name;
@property(nonatomic, copy)      NSString* description;
@property(nonatomic, copy)      NSString* url;
@property(nonatomic, copy)      NSString* logoUrl;
@property(nonatomic, copy)      NSString* iTunesUrl;
@property(nonatomic, strong)    NSDate* modifiedDate;
@property(nonatomic, copy)      NSString* type;
@property(nonatomic, copy)      NSString* callToActionUrl;
@property(nonatomic, copy)      NSString* locatorQuery;
@property(nonatomic, copy)      NSString* playUrl;
@property(nonatomic, copy)      NSString* emojiUrl;
@property(nonatomic, copy)      NSString* group;
@property(nonatomic, strong)    NSDictionary* passedParams;
@property(nonatomic, strong)    NSArray* locales;
@property(nonatomic, copy)    NSNumber* width;
@property(nonatomic, copy)    NSNumber* height;
@property(nonatomic, copy)    NSString* sort;

- (BOOL)updateWithDictionary:(NSDictionary *)campaignDictionary;
+ (InMojiCampaignType)campaignTypeForString:(NSString *)type;
+ (NSString*)campaignTypeString:(InMojiCampaignType)type;
- (InMojiCampaignType) campaignType;

- (NSString*)actionURL;
- (NSString*)messageUrlStringWithCustomParams:(NSString*)paramsStr;

@end
