/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDCircleController : NSObject {
    CDPDCircleStateObserver * _circleJoinObserver;
    <CDPDCircleProxy> * _circleProxy;
    NSObject<CDPDCircleDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _requestSynchronizationQueue;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (nonatomic) NSObject<CDPDCircleDelegate> *delegate;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_joinCircleIgnoringBackups:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_peerCount;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestToJoinWithRequestBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)arg1;
- (void)cancelApplicationToJoinCircle;
- (id)circleProxy;
- (int)circleStatus;
- (void)dealloc;
- (id)delegate;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;
- (void)joinCircleAfterRecoveryWithCompletion:(id /* block */)arg1;
- (void)joinCircleIgnoringBackups:(bool)arg1 completion:(id /* block */)arg2;
- (void)joinCircleWithCompletion:(id /* block */)arg1;
- (id)peerID;
- (void)prepareCircleStateForRecovery;
- (void)promptForCredentials:(id /* block */)arg1;
- (void)resetCircleIncludingCloudKitData:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)setCircleProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)synchronizeCircleViews;
- (id)uiProvider;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;

@end
