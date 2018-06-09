/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS {
    NSLayoutConstraint * _leadingRegionTrailingAnchorConstraint;
    NSDictionary * _orderedDisplayItemPlacements;
    NSLayoutConstraint * _trailingRegionLeadingAnchorConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;

+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
+ (double)height;
+ (double)itemSpacing;
+ (double)regionSpacing;
+ (Class)visualProviderSubclassForScreen:(id)arg1;

- (void).cxx_destruct;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)leadingRegionTrailingAnchorConstraint;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)setLeadingRegionTrailingAnchorConstraint:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setTrailingRegionLeadingAnchorConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize { double x1; double x2; })arg1;
- (id)styleAttributes;
- (id)trailingRegionLeadingAnchorConstraint;

@end
