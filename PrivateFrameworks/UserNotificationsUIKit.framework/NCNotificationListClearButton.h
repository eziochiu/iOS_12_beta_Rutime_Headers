/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListClearButton : PLDismissControl <NCMaterialsAdjusting, SBUIIconForceTouchControllerDataSource, SBUIIconForceTouchControllerDelegate, UIGestureRecognizerDelegate> {
    unsigned long long  _animatingTransitionCount;
    id /* block */  _clearAllHandler;
    long long  _clearButtonState;
    <NCNotificationListClearButtonDelegate> * _delegate;
    SBUIForceTouchGestureRecognizer * _forceTouchGestureRecognizer;
    NSMutableArray * _glyphImageViews;
    SBUIIconForceTouchController * _iconForceTouchController;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ clearAllHandler;
@property (nonatomic, readonly) long long clearButtonState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListClearButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_circleHorizontalPadding;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (double)_screenScale;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleBoundsForState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleFrameWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleFrameWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forState:(long long)arg2;
- (void)_configureGlyphImagesIfNecessaryWithRecipe:(long long)arg1;
- (id)_glyphFramesWithCircleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forState:(long long)arg2;
- (id)_glyphImagesFromAttributedString:(id)arg1;
- (void)_layoutSubviewsForState:(long long)arg1;
- (bool)_shouldLayoutOnTheLeft;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unrolledCircleBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_xFrameWithCircleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forState:(long long)arg2;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (id /* block */)clearAllHandler;
- (long long)clearButtonState;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)iconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 didPresentForGestureRecognizer:(id)arg2;
- (double)iconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (long long)iconForceTouchController:(id)arg1 layoutStyleForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 primaryViewControllerForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 secondaryViewControllerForGestureRecognizer:(id)arg2;
- (bool)iconForceTouchController:(id)arg1 shouldUseSecureWindowForGestureRecognizer:(id)arg2;
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2 backgroundMaterialOptions:(unsigned long long)arg3 overlayMaterialOptions:(unsigned long long)arg4;
- (void)layoutSubviews;
- (void)setClearAllHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
