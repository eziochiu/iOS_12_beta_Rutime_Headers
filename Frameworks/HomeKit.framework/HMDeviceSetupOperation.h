/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging> {
    HMAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    TRSession * _session;
    HMDeviceSetupSession * _setupSession;
}

@property (readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) TRSession *session;
@property (nonatomic, readonly) HMDeviceSetupSession *setupSession;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_reallyStart;
- (id)accessory;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)clientQueue;
- (id)error;
- (void)finish;
- (id)init;
- (id)initWithSession:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)logIdentifier;
- (id)propertyQueue;
- (id)session;
- (void)setAccessory:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (id)setupSession;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)start;

@end
