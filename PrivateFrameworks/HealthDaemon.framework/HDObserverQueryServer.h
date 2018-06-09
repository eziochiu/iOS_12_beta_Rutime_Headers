/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDObserverQueryServer : HDQueryServer {
    NSNumber * _anchor;
    bool  _deliverOnUnlock;
}

@property (nonatomic, readonly, copy) NSNumber *anchor;
@property (nonatomic, readonly) bool deliverOnUnlock;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_deliverDataWasUpdatedWithAnchor:(id)arg1;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (id)anchor;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (bool)deliverOnUnlock;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
