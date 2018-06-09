/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoSkipLockObserver : NSObject <SVVideoSkipLockObserving> {
    double  _countdown;
    NSMutableArray * _countdownActions;
    id /* block */  _countdownBlock;
    bool  _locked;
    <SVVideoSkipThresholdObserving> * _thresholdObserver;
    SVTimeline * _timeline;
    SVTimeBasedAction * _unlockAction;
    id /* block */  _unlockBlock;
}

@property (nonatomic) double countdown;
@property (nonatomic, retain) NSMutableArray *countdownActions;
@property (setter=onCountDown:, nonatomic, copy) id /* block */ countdownBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locked;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoSkipThresholdObserving> *thresholdObserver;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, retain) SVTimeBasedAction *unlockAction;
@property (setter=onUnlock:, nonatomic, copy) id /* block */ unlockBlock;

- (void).cxx_destruct;
- (double)countdown;
- (id)countdownActions;
- (id /* block */)countdownBlock;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1 thresholdObserver:(id)arg2;
- (bool)lockStateForThresholdObserver:(id)arg1 onTimeline:(id)arg2;
- (bool)locked;
- (void)onCountDown:(id /* block */)arg1;
- (void)onUnlock:(id /* block */)arg1;
- (void)scheduleCountdownActionsWithThreshold:(double)arg1;
- (void)scheduleUnlockActionWithThreshold:(double)arg1;
- (void)setCountdown:(double)arg1;
- (void)setCountdownActions:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setUnlockAction:(id)arg1;
- (id)thresholdObserver;
- (id)timeline;
- (id)unlockAction;
- (id /* block */)unlockBlock;

@end
