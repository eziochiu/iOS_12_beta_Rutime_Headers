/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {
    double  _allowableMovement;
    unsigned long long  _allowedFlickDirections;
    bool  _didLongPress;
    UIDelayedAction * _elapsedAction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCentroidLocation;
    bool  _longPressOnly;
    double  _maximumFlickDuration;
    double  _minimumFlickDistance;
    double  _minimumPressDuration;
    UIDelayedAction * _responsivenessAction;
    double  _responsivenessDelay;
    double  _timestampBeforeGestureBegan;
    double  _timestampOfLastEvent;
    unsigned long long  _touchCount;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) unsigned long long allowedFlickDirections;
@property (nonatomic, readonly) bool didLongPress;
@property (nonatomic, retain) UIDelayedAction *elapsedAction;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCentroidLocation;
@property (nonatomic) bool longPressOnly;
@property (nonatomic) double maximumFlickDuration;
@property (nonatomic) double minimumFlickDistance;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic, readonly) <_UIPanOrFlickGestureRecognizerDelegate> *panOrFlickDelegate;
@property (nonatomic, readonly) unsigned long long recognizedFlickDirection;
@property (nonatomic, retain) UIDelayedAction *responsivenessAction;
@property (nonatomic) double responsivenessDelay;
@property (nonatomic) double timestampBeforeGestureBegan;
@property (nonatomic) double timestampOfLastEvent;

- (void).cxx_destruct;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (double)allowableMovement;
- (unsigned long long)allowedFlickDirections;
- (void)clearTimer;
- (void)dealloc;
- (bool)didLongPress;
- (id)elapsedAction;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })initialCentroidLocation;
- (bool)isValidLongPress;
- (bool)longPressOnly;
- (double)maximumFlickDuration;
- (double)minimumFlickDistance;
- (double)minimumPressDuration;
- (id)panOrFlickDelegate;
- (unsigned long long)recognizedFlickDirection;
- (void)reset;
- (id)responsivenessAction;
- (double)responsivenessDelay;
- (void)responsivenessTimeElapsed:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setAllowedFlickDirections:(unsigned long long)arg1;
- (void)setElapsedAction:(id)arg1;
- (void)setInitialCentroidLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLongPressOnly:(bool)arg1;
- (void)setMaximumFlickDuration:(double)arg1;
- (void)setMinimumFlickDistance:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setResponsivenessAction:(id)arg1;
- (void)setResponsivenessDelay:(double)arg1;
- (void)setTimestampBeforeGestureBegan:(double)arg1;
- (void)setTimestampOfLastEvent:(double)arg1;
- (void)startTimer;
- (double)timestampBeforeGestureBegan;
- (double)timestampOfLastEvent;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
