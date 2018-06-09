/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLLightProbe : MDLLight {
    MDLTexture * _irradianceTexture;
    MDLTexture * _reflectiveTexture;
    NSMutableData * _sphericalHarmonicsCoefficients;
    unsigned long long  _sphericalHarmonicsLevel;
    <MDLTransformComponent> * _transform;
}

@property (nonatomic, readonly, retain) MDLTexture *irradianceTexture;
@property (nonatomic, readonly, retain) MDLTexture *reflectiveTexture;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) unsigned long long sphericalHarmonicsLevel;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (void)calculateIrradianceGradientUsingSamples:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4;
+ (id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6;
+ (struct CGColor { }*)sampleSHAt:(void *)arg1 usingCoefficients:(void *)arg2 withLevel:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long

- (void).cxx_destruct;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1;
- (id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2;
- (id)irradianceTexture;
- (id)reflectiveTexture;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)sphericalHarmonicsCoefficients;
- (unsigned long long)sphericalHarmonicsLevel;
- (id)transform;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)lightProbeWithSCNLight:(id)arg1 node:(id)arg2;

@end
