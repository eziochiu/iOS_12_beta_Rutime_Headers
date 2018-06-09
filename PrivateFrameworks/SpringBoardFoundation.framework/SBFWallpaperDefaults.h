/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaults : NSObject {
    SBWallpaperDefaults * _defaultsStore;
}

@property (nonatomic, readonly) SBWallpaperDefaults *defaultsStore;

+ (id)defaults;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForVariant:(long long)arg1;
- (id)defaultsStore;
- (id)description;
- (bool)hasVideo;
- (bool)hasVideoForVariant:(long long)arg1;
- (id)init;
- (id)initWithDefaultsStore:(id)arg1;
- (bool)isPortraitForVariant:(long long)arg1;
- (bool)magnifyEnabledForVariant:(long long)arg1;
- (id)nameForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (void)resetCroppingDefaults;
- (void)resetDefaults;
- (void)resetHasVideoDefaults;
- (void)resetMagnifyDefaults;
- (void)resetNameDefaults;
- (void)resetParallaxFactorDefaults;
- (void)resetPortraitDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)resetZoomScaleDefaults;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLocations:(long long)arg2;
- (void)setHasVideo:(bool)arg1;
- (void)setMagnifyEnabled:(bool)arg1 forLocations:(long long)arg2;
- (void)setName:(id)arg1 forLocations:(long long)arg2;
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2;
- (void)setPortrait:(bool)arg1 forLocations:(long long)arg2;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(bool)arg1 forLocations:(long long)arg2;
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2;
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2;
- (double)stillTimeInVideo;
- (double)stillTimeInVideoForVariant:(long long)arg1;
- (bool)supportsCroppingForVariant:(long long)arg1;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (double)zoomScaleForVariant:(long long)arg1;

@end
