/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface CFNetworkTimer : NSObject {
    double  _interval;
    double  _lastPauseTime;
    double  _lastResumeTime;
    double  _runTime;
    int  _state;
    NSObject<OS_dispatch_source> * _timer;
}

@property int state;

- (void)cancelTimer;
- (void)dealloc;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pauseTimer;
- (void)resumeCallbacksForTimer;
- (void)resumeTimer;
- (void)setCancelCallbacks:(id /* block */)arg1;
- (void)setState:(int)arg1;
- (void)setTimer:(double)arg1;
- (int)state;
- (void)suspendCallbacksForTimer;

@end
