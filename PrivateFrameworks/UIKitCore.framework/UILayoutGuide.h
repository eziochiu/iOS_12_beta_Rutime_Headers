/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UILayoutGuide : NSObject <AVKitLayoutItem, HULayoutAnchorProviding, NSCoding, NSISVariableDelegate, SearchUIAutoLayoutItem, UILayoutItem_Internal, _UILayoutItem> {
    bool  __allowsNegativeDimensions;
    bool  __shouldBeArchived;
    bool  _allowOwningViewSetting;
    NSLayoutYAxisAnchor * _bottomAnchor;
    NSISVariable * _boundsHeightVariable;
    NSISVariable * _boundsWidthVariable;
    NSLayoutXAxisAnchor * _centerXAnchor;
    NSLayoutYAxisAnchor * _centerYAnchor;
    NSMutableArray * _constraintsToBeProcessedAfterDecoding;
    NSLayoutDimension * _heightAnchor;
    NSString * _identifier;
    bool  _isLayoutFrameValid;
    bool  _isLockedToOwningView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFrame;
    NSLayoutRect * _layoutRect;
    NSLayoutXAxisAnchor * _leadingAnchor;
    NSLayoutXAxisAnchor * _leftAnchor;
    NSISVariable * _minXVariable;
    NSISVariable * _minYVariable;
    UIView * _owningView;
    NSLayoutXAxisAnchor * _rightAnchor;
    NSMapTable * _stashedLayoutVariableObservations;
    NSArray * _systemConstraints;
    NSLayoutYAxisAnchor * _topAnchor;
    NSLayoutXAxisAnchor * _trailingAnchor;
    UIView * _unsafeUnretainedOwningView;
    bool  _useManualLayoutFrame;
    NSLayoutDimension * _widthAnchor;
}

@property (setter=_setAllowOwningViewSetting:, nonatomic) bool _allowOwningViewSetting;
@property (setter=_setAllowsNegativeDimensions:, nonatomic) bool _allowsNegativeDimensions;
@property (nonatomic, readonly, retain) NSISVariable *_boundsHeightVariable;
@property (nonatomic, readonly, retain) NSISVariable *_boundsWidthVariable;
@property (getter=_isLockedToOwningView, setter=_setLockedToOwningView:, nonatomic) bool _lockedToOwningView;
@property (nonatomic, readonly, retain) NSISVariable *_minXVariable;
@property (nonatomic, readonly, retain) NSISVariable *_minYVariable;
@property (setter=_setShouldBeArchived:, nonatomic) bool _shouldBeArchived;
@property (nonatomic, readonly, retain) NSMapTable *_stashedLayoutVariableObservations;
@property (setter=_setSystemConstraints:, nonatomic, retain) NSArray *_systemConstraints;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _ui_bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _ui_frame;
@property (nonatomic, readonly) UIView *_ui_superview;
@property (nonatomic) bool _ui_usesManualLayout;
@property (nonatomic, readonly) UIView *_ui_view;
@property (nonatomic, readonly) bool _useManualLayoutFrame;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) bool hasAmbiguousLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutFrame;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
@property (nonatomic) UIView *owningView;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;

- (void).cxx_destruct;
- (void)_addConstraintToBeProcessedAfterDecoding:(id)arg1;
- (bool)_allowOwningViewSetting;
- (bool)_allowsNegativeDimensions;
- (id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(bool)arg2;
- (id)_boundsHeightVariable;
- (id)_boundsWidthVariable;
- (id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2;
- (id)_descriptionForLayoutTrace;
- (void)_invalidateLayoutFrame;
- (bool)_isLockedToOwningView;
- (id)_layoutRect;
- (id)_minXVariable;
- (id)_minYVariable;
- (void)_owningViewIsDeallocating;
- (void*)_referenceView;
- (void)_setAllowOwningViewSetting:(bool)arg1;
- (void)_setAllowsNegativeDimensions:(bool)arg1;
- (void)_setLockedToOwningView:(bool)arg1;
- (void)_setManualLayoutFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setOwningView:(id)arg1;
- (void)_setShouldBeArchived:(bool)arg1;
- (void)_setSystemConstraints:(id)arg1;
- (bool)_shouldBeArchived;
- (void)_snipReferencingConstraints;
- (id)_stashedLayoutVariableObservations;
- (id)_systemConstraints;
- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_frame;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_removeFromParentLayoutItem;
- (id)_ui_superview;
- (bool)_ui_usesManualLayout;
- (id)_ui_view;
- (id)_uili_existingBaseFrameVariables;
- (id)_uili_existingObservationEligibleLayoutVariables;
- (bool)_uili_isFocusGuide;
- (id)_uili_observableLayoutEngineForBaseFrameVariables:(bool)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(bool)arg1;
- (bool)_uili_requiresObservationForVariable:(id)arg1;
- (void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;
- (bool)_useManualLayoutFrame;
- (id)bottomAnchor;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstBaselineAnchor;
- (void)forwardInvocation:(id)arg1;
- (bool)hasAmbiguousLayout;
- (id)heightAnchor;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastBaselineAnchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrame;
- (id)leadingAnchor;
- (id)leftAnchor;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (unsigned long long)nsli_autoresizingMask;
- (id)nsli_boundsHeightVariable;
- (id)nsli_boundsWidthVariable;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (struct CGSize { double x1; double x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })nsli_convertSizeToEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (id)nsli_description;
- (bool)nsli_descriptionIncludesPointer;
- (id)nsli_heightVariable;
- (id)nsli_installedConstraints;
- (bool)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (bool)nsli_isFlipped;
- (bool)nsli_isLegalConstraintItem;
- (bool)nsli_isRTL;
- (id)nsli_layoutEngine;
- (id)nsli_layoutMarginsItem;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (id)nsli_minXVariable;
- (id)nsli_minYVariable;
- (bool)nsli_removeConstraint:(id)arg1;
- (bool)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (id)nsli_superitem;
- (id)nsli_widthVariable;
- (id)owningView;
- (id)rightAnchor;
- (void)setIdentifier:(id)arg1;
- (void)setOwningView:(id)arg1;
- (void)set_ui_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_ui_usesManualLayout:(bool)arg1;
- (id)topAnchor;
- (id)trailingAnchor;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)widthAnchor;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)containingView;
- (bool)isContainedByItem:(id)arg1;
- (id)view;

@end
