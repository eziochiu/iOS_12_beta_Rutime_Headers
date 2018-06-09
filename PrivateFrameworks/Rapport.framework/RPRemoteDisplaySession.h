/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPAuthenticatable, RPMessageable, RPRemoteDisplayXPCClientInterface> {
    bool  _activateCalled;
    CUBonjourDevice * _bonjourDevice;
    RPRemoteDisplayDevice * _daemonDevice;
    RPRemoteDisplayDevice * _destinationDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct NSMutableDictionary { Class x1; } * _eventRegistrations;
    id /* block */  _hidePasswordHandler;
    unsigned int  _internalAuthFlags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _needsAWDL;
    unsigned int  _pairSetupFlags;
    unsigned int  _pairVerifyFlags;
    NSString * _password;
    int  _passwordType;
    id /* block */  _promptForPasswordHandler;
    struct NSMutableDictionary { Class x1; } * _requestRegistrations;
    RPRemoteDisplayServer * _server;
    NSNumber * _sessionID;
    id /* block */  _showPasswordHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) CUBonjourDevice *bonjourDevice;
@property (nonatomic, retain) RPRemoteDisplayDevice *daemonDevice;
@property (nonatomic, retain) RPRemoteDisplayDevice *destinationDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ hidePasswordHandler;
@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool needsAWDL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic, retain) RPRemoteDisplayServer *server;
@property (nonatomic, copy) NSNumber *sessionID;
@property (nonatomic, copy) id /* block */ showPasswordHandler;
@property (nonatomic, retain) NSXPCConnection *xpcCnx;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)bonjourDevice;
- (id)daemonDevice;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)destinationDevice;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)hidePasswordHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)internalAuthFlags;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)needsAWDL;
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (id)password;
- (int)passwordType;
- (id /* block */)promptForPasswordHandler;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)server;
- (id)sessionID;
- (void)setBonjourDevice:(id)arg1;
- (void)setDaemonDevice:(id)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHidePasswordHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setNeedsAWDL:(bool)arg1;
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setServer:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShowPasswordHandler:(id /* block */)arg1;
- (void)setXpcCnx:(id)arg1;
- (id /* block */)showPasswordHandler;
- (void)tryPassword:(id)arg1;
- (id)xpcCnx;

@end
