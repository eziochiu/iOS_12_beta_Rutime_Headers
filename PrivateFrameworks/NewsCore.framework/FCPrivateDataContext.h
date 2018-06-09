/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext> {
    FCABTestingAgent * _abTestingAgent;
    <FCContentContext> * _contentContext;
    <FCPrivateDataContextInternal> * _internalPrivateDataContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCPersonalizationData * _personalizationData;
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
    NSString * _privateDataDirectory;
    bool  _privateDataSyncingEnabled;
    <FCPushNotificationHandling> * _privatePushNotificationHandler;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
    FCTagSettings * _tagSettings;
    FCUserInfo * _userInfo;
}

@property (nonatomic, retain) FCABTestingAgent *abTestingAgent;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (id)abTestingAgent;
- (id)contentContext;
- (id)init;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(bool)arg7 iCloudAccountChanged:(bool)arg8;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDatabase:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 encryptionDelegate:(id)arg6 networkBehaviorMonitor:(id)arg7 privateDataSyncingEnabled:(bool)arg8 iCloudAccountChanged:(bool)arg9;
- (id)internalPrivateDataContext;
- (bool)isPrivateDataSyncingEnabled;
- (id)networkBehaviorMonitor;
- (id)personalizationData;
- (id)privateChannelMembershipController;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)readingHistory;
- (id)readingList;
- (void)setAbTestingAgent:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setInternalPrivateDataContext:(id)arg1;
- (id)subscriptionList;
- (id)tagSettings;
- (id)userInfo;

@end
