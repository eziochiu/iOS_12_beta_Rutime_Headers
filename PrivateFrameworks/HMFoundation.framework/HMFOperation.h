/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFOperation : NSOperation <HMFLogging, HMFTimerDelegate> {
    HMFActivity * _activity;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    NSUUID * _identifier;
    HMFUnfairLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    HMFTimer * _timer;
}

@property (retain) HMFActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSDate *timeoutDate;
@property (retain) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)activity;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)error;
- (void)finish;
- (id)identifier;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)logIdentifier;
- (void)setActivity:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (id)timeoutDate;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)underlyingQueue;

@end
