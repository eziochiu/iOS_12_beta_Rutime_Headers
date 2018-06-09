/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {
    NSMutableSet * _activeTouches;
    double  _initialPinchSeparation;
    NSMutableDictionary * _initialTouchPoints;
    <UIKeyboardPinchGestureRecognizerDelegate> * _pinchDelegate;
    bool  _pinchDetected;
    double  _pinchSeparationValues;
}

@property (nonatomic, readonly) double initialPinchSeparation;
@property (nonatomic) <UIKeyboardPinchGestureRecognizerDelegate> *pinchDelegate;
@property (nonatomic, readonly) bool pinchDetected;

- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (double)finalProgressForInitialProgress:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)initialPinchSeparation;
- (void)interpretTouchesForSplit;
- (id)pinchDelegate;
- (bool)pinchDetected;
- (void)reset;
- (void)resetPinchCalculations;
- (void)setPinchDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
