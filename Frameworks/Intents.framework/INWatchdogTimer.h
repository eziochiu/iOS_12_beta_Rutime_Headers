/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INWatchdogTimer : NSObject {
    double  _interval;
    bool  _isStopped;
    double  _remainingInterval;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timerSource;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(id /* block */)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(id /* block */)arg2;
- (bool)isCanceled;
- (void)reset;
- (void)start;
- (void)stop;

@end
