/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {
    unsigned long long  _changeCount;
    long long  _delayIndex;
    double  _force;
    unsigned long long  _numberOfTouchesRequired;
    bool  _timerOn;
}

@property (setter=_setButtonType:, nonatomic) long long _buttonType;
@property (nonatomic, readonly) double _force;
@property (nonatomic) unsigned long long changeCount;
@property (nonatomic) unsigned long long numberOfTouchesRequired;

+ (double)delayForRepeatNumber:(long long)arg1;

- (void)_beginPress;
- (long long)_buttonType;
- (void)_cancelPress;
- (void)_changePress;
- (void)_clearTapTimer;
- (void)_endPress;
- (void)_finishNextStep:(id)arg1;
- (double)_force;
- (void)_nextStep:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_scheduleNextTimer;
- (void)_setButtonType:(long long)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (unsigned long long)changeCount;
- (void)dealloc;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setChangeCount:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
