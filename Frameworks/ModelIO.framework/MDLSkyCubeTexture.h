/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSkyCubeTexture : MDLTexture {
    float  _brightness;
    float  _contrast;
    float  _exposure;
    float  _gamma;
    float  _groundAlbedo;
    struct CGColor { } * _groundColor;
    void _highDynamicRangeCompression;
    float  _highDynamicRangeCompressionLimit;
    float  _horizonElevation;
    float  _saturation;
    struct SkyDescriptor { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; struct Detail {} *x19; unsigned int x20; unsigned int x21; float x22; float x23; float x24; float x25; /* Warning: Unrecognized filer type: '}' using 'void*' */ void**x26; } * _sky;
    float  _sunAzimuth;
    float  _sunElevation;
    float  _turbidity;
    float  _upperAtmosphereScattering;
}

@property (nonatomic) float brightness;
@property (nonatomic) float contrast;
@property (nonatomic) float exposure;
@property (nonatomic) float gamma;
@property (nonatomic) float groundAlbedo;
@property (nonatomic) struct CGColor { }*groundColor;
@property (nonatomic) void highDynamicRangeCompression;
@property (nonatomic) float horizonElevation;
@property (nonatomic) float saturation;
@property (nonatomic) float sunAzimuth;
@property (nonatomic) float sunElevation;
@property (nonatomic) float turbidity;
@property (nonatomic) float upperAtmosphereScattering;

- (float)brightness;
- (float)contrast;
- (void)dealloc;
- (float)exposure;
- (float)gamma;
- (float)groundAlbedo;
- (struct CGColor { }*)groundColor;
- (void)highDynamicRangeCompression;
- (float)horizonElevation;
- (id)initWithName:(void *)arg1 channelEncoding:(void *)arg2 textureDimensions:(void *)arg3 turbidity:(void *)arg4 sunElevation:(void *)arg5 sunAzimuth:(void *)arg6 upperAtmosphereScattering:(void *)arg7 groundAlbedo:(void *)arg8; // needs 8 arg types, found 7: id, long long, float, float, float, float, float
- (id)initWithName:(void *)arg1 channelEncoding:(void *)arg2 textureDimensions:(void *)arg3 turbidity:(void *)arg4 sunElevation:(void *)arg5 upperAtmosphereScattering:(void *)arg6 groundAlbedo:(void *)arg7; // needs 7 arg types, found 6: id, long long, float, float, float, float
- (float)saturation;
- (void)setBrightness:(float)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposure:(float)arg1;
- (void)setGamma:(float)arg1;
- (void)setGroundAlbedo:(float)arg1;
- (void)setGroundColor:(struct CGColor { }*)arg1;
- (void)setHighDynamicRangeCompression;
- (void)setHorizonElevation:(float)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSunAzimuth:(float)arg1;
- (void)setSunElevation:(float)arg1;
- (void)setTurbidity:(float)arg1;
- (void)setUpperAtmosphereScattering:(float)arg1;
- (float)sunAzimuth;
- (float)sunElevation;
- (float)turbidity;
- (void)updateTexture;
- (float)upperAtmosphereScattering;

@end
