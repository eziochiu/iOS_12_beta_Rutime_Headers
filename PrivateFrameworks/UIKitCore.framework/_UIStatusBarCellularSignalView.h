/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {
    _UIStatusBarCycleAnimation * _cycleAnimation;
    bool  _needsCycleAnimationUpdate;
}

@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) bool needsCycleAnimationUpdate;

+ (double)_barWidthForIconSize:(long long)arg1;
+ (double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;

- (void).cxx_destruct;
- (double)_barCornerRadius;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)arg1;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
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
