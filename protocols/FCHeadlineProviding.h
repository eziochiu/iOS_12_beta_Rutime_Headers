/* made by EzioChiu.
 */

@protocol FCHeadlineProviding <NSObject, NFCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>

@required

- (NSString *)accessoryText;
- (NSArray *)allowedStorefrontIDs;
- (NSString *)articleID;
- (NSString *)articleRecirculationConfigJSON;
- (<FCNativeAdProviding> *)associatedAd;
- (long long)backendArticleVersion;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)clusterID;
- (unsigned long long)contentType;
- (NSURL *)contentURL;
- (FCCoverArt *)coverArt;
- (NSDate *)displayDate;
- (NSArray *)endOfArticleTopicIDs;
- (unsigned long long)feedOrder;
- (double)globalUserFeedback;
- (bool)hasThumbnail;
- (NSArray *)iAdCategories;
- (NSArray *)iAdKeywords;
- (NSArray *)iAdSectionIDs;
- (NSString *)identifier;
- (bool)isBlockedExplicitContent;
- (bool)isBoundToContext;
- (bool)isDeleted;
- (bool)isDisplayingAsNativeAd;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isSponsored;
- (bool)isTopStory;
- (NSDate *)lastFetchedDate;
- (NSDate *)lastModifiedDate;
- (NSString *)localDraftPath;
- (long long)minimumNewsVersion;
- (NSArray *)moreFromPublisherArticleIDs;
- (bool)needsRapidUpdates;
- (NSString *)primaryAudience;
- (NSDate *)publishDate;
- (NSArray *)publisherSpecifiedArticleIDs;
- (NSString *)referencedArticleID;
- (NSArray *)relatedArticleIDs;
- (FCFeedPersonalizedArticleScoreProfile *)scoreProfile;
- (NSString *)shortExcerpt;
- (bool)showMinimalChrome;
- (bool)showSubscriptionRequiredText;
- (<FCChannelProviding> *)sourceChannel;
- (NSString *)sourceName;
- (NSString *)sponsoredBy;
- (FCTopStoriesStyleConfiguration *)storyStyle;
- (unsigned long long)storyType;
- (NSString *)surfacedByBinID;
- (NSString *)surfacedByChannelID;
- (NSString *)surfacedBySectionID;
- (NSSet *)surfacedByTagIDs;
- (NSString *)surfacedByTopicID;
- (FCHeadlineThumbnail *)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (FCHeadlineThumbnail *)thumbnailHQ;
- (FCHeadlineThumbnail *)thumbnailLQ;
- (FCHeadlineThumbnail *)thumbnailMedium;
- (FCHeadlineThumbnail *)thumbnailUltraHQ;
- (FCHeadlineThumbnail *)thumbnailWidget;
- (FCHeadlineThumbnail *)thumbnailWidgetHQ;
- (FCHeadlineThumbnail *)thumbnailWidgetLQ;
- (double)tileProminenceScore;
- (NSString *)title;
- (NSString *)titleCompact;
- (unsigned long long)topStoryType;
- (NSArray *)topicIDs;
- (NSArray *)topics;
- (bool)usesImageOnTopLayout;
- (NSString *)versionIdentifier;
- (NSString *)videoCallToActionTitle;
- (NSURL *)videoCallToActionURL;
- (double)videoDuration;
- (NSURL *)videoURL;

@optional

- (NSData *)backingArticleRecordData;
- (FCArticleContentManifest *)contentManifestWithContext:(id <FCContentContext>)arg1;
- (<FCHeadlineStocksFields> *)stocksFields;

@end
