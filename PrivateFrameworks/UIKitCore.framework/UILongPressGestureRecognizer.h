/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    NSMutableSet * _activeTouches;
    double  _allowableMovement;
    unsigned int  _allowsDynamicTouchesList;
    long long  _buttonType;
    unsigned int  _cancelPastAllowableMovement;
    double  _currentImpulse;
    UIHeldAction * _enoughTimeElapsed;
    unsigned int  _gotEnoughTaps;
    unsigned int  _gotTooMany;
    unsigned int  _gotTouchEnd;
    UITapRecognizer * _imp;
    long long  _impulseObservations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastCentroidScreen;
    double  _lastForce;
    double  _lastForceTimestamp;
    double  _minimumPressDuration;
    unsigned long long  _numberOfTouchesRequired;
    bool  _requiresQuietImpulse;
    bool  _requiresQuietImpulseForCurrentTouchSequence;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPointScreen;
    UIDelayedAction * _tooMuchTimeElapsed;
    NSObservation * _touchForceObservation;
    NSArray * _touches;
}

@property (setter=_setButtonType:, nonatomic) long long _buttonType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _centroidScreen;
@property (setter=_setRequiresQuietImpulse:, nonatomic) bool _requiresQuietImpulse;
@property (setter=_setRequiresQuietImpulseForCurrentTouchSequence:, nonatomic) bool _requiresQuietImpulseForCurrentTouchSequence;
@property (nonatomic) double allowableMovement;
@property (nonatomic) bool cancelPastAllowableMovement;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *touches;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (double)_allowableSeparation;
- (bool)_allowsDynamicTouchesList;
- (long long)_buttonType;
- (struct CGPoint { double x1; double x2; })_centroidInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_centroidScreen;
- (void)_changeTouchesListTo:(id)arg1;
- (long long)_finalStateForRecognition;
- (bool)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(bool)arg1;
- (bool)_requiresQuietImpulse;
- (bool)_requiresQuietImpulseForCurrentTouchSequence;
- (void)_resetGestureRecognizer;
- (void)_resetImpulseQuietness;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowsDynamicTouchesList:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setRequiresQuietImpulse:(bool)arg1;
- (void)_setRequiresQuietImpulseForCurrentTouchSequence:(bool)arg1;
- (void)_setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldReceivePress:(id)arg1;
- (struct CGPoint { double x1; double x2; })_startPointInView:(id)arg1;
- (void)_startTapFinishedTimer;
- (double)_touchSloppinessFactor;
- (bool)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (struct CGPoint { double x1; double x2; })_translationInView:(id)arg1;
- (bool)activeTouchesExceedAllowableSeparation;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelPastAllowableMovement;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)clearTimer;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)minimumPressDuration;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouches;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelPastAllowableMovement:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setTouches:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)startTimer;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_isHoldingLongPress;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

@end
