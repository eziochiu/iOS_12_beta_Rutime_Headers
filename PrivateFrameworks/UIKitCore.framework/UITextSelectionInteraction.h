/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextSelectionInteraction : UITextInteraction {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTapLocation;
    double  _lastTapTimestamp;
    long long  _previousRepeatedGranularity;
}

- (void)confirmMarkedText:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)performTapActionAtPoint:(struct CGPoint { double x1; double x2; })arg1 granularity:(long long)arg2;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;

@end
