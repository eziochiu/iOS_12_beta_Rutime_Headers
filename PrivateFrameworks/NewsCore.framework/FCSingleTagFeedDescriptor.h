/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long  _feedFilterOptions;
    long long  _feedPersonalizationConfigurationSet;
    long long  _feedSortMethod;
    long long  _feedType;
    <FCTagProviding> * _masterTag;
    <FCTagProviding> * _tag;
}

@property (nonatomic, readonly, copy) <FCTagProviding> *masterTag;
@property (nonatomic, copy) <FCTagProviding> *tag;

- (void).cxx_destruct;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (bool)enableNotificationsWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (long long)feedFilterOptions;
- (id)feedGroupEmittersWithConfiguration:(id)arg1;
- (long long)feedPersonalizationConfigurationSet;
- (long long)feedSortMethod;
- (long long)feedType;
- (bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (bool)hideAccessoryText;
- (id)iAdCategories;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdKeywords;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)arg1 tag:(id)arg2;
- (id)initWithContext:(id)arg1 tag:(id)arg2 sortMethod:(long long)arg3 filterOptions:(long long)arg4 personalizationConfigurationSet:(long long)arg5;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMutedWithSubscriptionController:(id)arg1;
- (bool)isSubscribable;
- (bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (id)masterTag;
- (id)name;
- (void)setFeedType:(long long)arg1;
- (void)setTag:(id)arg1;
- (bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3;
- (id)tag;
- (id)theme;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;

@end
