/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAlertControllerVisualStyle : NSObject {
    UIAlertControllerDescriptor * _descriptor;
    long long  _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle * _interfaceActionVisualStyle;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, retain) UIAlertControllerDescriptor *descriptor;
@property (nonatomic) long long forcedInterfaceIdiom;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *interfaceActionVisualStyle;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;

- (void).cxx_destruct;
- (id)_detailMessageFont;
- (id)_keyCommandInputForCancelAction;
- (double)_marginAboveDetailMessageFirstBaseline;
- (void)_reloadInterfaceActionVisualStyle;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2;
- (double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1;
- (bool)_shouldReverseActions;
- (double)_spacingBetweenDismissButtonAndContent;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionImageMarginForAction;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionSequenceEdgeInsets;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })collectionViewOutsetSize;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (double)contentHorizontalMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)contentVerticalMargin;
- (id)defaultActionFont;
- (id)descriptor;
- (id)dimmingViewForAlertController:(id)arg1;
- (long long)forcedInterfaceIdiom;
- (bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)init;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (id)interfaceActionVisualStyle;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (bool)isEqual:(id)arg1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)maximumHeightForDisplayOnScreen:(id)arg1;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)maximumWidth;
- (double)maximumWidthForTitleAndMessageContentView;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (struct CGSize { double x1; double x2; })minimumActionContentSize;
- (double)minimumWidth;
- (long long)permittedActionLayoutDirection;
- (bool)placementAvoidsKeyboard;
- (id)preferredActionFont;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (id)regularActionFont;
- (void)setDescriptor:(id)arg1;
- (void)setForcedInterfaceIdiom:(long long)arg1;
- (void)setTraitCollection:(id)arg1;
- (bool)shouldOccludeDuringPresentation;
- (bool)shouldPreserveRespondersAcrossWindows;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (id)tintColorForAlertController:(id)arg1;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (id)traitCollection;
- (double)transitionDurationForPresentation:(bool)arg1 ofAlertController:(id)arg2;
- (bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end
