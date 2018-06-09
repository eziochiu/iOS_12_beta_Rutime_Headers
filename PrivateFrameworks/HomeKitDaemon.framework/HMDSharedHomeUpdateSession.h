/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSharedHomeUpdateSession : NSObject <HMFDumpState, HMFLogging, HMFTimerDelegate> {
    double  _currentTimerValue;
    <HMDSharedHomeUpdateSessionDelegate> * _delegate;
    HMDRemoteDeviceMessageDestination * _destination;
    NSString * _homeIdentifier;
    NSDictionary * _messagePayload;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
    HMDResidentDevice * _residentDevice;
    unsigned long long  _retryCount;
    NSUUID * _sessionID;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) double currentTimerValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDSharedHomeUpdateSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDRemoteDeviceMessageDestination *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (nonatomic, readonly) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (nonatomic, readonly) HMDResidentDevice *residentDevice;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDelegate;
- (void)_requestDataSync;
- (double)currentTimerValue;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)destination;
- (id)dumpState;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:(id)arg1 delegate:(id)arg2 workQueue:(id)arg3 destination:(id)arg4 residentDevice:(id)arg5 messagePayload:(id)arg6 remoteMessageDispatcher:(id)arg7;
- (id)logIdentifier;
- (id)messagePayload;
- (id)remoteMessageDispatcher;
- (void)requestDataSync;
- (id)residentDevice;
- (unsigned long long)retryCount;
- (id)sessionID;
- (void)setCurrentTimerValue:(double)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void)startTimer;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
