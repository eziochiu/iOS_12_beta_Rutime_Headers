/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewCellPromiseRegion : NSObject <_UIFocusRegionContainer, _UILegacyFocusRegion> {
    UICollectionView * _collectionView;
    UICollectionViewLayoutAttributes * _layoutAttributes;
}

@property (nonatomic) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isPromiseFocusRegion;
- (bool)_isTransparentFocusRegion;
- (bool)_legacy_isEligibleForFocusInteraction;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (bool)canBecomeFocused;
- (id)collectionView;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)layoutAttributes;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setCollectionView:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
