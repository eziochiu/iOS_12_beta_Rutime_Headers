/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceActionVisualStyle : NSObject <NSCopying, UIInterfaceActionConcreteVisualStyleImpl, UIInterfaceActionConcreteVisualStyleImplInternal> {
    UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> * _concreteVisualStyle;
    id /* block */  _fontForViewStateBlock;
    UIInterfaceActionGroupViewState * _groupViewState;
    UIInterfaceActionOverrideVisualStyle * _visualStyleOverride;
}

@property (nonatomic, retain) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fontForViewStateBlock;
@property (nonatomic, readonly) UIInterfaceActionGroupViewState *groupViewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIInterfaceActionOverrideVisualStyle *visualStyleOverride;

+ (id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;

- (void).cxx_destruct;
- (id)_base_actionPropertiesAffectingImageViewStyling;
- (id)_base_actionPropertiesAffectingLabelStyling;
- (void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)_styleForVisualProperties;
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
- (id)concreteVisualStyle;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargin;
- (id)copyWithGroupViewState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultConcreteActionTitleLabelPreferredFont;
- (id)defaultConcreteActionTitleLabelRegularFont;
- (id)defaultScreen;
- (id)description;
- (id /* block */)fontForViewStateBlock;
- (id)groupViewState;
- (double)horizontalImageContentSpacing;
- (id)init;
- (id)initWithConcreteVisualStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumActionGroupContentSize;
- (struct CGSize { double x1; double x2; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (bool)selectByPressGestureRequired;
- (bool)selectionFeedbackEnabled;
- (void)setConcreteVisualStyle:(id)arg1;
- (void)setFontForViewStateBlock:(id /* block */)arg1;
- (void)setVisualStyleOverride:(id)arg1;
- (double)verticalImageContentSpacing;
- (id)visualStyleOverride;

@end
