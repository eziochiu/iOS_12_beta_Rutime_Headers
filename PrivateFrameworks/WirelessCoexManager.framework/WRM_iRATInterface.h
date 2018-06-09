/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

@interface WRM_iRATInterface : WRMClientInterface {
    NSMutableArray * mAppLists;
    bool  mBBAssertionBGAppActive;
    bool  mClientSupportsMultipleAppTypes;
    bool  mLinkPreferenceSubscriptionEnabled;
    bool  mLocationAssertionEnabled;
    int  mLocationState;
    id /* block */  mObserver;
    id /* block */  mOppModeObserver;
    bool  mProximityGetLinkRecommendationEnabled;
    id /* block */  mProximityGetLinkRecommendationHandler;
    NSMutableArray * mProximityLinkRecommendationList;
    bool  mProximitySubscribeLinkRecommendationEnabled;
    id /* block */  mProximitySubscribeLinkRecommendationHandler;
    bool  mTelephoneAssertionEnabled;
    bool  mTelephonyStateEnabled;
}

- (void)_expediteBBAssertionBGAppActive_sync:(bool)arg1 handler:(id /* block */)arg2;
- (void)addAppType:(id)arg1;
- (void)addProximityLinkRecommendationType:(id)arg1;
- (void)assertCommCenterBaseBand:(int)arg1;
- (void)assertCommCenterBaseBandMode:(int)arg1;
- (void)dealloc;
- (void)expediteBBAssertionBGAppActive:(bool)arg1 handler:(id /* block */)arg2;
- (void)expediteBBAssertionBGAppActiveAppType:(int)arg1 :(bool)arg2 handler:(id /* block */)arg3;
- (void)getProximityLinkRecommendation:(bool)arg1 recommendation:(id /* block */)arg2;
- (int)getStatusUpdateMessageType:(int)arg1;
- (int)getSubscribeMessageType:(int)arg1;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processNotificationList:(id)arg1;
- (void)processNotificationListForTerminus:(id)arg1;
- (void)processOperatingModeNotification:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)removeAppType:(id)arg1;
- (void)removeProximityLinkRecommendationType:(id)arg1;
- (void)setTelephonyEnabled:(bool)arg1;
- (void)statusUpdateAppLinkPreference:(int)arg1 status:(bool)arg2;
- (void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(bool)arg3;
- (void)subscribeAppType:(struct { int x1; int x2; int x3; int x4; })arg1 observer:(id /* block */)arg2;
- (void)subscribeMultipleAppTypes:(id)arg1 observer:(id /* block */)arg2;
- (void)subscribeOperatingModeChangeNotification:(id /* block */)arg1;
- (void)subscribeProximityLinkRecommendation:(id /* block */)arg1;
- (void)unregisterClient;

@end
