/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView {
    _UIStatusBarCycleAnimation * _cycleAnimation;
    bool  _needsCycleAnimationUpdate;
}

@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) bool needsCycleAnimationUpdate;

+ (double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
+ (double)_totalWidthForIconSize:(long long)arg1;

- (void).cxx_destruct;
- (double)_barCornerRadius;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateCycleAnimationNow;
- (void)_updateCycleAnimationVisibility;
- (void)_updateFromMode:(long long)arg1;
- (void)_visibilityDidChange;
- (id)accessibilityHUDRepresentation;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsCycleAnimationUpdate;
- (void)setCycleAnimation:(id)arg1;
- (void)setNeedsCycleAnimationUpdate:(bool)arg1;

@end
