/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTransportButtonEventHandler : NSObject {
    UIControl * _button;
    bool  _longPress;
    NSObject<OS_dispatch_source> * _longPressTimer;
    double  _minimumLongPressDuration;
    bool  _shouldFakeEnabled;
    bool  _supportsTapWhenDisabled;
}

@property (nonatomic) UIControl *button;
@property (nonatomic) double minimumLongPressDuration;
@property (nonatomic) bool supportsTapWhenDisabled;

- (void).cxx_destruct;
- (void)_clearLongPressTimer;
- (void)_longPressTimerAction;
- (void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)button;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (double)minimumLongPressDuration;
- (id)performHitTestingBlock:(id /* block */)arg1;
- (void)setButton:(id)arg1;
- (void)setMinimumLongPressDuration:(double)arg1;
- (void)setSupportsTapWhenDisabled:(bool)arg1;
- (bool)shouldFakeEnabled;
- (bool)shouldForceTrackingEnabled;
- (bool)supportsTapWhenDisabled;

@end
