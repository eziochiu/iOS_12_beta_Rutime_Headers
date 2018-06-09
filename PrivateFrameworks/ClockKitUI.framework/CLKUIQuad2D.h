/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIQuad2D : CLKUIQuad {
    float  _alpha;
    CLKUITexture * _primaryTexture;
    float  _rotation;
    void _sampleCenter;
    void _sampleRadius;
    CLKUITexture * _secondaryTexture;
    CLKUIShader * _shader;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) CLKUITexture *primaryTexture;
@property (nonatomic) float rotation;
@property (nonatomic) void sampleCenter;
@property (nonatomic) void sampleRadius;
@property (nonatomic, retain) CLKUITexture *secondaryTexture;
@property (nonatomic, readonly) CLKUIShader *shader;

+ (id)quad2DWithShader:(id)arg1;

- (void).cxx_destruct;
- (float)alpha;
- (id)initWithShader:(id)arg1;
- (id)primaryTexture;
- (float)rotation;
- (void)sampleCenter;
- (void)sampleRadius;
- (id)secondaryTexture;
- (void)setAlpha:(float)arg1;
- (void)setPrimaryTexture:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setSampleCenter;
- (void)setSampleRadius;
- (void)setSecondaryTexture:(id)arg1;
- (id)shader;

@end
