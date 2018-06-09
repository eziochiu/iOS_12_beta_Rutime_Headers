/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuietModeManager : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    HDDNDModeAssertionService * _dndModeAssertionService;
    bool  _enableDNDDuringWorkout;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadWorkoutDNDDefault;
- (void)_observeDNDWorkoutDefault;
- (void)_queue_releaseQuietModeAssertion;
- (void)_queue_takeQuietModeAssertion;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1;
- (void)unitTest_setDNDModeAssertionService:(id)arg1;
- (void)unitTest_setEnableDND:(bool)arg1;

@end