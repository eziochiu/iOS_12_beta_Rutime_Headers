/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {
    <FCCoreConfigurationManager> * _configurationManager;
    FCSubscriptionList * _subscriptionList;
    unsigned long long  _trendingAndSavedStoriesCount;
}

@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trendingAndSavedStoriesCount;

- (void).cxx_destruct;
- (id)_sortedEditorialGroupEmittersWithForYouGroupsConfiguration:(id)arg1;
- (id)configurationManager;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(bool)arg3 personalize:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)derivesContentsFromExplicitSubscriptions;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (long long)feedFilterOptions;
- (id)feedGroupEmittersWithConfiguration:(id)arg1;
- (id)feedPaginator;
- (long long)feedPersonalizationConfigurationSet;
- (long long)feedSortMethod;
- (id)iAdFeedID;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2 configurationManager:(id)arg3 subscriptionList:(id)arg4;
- (id)name;
- (id)offlineFeedGroupEmittersWithConfiguration:(id)arg1;
- (void)prepareToProvideFeedGroupEmittersWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfigurationManager:(id)arg1;
- (void)setSubscriptionList:(id)arg1;
- (void)setTrendingAndSavedStoriesCount:(unsigned long long)arg1;
- (bool)shouldFilterFeedGroupEmitter:(id)arg1 withConfiguration:(id)arg2;
- (id)subscriptionList;
- (unsigned long long)trendingAndSavedStoriesCount;

@end
