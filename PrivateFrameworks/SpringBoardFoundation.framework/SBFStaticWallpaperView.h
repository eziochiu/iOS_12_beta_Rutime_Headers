/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFStaticWallpaperView : SBFWallpaperView {
    NSString * _cacheGroup;
    SBFColorBoxes * _colorBoxes;
    UIImage * _displayedImage;
    UIImage * _image;
    double  _overallContrast;
    UIImage * _sampleImage;
}

@property (nonatomic, retain) SBFColorBoxes *colorBoxes;
@property (getter=_displayedImage, setter=_setDisplayedImage:, nonatomic, retain) UIImage *displayedImage;
@property (getter=_sampleImage, setter=_setSampleImage:, nonatomic, retain) UIImage *sampleImage;

+ (bool)_allowsParallax;
+ (bool)_allowsRasterization;
+ (bool)_canCacheImages;
+ (bool)_canDownscaleSampleImage;

- (void).cxx_destruct;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 smudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)_createColorBoxes;
- (void)_displayImage:(id)arg1;
- (id)_displayedImage;
- (void)_generateImageForImage:(id)arg1 options:(unsigned long long)arg2 downsampleFactor:(double)arg3 generationHandler:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)_resetColorBoxes;
- (id)_sampleImage;
- (void)_setDisplayedImage:(id)arg1;
- (void)_setSampleImage:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentView;
- (void)_setupWallpaperImage:(id)arg1 options:(unsigned long long)arg2;
- (id)_wallpaperImageForAnalysis;
- (float)_zoomScale;
- (id)cacheGroup;
- (id)colorBoxes;
- (double)contrast;
- (double)cropZoomScale;
- (bool)hasContentOutsideVisibleBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 options:(unsigned long long)arg5 wallpaperSettingsProvider:(id)arg6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 wallpaperSettingsProvider:(id)arg4;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)setColorBoxes:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (id)snapshotImage;
- (id)wallpaperImage;
- (long long)wallpaperType;

@end
