/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    long long  _buttonType;
    unsigned int  _delaysRecognitionForGreaterTapCounts;
    UITapRecognizer * _imp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInView;
}

@property (setter=_setButtonType:, nonatomic) long long _buttonType;
@property (readonly) unsigned long long akNumberOfTapsRequired;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *touches;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_supportsTouchContinuation;

- (void).cxx_destruct;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (void)_appendSubclassDescription:(id)arg1;
- (long long)_buttonType;
- (bool)_delaysRecognitionForGreaterTapCounts;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (long long)_finalStateForRecognition;
- (void)_resetGestureRecognizer;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setDelaysRecognitionForGreaterTapCounts:(bool)arg1;
- (bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldReceivePress:(id)arg1;
- (double)_touchSloppinessFactor;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (double)maximumTapDuration;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouches;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setMaximumTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (unsigned long long)akNumberOfTapsRequired;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

@end
