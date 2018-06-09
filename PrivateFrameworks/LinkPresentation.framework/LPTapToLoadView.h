/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {
    id /* block */  _animateOutCompletionHandler;
    LPTextView * _captionView;
    <LPTapToLoadViewDelegate> * _delegate;
    UILongPressGestureRecognizer * _highlightGestureRecognizer;
    UIView * _highlightView;
    UIView * _progressView;
    LPTapToLoadViewStyle * _style;
    bool  _wasTapped;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPTapToLoadViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateToProgressView;
- (void)_buildViews;
- (id)_createIndeterminateProgressIndicator;
- (void)_didScroll;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)animateOutWithCompletionHandler:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithStyle:(id)arg1;
- (void)layoutComponentView;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
