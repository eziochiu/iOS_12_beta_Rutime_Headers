/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPEModel : NSObject {
    NSMutableDictionary * _AdaptiveGradientProcessingCache;
    NSMutableDictionary * _InkProcessingCache;
    NSMutableDictionary * _TiltShiftProcessingCache;
    CIFilter * _auraFilter;
    CIFilter * _blackAndWhiteFilter;
    CIFilter * _dramaFilter;
    CIFilter * _duotoneFilter;
    bool  _liveInteraction;
    CIFilter * _photoFiltersFilter;
    bool  _processingFX;
    BLPixelImageBuffer * _sourceImageBuffer;
    bool  _sourceImageDidChange;
    CIFilter * _vintageFilter;
    CIFilter * _warmAndCoolFilter;
}

@property (nonatomic, retain) CIFilter *auraFilter;
@property (nonatomic, retain) CIFilter *blackAndWhiteFilter;
@property (nonatomic, retain) CIFilter *dramaFilter;
@property (nonatomic, retain) CIFilter *duotoneFilter;
@property (nonatomic) bool liveInteraction;
@property (nonatomic, retain) CIFilter *photoFiltersFilter;
@property (nonatomic, retain) CIFilter *vintageFilter;
@property (nonatomic, retain) CIFilter *warmAndCoolFilter;

- (void).cxx_destruct;
- (id)auraFilter;
- (id)blackAndWhiteFilter;
- (bool)canRenderCIImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3;
- (id)ciImageProcessFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 padding:(double)arg7;
- (id)ciImageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 padding:(double)arg6;
- (id)ciImageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 padding:(double)arg6 liveInteraction:(bool)arg7;
- (void)dealloc;
- (id)dramaFilter;
- (id)duotoneFilter;
- (id)imageWithAdaptiveGradientV1:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(struct CGPoint { double x1; double x2; })arg4 withSize:(double)arg5 withAngle:(float)arg6 gradientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 liveInteraction:(bool)arg8;
- (id)imageWithAdaptiveGradientV2:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withCenter:(struct CGPoint { double x1; double x2; })arg4 withSize:(double)arg5 withAngle:(float)arg6 gradientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 liveInteraction:(bool)arg8;
- (id)imageWithGroupIndex:(int)arg1 amount:(float)arg2 withOptionsObject:(id)arg3 analysisDictionary:(id)arg4 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 padding:(double)arg6;
- (id)imageWithInk:(id)arg1 cache:(id)arg2 groupIndex:(int)arg3 withOptionsObject:(id)arg4 gradientRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 padding:(double)arg6 liveInteraction:(bool)arg7;
- (id)initWithSourceImage:(id)arg1;
- (id)initWithSourceImageBuffer:(id)arg1;
- (bool)liveInteraction;
- (bool)needAdaptiveGradientProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (bool)needInkProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (bool)needTiltShiftProcessingCacheForGroupIndex:(int)arg1 andAmount:(float)arg2;
- (id)photoFiltersFilter;
- (id)processFX_CI:(id)arg1 groupIndex:(int)arg2 amount:(float)arg3 withOptionsObject:(id)arg4 analysisDictionary:(id)arg5 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 padding:(double)arg7;
- (id)processFX_NonCI:(id)arg1 tiltShiftCache:(id)arg2 groupIndex:(int)arg3 amount:(float)arg4 withOptionsObject:(id)arg5 analysisDictionary:(id)arg6 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 padding:(double)arg8;
- (void)releaseCachedFilters;
- (void)setAuraFilter:(id)arg1;
- (void)setBlackAndWhiteFilter:(id)arg1;
- (void)setDramaFilter:(id)arg1;
- (void)setDuotoneFilter:(id)arg1;
- (void)setLiveInteraction:(bool)arg1;
- (void)setPhotoFiltersFilter:(id)arg1;
- (void)setVintageFilter:(id)arg1;
- (void)setWarmAndCoolFilter:(id)arg1;
- (id)thumbImageWithGroupIndex:(int)arg1 amount:(float)arg2 version:(int)arg3;
- (void)updateSourceImage:(id)arg1;
- (void)updateSourceImageBuffer:(id)arg1;
- (id)vintageFilter;
- (id)warmAndCoolFilter;

@end
