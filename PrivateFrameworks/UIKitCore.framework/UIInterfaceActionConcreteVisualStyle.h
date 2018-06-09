/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceActionConcreteVisualStyle : NSObject <NSCopying, UIInterfaceActionConcreteVisualStyleImplInternal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)actionClassificationLabelColorForViewState:(id)arg1;
- (id)actionClassificationLabelFontForViewState:(id)arg1;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (id)actionPropertiesAffectingImageViewStyling;
- (id)actionPropertiesAffectingLabelStyling;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionSequenceEdgeInsets;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (double)actionTitleLabelMinimumScaleFactor;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultScreen;
- (double)horizontalImageContentSpacing;
- (struct CGSize { double x1; double x2; })maximumActionGroupContentSize;
- (struct CGSize { double x1; double x2; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)newRepresentationViewForAction:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (bool)selectByPressGestureRequired;
- (bool)selectionFeedbackEnabled;
- (double)verticalImageContentSpacing;

@end
