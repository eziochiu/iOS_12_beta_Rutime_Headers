/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {
    UIScreenEdgePanGestureRecognizer * _edgePanRecognizer;
}

@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureNavigationGesture;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_setShouldReverseLayoutDirection:(bool)arg1;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizerView;
- (id)initWithViewController:(id)arg1 animator:(id)arg2;
- (id)screenEdgePanGestureRecognizer;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;

@end
