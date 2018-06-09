/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver> {
    _UIFocusFastScrollingTouchSequence * _currentTouch;
    <_UIFocusFastScrollingRecognizerDelegate> * _delegate;
    bool  _enabled;
    _UIFocusEnginePanGestureRecognizer * _panGesture;
    UIScrollView * _previewingScrollView;
    NSTimer * _previewingTouchTimer;
    unsigned long long  _spatialFocusUpdateCount;
    NSTimer * _swipeIntervalTimer;
    NSMapTable * _swipeSequences;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIFocusFastScrollingRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)recognizerWithPanGesture:(id)arg1;

- (void).cxx_destruct;
- (void)_activatePreviewingScrollView;
- (void)_activatePreviewingScrollViewAfterDelay;
- (bool)_attemptToImmediatelyRecognizeEdgeGesture;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector { double x1; double x2; })arg1;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1;
- (void)_focusDidUpate:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;
- (bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (void)_startSwipeIntervalTimer;
- (void)_stopSwipeIntervalTimer;
- (void)_swipeIntervalElapsed:(id)arg1;
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;
- (bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;
- (void)_touchSequenceDidEnd:(id)arg1;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithPanGesture:(id)arg1;
- (bool)isEnabled;
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
