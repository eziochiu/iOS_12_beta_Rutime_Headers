/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {
    bool  _expanded;
    NSArray * _expandedCellularPlacementsAffectedByAirplaneMode;
    NSArray * _expandedLeadingPlacements;
    NSArray * _expandedTrailingPlacements;
    _UIStatusBar * _statusBar;
}

@property (nonatomic, readonly) double airplaneObstacleFadeInDuration;
@property (nonatomic, readonly) double airplaneObstacleFadeOutDuration;
@property (nonatomic, readonly) _UIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (nonatomic, readonly) NSArray *expandedLeadingPlacements;
@property (nonatomic, readonly) NSArray *expandedTrailingPlacements;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _UIStatusBarStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

+ (double)cornerRadius;
+ (bool)hasCellularCapability;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (double)itemSpacing;
+ (double)regionSpacing;
+ (Class)visualProviderSubclassForScreen:(id)arg1;

- (void).cxx_destruct;
- (void)_applyToAppearingRegions:(bool)arg1 block:(id /* block */)arg2;
- (void)_createExpandedPlacements;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)airplaneObstacleFadeInDuration;
- (double)airplaneObstacleFadeOutDuration;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (id)animationForAirplaneMode;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (bool)expanded;
- (id)expandedCellularPlacementsAffectedByAirplaneMode;
- (id)expandedLeadingPlacements;
- (id)expandedTrailingPlacements;
- (id)init;
- (void)modeUpdatedFromMode:(long long)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)setExpanded:(bool)arg1;
- (void)setStatusBar:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributes;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (id)willUpdateWithData:(id)arg1;

@end
