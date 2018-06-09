/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPMessageable> {
    bool  _activateCalled;
    struct NSMutableSet { Class x1; } * _assertions;
    unsigned long long  _controlFlags;
    RPCompanionLinkDevice * _destinationDevice;
    id /* block */  _deviceChangedHandler;
    struct NSMutableDictionary { Class x1; } * _deviceDictionary;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct NSMutableDictionary { Class x1; } * _eventRegistrations;
    unsigned int  _flags;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    RPCompanionLinkDevice * _localDevice;
    id /* block */  _localDeviceUpdatedHandler;
    NSString * _password;
    id /* block */  _promptForPasswordHandler;
    NSMutableOrderedSet * _registeredProfileIDs;
    bool  _reportBTPipe;
    struct NSMutableDictionary { Class x1; } * _requestRegistrations;
    NSXPCConnection * _xpcCnx;
}

@property (readonly, copy) NSArray *activeDevices;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (nonatomic) unsigned long long controlFlags;
@property (nonatomic, retain) RPCompanionLinkDevice *destinationDevice;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (retain) RPCompanionLinkDevice *localDevice;
@property (nonatomic, copy) id /* block */ localDeviceUpdatedHandler;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) id /* block */ promptForPasswordHandler;
@property (nonatomic) bool reportBTPipe;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateAssertion:(id)arg1;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_registerProfileID:(id)arg1 reregister:(bool)arg2 completion:(id /* block */)arg3;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_reregisterAssertions;
- (void)_reregisterEvents;
- (void)_reregisterProfileIDs;
- (void)_reregisterRequests;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activeDevices;
- (id)activePersonalCompanion;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkFoundDevice:(id)arg1;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (unsigned long long)controlFlags;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterProfileID:(id)arg1 completion:(id /* block */)arg2;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)destinationDevice;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)localDevice;
- (id /* block */)localDeviceUpdatedHandler;
- (id)password;
- (id /* block */)promptForPasswordHandler;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerProfileID:(id)arg1 completion:(id /* block */)arg2;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (bool)reportBTPipe;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLocalDevice:(id)arg1;
- (void)setLocalDeviceUpdatedHandler:(id /* block */)arg1;
- (void)setPassword:(id)arg1;
- (void)setPromptForPasswordHandler:(id /* block */)arg1;
- (void)setReportBTPipe:(bool)arg1;
- (void)tryPassword:(id)arg1;

@end
