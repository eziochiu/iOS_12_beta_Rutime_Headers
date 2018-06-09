/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate> {
    UIImage * _blur;
    struct _CAImageQueue { } * _blurQueue;
    UIImage * _cachedUnblurredImage;
    CADisplayLink * _cachedUnblurredImageDisplayLinkObserver;
    NSTimer * _colorSampleTimer;
    NSDictionary * _options;
    bool  _pausedForThermalReasons;
    <SBFProceduralWallpaper> * _proceduralWallpaper;
    int  _thermalNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) <SBFProceduralWallpaper> *proceduralWallpaper;
@property (readonly) Class superclass;

+ (bool)_allowsParallax;
+ (bool)_allowsRasterization;

- (void).cxx_destruct;
- (id)_blurredImage;
- (void)_cachedUnbluredImageDidInvalidate;
- (id)_computeAverageColor;
- (bool)_deviceMayRotate;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (bool)_isVisible;
- (bool)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
- (id)_newImageFromBlurSurface:(struct __IOSurface { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_sample;
- (bool)_shouldSampleContinuously;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateAnimating;
- (void)_updateSampleTimer;
- (void)dealloc;
- (bool)hasBeenInvalidated;
- (bool)hasContentOutsideVisibleBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(long long)arg4 wallpaperSettingsProvider:(id)arg5;
- (void)invalidate;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (void)layoutSubviews;
- (bool)needsImmediateLayoutBeforeRotation;
- (id)options;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (id)proceduralWallpaper;
- (void)setContinuousColorSamplingEnabled:(bool)arg1;
- (void)setRotating:(bool)arg1;
- (void)setWallpaperAnimationEnabled:(bool)arg1;
- (id)snapshotImage;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(struct __IOSurface { }*)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)wallpaperType;

@end
