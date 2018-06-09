/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingConfiguration : ARConfiguration

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)init;
- (id)renderingTechnique;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setMirroredFrameOutput:(bool)arg1;
- (id)techniques;

@end
