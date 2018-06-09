/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCThrottler : NSObject {
    long long  _latestRetry;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _retryCount;
    NSObject<OS_dispatch_source> * _source;
    BRCThrottleBase * _throttle;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)reset;
- (void)resume;
- (void)scheduleNextEvent;
- (void)suspend;

@end
