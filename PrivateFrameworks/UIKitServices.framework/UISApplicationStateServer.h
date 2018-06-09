/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationStateServer : FBSServiceFacility {
    <UISApplicationStateServerDelegate> * _delegate;
    struct { 
        unsigned int delegateGetNextWakeInterval : 1; 
        unsigned int delegateSetNextWakeInterval : 1; 
        unsigned int delegateGetMinimumBackgroundFetchInterval : 1; 
        unsigned int delegateSetMinimumBackgroundFetchInterval : 1; 
        unsigned int delegateGetUsesBackgroundNetwork : 1; 
        unsigned int delegateSetUsesBackgroundNetwork : 1; 
        unsigned int delegateGetBadgeValue : 1; 
        unsigned int delegateSetBadgeValue : 1; 
    }  _delegateFlags;
}

@property (nonatomic) <UISApplicationStateServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_clientInterestedBundleIdentifier:(id)arg1;
- (void)_handleMessage_getBadgeValue:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_getNextWakeIntervalForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_getUsesBackgroundNetwork:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_setBadgeValue:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_setMinimumBackgroundFetchInterval:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_setNextWakeIntervalForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_setUsesBackgroundNetwork:(id)arg1 withMessage:(id)arg2;
- (id)delegate;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;

@end
