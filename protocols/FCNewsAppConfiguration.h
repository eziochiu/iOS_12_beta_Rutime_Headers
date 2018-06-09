/* made by EzioChiu.
 */

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>

@required

- (long long)analyticsEndpointMaxPayloadSize;
- (double)articleDiversificationSimilarityExpectationEnd;
- (double)articleDiversificationSimilarityExpectationStart;
- (double)articleDiversificationUniquePublisherExpectationSlope;
- (double)articleDiversificationUniquePublisherExpectationYIntercept;
- (NSString *)articleRecirculationComponentPlacementConfigJSON;
- (NSString *)articleRecirculationConfigJSON;
- (long long)autoRefreshMinimumInterval;
- (long long)autoScrollToTopFeedTimeout;
- (bool)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
- (long long)corryBarMaxArticleCountForArticleList;
- (long long)corryBarMaxArticleCountForSingleArticle;
- (NSString *)embedConfigurationAssetID;
- (NSString *)exploreArticleID;
- (NSArray *)externalAnalyticsConfigurations;
- (FCIAdConfiguration *)iAdConfig;
- (double)interstitialAdLoadDelay;
- (NSArray *)mediaSharingBlacklistedChannelIDs;
- (long long)minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
- (long long)newFavoriteNotificationAlertsFrequency;
- (long long)notificationArticleCacheTimeout;
- (long long)notificationArticleWithRapidUpdatesCacheTimeout;
- (NSArray *)onboardingFeedIDs;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (NSString *)personalizationBundleIdMappingResourceId;
- (NSString *)personalizationFavorabilityResourceId;
- (NSString *)personalizationUrlMappingResourceId;
- (NSString *)personalizationWhitelistResourceId;
- (FCPrefetchConfiguration *)prefetchConfig;
- (double)prerollLoadingTimeout;
- (NTPBDiscoverMoreVideosInfo *)shareDiscoverMoreVideosInfo;
- (long long)stateRestorationAllowedTimeWindow;
- (long long)subscriptionsGracePeriodForTokenVerificationSeconds;
- (long long)subscriptionsPlacardGlobalMaximumPerDay;
- (long long)subscriptionsPlacardPublisherFrequencyInSeconds;
- (bool)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
- (double)tileProminenceScoreBalanceValue;
- (NSArray *)topLevelCuratedTagIDs;
- (NSArray *)topLevelRecommendedChannelTagIDs;
- (NSArray *)topLevelRecommendedTopicTagIDs;
- (NSArray *)topStoriesPublishDates;
- (unsigned long long)trendingStyle;
- (bool)universalLinksEnabled;
- (NSString *)widgetConfigID;
- (long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
- (unsigned int)widgetMinimumNumberOfTimesPreseenToBeSeen;

@optional

- (long long)articleRecirculationPopularFeedQueryTimeRange;
- (bool)disableThumbnailsForArticleRecirculation;
- (NSString *)feedNavigationConfigJSON;
- (bool)isExpired;
- (long long)showCardNavHintMaxCount;

@end
