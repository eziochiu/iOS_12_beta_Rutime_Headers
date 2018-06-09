/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableVideoComposition : AVVideoComposition {
    AVMutableVideoCompositionInternal * _mutableVideoComposition;
}

@property (nonatomic, retain) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, retain) Class customVideoCompositorClass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, copy) NSArray *instructions;
@property (nonatomic) float renderScale;
@property (nonatomic) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic) int sourceTrackIDForFrameTiming;

+ (id)videoComposition;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(id /* block */)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;

- (id)animationTool;
- (id)builtInCompositorName;
- (id)colorPrimaries;
- (id)colorTransferFunction;
- (id)colorYCbCrMatrix;
- (Class)customVideoCompositorClass;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)instructions;
- (float)renderScale;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setAnimationTool:(id)arg1;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setColorTransferFunction:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceTrackIDForFrameTiming:(int)arg1;
- (int)sourceTrackIDForFrameTiming;

@end
