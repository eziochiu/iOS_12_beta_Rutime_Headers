/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARInternalFaceTrackingConfiguration : ARConfiguration {
    bool  _useAlternativeResources;
}

@property (nonatomic) bool useAlternativeResources;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)renderingTechnique;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setMirroredFrameOutput:(bool)arg1;
- (void)setUseAlternativeResources:(bool)arg1;
- (id)techniques;
- (bool)useAlternativeResources;

@end
