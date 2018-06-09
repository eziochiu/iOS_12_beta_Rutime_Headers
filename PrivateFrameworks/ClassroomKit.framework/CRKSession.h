/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSession : NSObject <CATRemoteTransportDelegate, CATTransportDelegate> {
    bool  _allowUntrustedConnections;
    <CRKGrowthFunction> * _backoffGrowthFunction;
    <CRKSessionDelegate> * _delegate;
    double  _failedConnectionRetryInterval;
    NSString * _ipAddress;
    double  _lostBeaconTimeout;
    bool  _requiresBeacon;
    double  _willLoseBeaconWarningTimeout;
    double  mCurrentBackoffInterval;
    CATStateMachine * mFSM;
    CATRemoteTransport * mTransport;
}

@property (nonatomic, readonly) bool allowUntrustedConnections;
@property (nonatomic, readonly) <CRKGrowthFunction> *backoffGrowthFunction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double failedConnectionRetryInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *ipAddress;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) bool requiresBeacon;
@property (nonatomic, retain) CATStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) CATTransport *transport;
@property (nonatomic) double willLoseBeaconWarningTimeout;

- (void).cxx_destruct;
- (bool)allowUntrustedConnections;
- (void)backoffDidFinish;
- (id)backoffGrowthFunction;
- (void)cancelConnectionAttempt;
- (void)connect;
- (id)delegate;
- (void)delegateConnected;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)didConnect;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)enterOutOfRange;
- (void)exitBackoffCanConnect;
- (double)failedConnectionRetryInterval;
- (void)failedToConnect;
- (void)foundBeacon;
- (id)initWithIPAddress:(id)arg1;
- (void)invalidate;
- (id)ipAddress;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (double)lostBeaconTimeout;
- (void)lostConnection;
- (void)registerDefaults;
- (void)rejected;
- (bool)requiresBeacon;
- (void)resetBackoff;
- (void)setDelegate:(id)arg1;
- (void)setFailedConnectionRetryInterval:(double)arg1;
- (void)setLostBeaconTimeout:(double)arg1;
- (void)setRequiresBeacon:(bool)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTransport:(id)arg1;
- (void)setWillLoseBeaconWarningTimeout:(double)arg1;
- (id)stateMachine;
- (id)studentSocketOptions;
- (id)transport;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)transportDidConnect:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (void)tryConnecting;
- (double)willLoseBeaconWarningTimeout;

@end
