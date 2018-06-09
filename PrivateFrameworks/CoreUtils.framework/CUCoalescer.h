/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUCoalescer : NSObject {
    id /* block */  _actionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    double  _leeway;
    double  _maxDelay;
    double  _minDelay;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timer;
    int  _triggered;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) double leeway;
@property (nonatomic) double maxDelay;
@property (nonatomic) double minDelay;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_invalidate;
- (void)_timerFired;
- (void)_trigger;
- (id /* block */)actionHandler;
- (void)cancel;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (double)leeway;
- (double)maxDelay;
- (double)minDelay;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLeeway:(double)arg1;
- (void)setMaxDelay:(double)arg1;
- (void)setMinDelay:(double)arg1;
- (void)trigger;

@end
