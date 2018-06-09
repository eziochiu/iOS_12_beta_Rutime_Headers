/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate> {
    UIImage * _bgImage;
    UIImageView * _bgImageView;
    NSArray * _childViews;
    UIView * _defaultFocusView;
    _UIRepeatingPressGestureRecognizer * _downButtonGesture;
    bool  _isCenteredLayout;
    UIScrollView * _scrollView;
    _UIRepeatingPressGestureRecognizer * _upButtonGesture;
    NSArray * _viewsAboveScrollView;
    NSArray * _viewsBelowScrollView;
    bool  _waiting;
}

@property (nonatomic, retain) NSArray *childViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIView *defaultFocusView;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_scrollDown;
- (void)_scrollDown:(id)arg1;
- (void)_scrollInDirection:(double)arg1;
- (void)_scrollUp;
- (void)_scrollUp:(id)arg1;
- (void)_setupGestureRecognizers;
- (id)childViews;
- (id)defaultFocusView;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setBgImage:(id)arg1;
- (void)setChildViews:(id)arg1;
- (void)setDefaultFocusView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
