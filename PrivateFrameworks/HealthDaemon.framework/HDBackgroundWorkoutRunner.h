/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBackgroundWorkoutRunner : NSObject <HDAssertionObserver, HDProcessStateObserver> {
    HDAssertionManager * _assertionManager;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_acquireBKSAssertionForClient:(id)arg1;
- (id)_queue_acquireCLInUseAssertionForClient:(id)arg1;
- (bool)_queue_hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id*)arg2;
- (void)_queue_releaseBKSAssertion:(id)arg1 forClient:(id)arg2;
- (void)_queue_releaseCLInUseAssertion:(id)arg1 forClient:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (void)dealloc;
- (bool)hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id*)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)arg1 client:(id)arg2 includeCoreLocationAssertion:(bool)arg3;

@end
