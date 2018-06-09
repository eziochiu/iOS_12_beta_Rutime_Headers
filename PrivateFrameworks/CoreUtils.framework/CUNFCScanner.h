/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNFCScanner : NSObject <NFReaderSessionDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _foundDeviceHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    id /* block */  _lostDeviceHandler;
    NFTag * _nfcConnectedTag;
    struct NSMutableArray { Class x1; } * _nfcDevices;
    NSObject<OS_dispatch_queue> * _nfcDispatchQueue;
    NSObject<OS_dispatch_source> * _nfcPollTimer;
    bool  _nfcPollingHW;
    CURetrier * _nfcRetrier;
    NFReaderSession * _nfcSession;
    bool  _nfcStarted;
    NSObject<NFSession> * _nfcTempSession;
    bool  _pauseWhenFound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ foundDeviceHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ lostDeviceHandler;
@property (nonatomic) bool pauseWhenFound;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:(id)arg1 error:(id)arg2;
- (void)_handleTagFound:(id)arg1;
- (void)_invalidateWithError:(id)arg1;
- (id)_parseRecord:(id)arg1;
- (void)_pause;
- (bool)_pollTag:(id)arg1;
- (void)_pollTags;
- (id)_readTag:(id)arg1;
- (void)_updatePolling;
- (void)activate;
- (id)dispatchQueue;
- (id /* block */)foundDeviceHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)lostDeviceHandler;
- (void)pause;
- (bool)pauseWhenFound;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)resume;
- (void)setDispatchQueue:(id)arg1;
- (void)setFoundDeviceHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLostDeviceHandler:(id /* block */)arg1;
- (void)setPauseWhenFound:(bool)arg1;

@end
