/* made by EzioChiu.
 */

@protocol FCTagProviding <NSObject, NFCopying>

@required

- (NSArray *)allowedStorefrontIDs;
- (NSString *)articleRecirculationConfigJSON;
- (<FCChannelProviding> *)asChannel;
- (<FCSectionProviding> *)asSection;
- (<FCTopicProviding> *)asTopic;
- (NSURL *)authorizationURL;
- (NSArray *)blockedStorefrontIDs;
- (long long)contentProvider;
- (NSString *)coverArticleListID;
- (FCAssetHandle *)coverImageAssetHandle;
- (NSString *)feedIDForBin:(long long)arg1;
- (FCAssetHandle *)feedNavImageAssetHandle;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (FCColor *)groupTitleColor;
- (unsigned long long)groupingEligibility;
- (bool)hideAccessoryText;
- (NSArray *)iAdCategories;
- (NSArray *)iAdKeywords;
- (NSString *)identifier;
- (bool)isAuthenticationSetup;
- (bool)isBlockedExplicitContent;
- (bool)isDeprecated;
- (bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isRealTimeTrackingEnabed;
- (bool)isSubscribable;
- (NSDate *)loadDate;
- (long long)minimumNewsVersion;
- (NSString *)name;
- (NSString *)nameCompact;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
- (FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (NSArray *)pinnedArticleIDs;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (FCPurchaseOfferableConfiguration *)prefetchPurchaseOffer;
- (NSString *)primaryAudience;
- (NSString *)publisherPaidAuthorizationURL;
- (NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
- (NSArray *)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (NSArray *)publisherPaidOfferableConfigurations;
- (NSString *)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (NSString *)publisherPaidWebAccessURL;
- (NSArray *)publisherSpecifiedArticleIDs;
- (NSDate *)publisherSpecifiedArticleIDsModifiedDate;
- (NSArray *)relatedChannelIDs;
- (NSArray *)relatedChannelIDsForOnboarding;
- (NSArray *)relatedTopicIDs;
- (NSArray *)relatedTopicIDsForOnboarding;
- (NSString *)replacementID;
- (long long)score;
- (NSString *)subtitle;
- (unsigned long long)tagType;
- (<FCFeedTheming> *)theme;
- (NSString *)versionKey;

@optional

- (NSData *)backingTagRecordData;

@end
