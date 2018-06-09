/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    NSMutableSet * _currentlyPressedTypes;
    UIDelayedAction * _delayedAction;
    double  _maximumIntervalBetweenPresses;
    NSSet * _requiredPressTypes;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (void).cxx_destruct;
- (bool)_allRequiredButtonsDown;
- (void)_fail;
- (void)_processPresses:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_succeed;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)maximumIntervalBetweenPresses;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setMaximumIntervalBetweenPresses:(double)arg1;

@end
