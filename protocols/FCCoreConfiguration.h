/* made by EzioChiu.
 */

@protocol FCCoreConfiguration <NFCopying>

@required

- (NSDictionary *)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (long long)appConfigRefreshRate;
- (long long)articleRapidUpdatesTimeout;
- (NSString *)breakingNewsChannelID;
- (NSString *)briefingsTagID;
- (NSNumber *)currentTreatment;
- (bool)diversifyOptionalTopStories;
- (NSString *)editorialChannelID;
- (NSString *)editorialGemsSectionID;
- (long long)endOfArticleMaxInaccessiblePaidArticleCount;
- (double)endOfArticleMinPaidHeadlineRatio;
- (NSDictionary *)endpointConfigsByEnvironment;
- (NSString *)experimentalizableFieldPostfix;
- (long long)expirePinnedArticlesAfter;
- (long long)expiredPaidSubscriptionGroupCutoffTime;
- (NSString *)featuredStoriesTagID;
- (FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
- (NSString *)forYouRecordConfigID;
- (FCVideoGroupsConfig *)forYouVideoGroupsConfig;
- (NSArray *)hiddenFeedIDs;
- (bool)isOrderFeedEndpointEnabled;
- (bool)isPrivateDataEncryptionAllowed;
- (bool)isPrivateDataEncryptionMigrationDesired;
- (bool)isPrivateDataMigrationCleanupEnabled;
- (long long)maximumNumberOfExpiredPaidSubscriptionGroups;
- (long long)maximumPaidSubscriptionGroupSizeiPad;
- (long long)maximumPaidSubscriptionGroupSizeiPhone;
- (long long)maximumTimesHeadlineInPaidSubscriptionGroup;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)minimumDurationBetweenForYouGroupsWeekday;
- (long long)minimumDurationBetweenForYouGroupsWeekend;
- (long long)minimumDurationBetweenTrendingGroupsWeekday;
- (long long)minimumDurationBetweenTrendingGroupsWeekend;
- (double)minimumTrendingUnseenRatio;
- (NSString *)moreVideosChannelID;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (FCNotificationsConfiguration *)notificationsConfig;
- (long long)optionalTopStoriesRefreshRate;
- (FCPersonalizationTreatment *)personalizationTreatmentForFeldsparID:(NSString *)arg1;
- (NSArray *)presubscribedFeedIDs;
- (bool)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
- (long long)savedArticlesCutoffTime;
- (long long)savedArticlesMaximumCountCellular;
- (long long)savedArticlesMaximumCountWiFi;
- (long long)savedArticlesOpenedCutoffTime;
- (NSString *)savedStoriesTagID;
- (long long)subscriptionsGlobalMeteredCount;
- (NTPBTodayConfig *)todayConfigWithQueueConfigs:(NSArray *)arg1 maxSlotCount:(unsigned long long)arg2;
- (FCTopStoriesConfiguration *)topStoriesConfig;
- (NSString *)topVideosChannelID;
- (NSString *)trendingTagID;
- (long long)trendingTopicsRefreshRate;
- (bool)useSecureConnectionForAssets;

@optional

- (long long)singleChannelFeedMinFeedItemsPerRequest;
- (long long)singleTopicFeedMinFeedItemsPerRequest;

@end
