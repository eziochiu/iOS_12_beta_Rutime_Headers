/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFClient : NSObject {
    NSMutableSet * _assertions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)activityStateWithCompletion:(id /* block */)arg1;
- (void)appleIDInfoWithCompletion:(id /* block */)arg1;
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)dispatchQueue;
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)openSetupURL:(id)arg1 completion:(id /* block */)arg2;
- (void)preventExitForLocaleReason:(id)arg1;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)repairDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)retriggerProximityPairing:(id /* block */)arg1;
- (void)retriggerProximitySetup:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (void)showDevicePickerWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)arg1;

@end
