/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPreviewInteraction : NSObject {
    NSHashTable * _activeFailureRequirementGestureRecognizers;
    CADisplayLink * _continuousEvaluationDisplayLink;
    _UIPreviewInteractionStateRecognizer * _currentInteractionStateRecognizer;
    _UIDeepPressAnalyzer * _deepPressAnalyzer;
    <UIPreviewInteractionDelegate> * _delegate;
    _UIStatesFeedbackGenerator * _feedbackGenerator;
    bool  _feedbackGeneratorTurnedOn;
    _UIPreviewInteractionHighlighter * _highlighter;
    struct { 
        unsigned int delegatePreviewInteractionShouldBegin : 1; 
        unsigned int delegateDidUpdateCommitTransition : 1; 
        unsigned int delegateShouldFinishTransitionToPreview : 1; 
        unsigned int delegateShouldAutomaticallyTransitionToPreviewAfterDelay : 1; 
        unsigned int delegateHighlighterForPreviewTransition : 1; 
        unsigned int delegateViewForHighlight : 1; 
        unsigned int delegateViewControllerPresentationForPresentingViewController : 1; 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateAppearanceTransitionForViewController : 1; 
        unsigned int delegateDisappearanceTransitionForViewController : 1; 
        unsigned int interactive : 1; 
        unsigned int delegateDidPreventInteraction : 1; 
        unsigned int interactionRequiresRestart : 1; 
        unsigned int interactionWasCancelled : 1; 
        unsigned int previousProgressWasNegativeOrZero : 1; 
        unsigned int currentState : 3; 
        unsigned int nextUpdateShouldTransitionToPreview : 1; 
        unsigned int nextPreviewShouldPreventHapticFeedback : 1; 
    }  _previewInteractionFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneReferenceLocationFromLatestUpdate;
    <_UIPreviewInteractionTouchForceProviding> * _systemTouchForceProvider;
    <_UIPreviewInteractionTouchForceProviding> * _touchForceProvider;
    UIView * _view;
    _UIPreviewInteractionViewControllerHelper * _viewControllerHelper;
    id  _viewControllerPresentationObserver;
}

@property (nonatomic) <UIPreviewInteractionDelegate> *delegate;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_actuateFeedbackForStateIfNeeded:(long long)arg1;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_endContinuousEvaluation;
- (void)_endHighlightingIfNeeded;
- (void)_endInteractionIfNeeded;
- (void)_endInteractiveStateTransitions;
- (void)_endUsingFeedbackIfNeeded;
- (void)_endViewControllerPresentationObserving;
- (void)_prepareForInteractionIfNeeded;
- (void)_prepareForViewControllerPresentationObserving;
- (void)_prepareHighlighterIfNeeded;
- (void)_prepareUsingFeedback;
- (void)_prepareUsingFeedbackIfNeeded;
- (void)_presentPreviewViewControllerIfNeeded;
- (void)_resetAfterInteraction;
- (bool)_shouldCancelTransitionToState:(long long)arg1;
- (void)_startPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_turnOffFeedbackGenerator;
- (void)_turnOnFeedbackGenerator;
- (void)_updateFailureRequirementGestureRecognizersIfNeeded;
- (void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_updateForCurrentTouchForceProvider;
- (void)_updateHighlighter:(double)arg1;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)cancelInteraction;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (id)newGestureRecognizerForFailureRelationship;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setTouchForceProvider:(id)arg1;
- (id)touchForceProvider;
- (id)view;

@end
