/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceConfirmationHandler : HMFObject <HMFTimerDelegate> {
    id /* block */  _completionHandler;
    double  _timeout;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property (readonly) HMFTimer *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)completeWithError:(id)arg1;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)start;
- (double)timeout;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
