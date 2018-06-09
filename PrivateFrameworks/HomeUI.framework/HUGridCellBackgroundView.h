/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCellBackgroundView : UIView {
    unsigned long long  _backgroundState;
    HFWallpaperSlice * _blurredWallpaperSlice;
    UIView * _ccMaterialView;
    double  _cornerRadius;
    HUGridCellBackgroundDisplayOptions * _displayOptions;
    UIVisualEffectView * _effectView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedWallpaperRect;
    bool  _pressed;
}

@property (nonatomic) unsigned long long backgroundState;
@property (nonatomic, retain) HFWallpaperSlice *blurredWallpaperSlice;
@property (nonatomic, retain) UIView *ccMaterialView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) HUGridCellBackgroundDisplayOptions *displayOptions;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedWallpaperRect;
@property (getter=isPressed, nonatomic) bool pressed;

- (void).cxx_destruct;
- (void)_createCCMaterialViewIfNecessary;
- (void)_createEffectViewIfNecessary;
- (id)_highlightedBackgroundColor;
- (bool)_isUsingControlCenterDisplayStyle;
- (id)_normalBackgroundColor;
- (bool)_shouldUseCCMaterialView;
- (bool)_shouldUsePrecomputedWallpaperContents;
- (bool)_shouldUseVisualEffectStyle;
- (void)_updateBackgroundColor;
- (void)_updateCornerRadius;
- (void)_updateDisplay;
- (void)_updateWallpaperContentsRect;
- (void)_updateWallpaperContentsScale;
- (unsigned long long)backgroundState;
- (id)blurredWallpaperSlice;
- (id)ccMaterialView;
- (double)cornerRadius;
- (void)didMoveToSuperview;
- (id)displayOptions;
- (id)effectView;
- (bool)isPressed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedWallpaperRect;
- (void)setBackgroundState:(unsigned long long)arg1;
- (void)setBlurredWallpaperSlice:(id)arg1;
- (void)setCcMaterialView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisplayOptions:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setNormalizedWallpaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPressed:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
