/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert

- (id)_detailMessageFont;
- (long long)_effectStyle;
- (id)_keyCommandInputForCancelAction;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)_maximumContentWidth;
- (double)_minimumButtonWidth;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)dimmingViewForAlertController:(id)arg1;
- (bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)maximumWidth;
- (double)maximumWidthForTitleAndMessageContentView;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (bool)placementAvoidsKeyboard;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(bool)arg1 ofAlertController:(id)arg2;

@end
