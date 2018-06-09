/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPService : NSObject {
    bool  _activateCalled;
    unsigned int  _advertiseRate;
    struct BonjourAdvertiserPrivate { } * _bonjourAdvertiser;
    unsigned char  _deviceActionType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _hidePINHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _listenerPort;
    bool  _needsSetup;
    NSMutableDictionary * _requestMap;
    NSString * _serviceType;
    id /* block */  _sessionEndedHandler;
    id /* block */  _sessionStartedHandler;
    id /* block */  _showPINHandler;
    int  _tcpSockV4;
    int  _tcpSockV6;
    NSDictionary * _txtDictionary;
}

@property (nonatomic) unsigned int advertiseRate;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ hidePINHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) bool needsSetup;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) id /* block */ sessionEndedHandler;
@property (nonatomic, copy) id /* block */ sessionStartedHandler;
@property (nonatomic, copy) id /* block */ showPINHandler;
@property (nonatomic, copy) NSDictionary *txtDictionary;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (int)_bonjourUpdateService;
- (int)_bonjourUpdateTXT;
- (void)_cleanup;
- (void)_invalidate;
- (void)_invalidated;
- (int)_tcpStart;
- (void)activateWithCompletion:(id /* block */)arg1;
- (unsigned int)advertiseRate;
- (void)dealloc;
- (id)description;
- (unsigned char)deviceActionType;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id /* block */)hidePINHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (bool)needsSetup;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (id)serviceType;
- (id /* block */)sessionEndedHandler;
- (id /* block */)sessionStartedHandler;
- (void)setAdvertiseRate:(unsigned int)arg1;
- (void)setDeviceActionType:(unsigned char)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHidePINHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setNeedsSetup:(bool)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionEndedHandler:(id /* block */)arg1;
- (void)setSessionStartedHandler:(id /* block */)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (void)setTxtDictionary:(id)arg1;
- (id /* block */)showPINHandler;
- (id)txtDictionary;

@end
