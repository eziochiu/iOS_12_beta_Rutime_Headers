/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTouchingGestureRecognizer : UIGestureRecognizer {
    unsigned long long  __touchCount;
}

@property (setter=_setTouchCount:, nonatomic) unsigned long long _touchCount;

- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_setTouchCount:(unsigned long long)arg1;
- (unsigned long long)_touchCount;
- (void)_updateStateFromTouchCount:(unsigned long long)arg1 toTouchCount:(unsigned long long)arg2;
- (void)cancelGesture;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
