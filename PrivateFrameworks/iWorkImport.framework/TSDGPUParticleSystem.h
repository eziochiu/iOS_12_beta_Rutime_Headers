/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGPUParticleSystem : NSObject <TSDGLParticleSystem, TSDMTLParticleSystem> {
    NSMutableSet * _attributesInShader;
    TSDGLDataBufferAttribute * _centerAttribute;
    TSDGLDataBufferAttribute * _colorAttribute;
    TSDGPUDataBuffer * _dataBuffer;
    <MTLDevice> * _device;
    unsigned long long  _direction;
    double  _duration;
    bool  _hasParticleTexture;
    bool  _isDataBufferInitialized;
    bool  _isInitialized;
    TSDGLDataBufferAttribute * _lifeSpanAttribute;
    struct CGSize { 
        double width; 
        double height; 
    }  _objectSize;
    unsigned long long  _particleCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _particleSize;
    TSDGLDataBufferAttribute * _particleTexCoordAttribute;
    unsigned long long  _particlesHigh;
    unsigned long long  _particlesWide;
    TSDGLDataBufferAttribute * _positionAttribute;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    TSDGLDataBufferAttribute * _rotationAttribute;
    TSDGLDataBufferAttribute * _scaleAttribute;
    TSDGLShader * _shader;
    bool  _shouldDraw;
    bool  _shouldUseGLSL;
    bool  _shouldUseMetal;
    struct CGSize { 
        double width; 
        double height; 
    }  _slideSize;
    TSDGLDataBufferAttribute * _speedAttribute;
    TSDGLDataBufferAttribute * _texCoordAttribute;
    unsigned long long  _textureCount;
    bool * _visibilities;
    unsigned long long  _visibleParticleCount;
}

@property (nonatomic, readonly) TSDGLDataBufferAttribute *centerAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *colorAttribute;
@property (nonatomic, readonly) TSDGPUDataBuffer *dataBuffer;
@property (nonatomic, readonly) NSArray *dataBufferAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *lifeSpanAttribute;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } objectSize;
@property (nonatomic, readonly) unsigned long long particleCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } particleSize;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *particleTexCoordAttribute;
@property (nonatomic, readonly) unsigned long long particlesHigh;
@property (nonatomic, readonly) unsigned long long particlesWide;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *positionAttribute;
@property (nonatomic, readonly) <TSDAnimationRandomGenerator> *randomGenerator;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *rotationAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *scaleAttribute;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic, readonly) bool shouldDraw;
@property (nonatomic, readonly) bool shouldUseGLSL;
@property (nonatomic, readonly) bool shouldUseMetal;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } slideSize;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *speedAttribute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *texCoordAttribute;
@property (nonatomic, readonly) unsigned long long visibleParticleCount;

+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id)arg6 pipelineDescriptor:(id)arg7 device:(id)arg8;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6 randomGenerator:(id)arg7;
+ (id)newParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 pipelineDescriptor:(id)arg8 device:(id)arg9;
+ (id)newParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7 randomGenerator:(id)arg8;
+ (unsigned long long)numberOfVerticesPerParticle;
+ (struct CGSize { double x1; double x2; })p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)shouldDrawInvisibleParticles;
+ (bool)willOverrideColors;
+ (bool)willOverrideGeometry;
+ (bool)willOverrideStartingPoints;
+ (bool)willOverrideVisibilities;

- (struct { float x1; float x2; })centerAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)centerAttribute;
- (struct { float x1; float x2; float x3; float x4; })colorAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)colorAttribute;
- (id)dataBuffer;
- (id)dataBufferAttributes;
- (void)dealloc;
- (id)description;
- (id)device;
- (unsigned long long)direction;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2;
- (void)drawMetalWithEncoder:(id)arg1;
- (double)duration;
- (unsigned long long)indexFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })indexPointFromIndex:(unsigned long long)arg1;
- (id)initWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7 pipelineDescriptor:(id)arg8 device:(id)arg9;
- (id)initWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7 randomGenerator:(id)arg8;
- (struct { float x1; float x2; })lifeSpanAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)lifeSpanAttribute;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (struct CGSize { double x1; double x2; })objectSize;
- (void)p_logParticleInformation;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setDataBufferAttribute:(id*)arg1 withName:(id)arg2 defaultDataType:(long long)arg3 normalized:(bool)arg4 componentCount:(unsigned long long)arg5;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_setupParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id)arg7;
- (void)p_setupVertexData;
- (unsigned long long)particleCount;
- (struct CGSize { double x1; double x2; })particleSize;
- (id)particleTexCoordAttribute;
- (unsigned long long)particlesHigh;
- (unsigned long long)particlesWide;
- (id)positionAttribute;
- (id)randomGenerator;
- (struct { float x1; float x2; float x3; })rotationAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)rotationAttribute;
- (double)rotationMax;
- (double)scaleAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)scaleAttribute;
- (void)setupGLSL;
- (void)setupMetalWithPipelineDescriptor:(id)arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize { double x1; double x2; })arg2 reverseDrawOrder:(bool)arg3;
- (id)shader;
- (bool)shouldDraw;
- (bool)shouldUseGLSL;
- (bool)shouldUseMetal;
- (struct CGSize { double x1; double x2; })slideSize;
- (struct { float x1; float x2; float x3; })speedAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)speedAttribute;
- (double)speedMax;
- (struct CGPoint { double x1; double x2; })startingPointAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)texCoordAttribute;
- (struct { float x1; float x2; })vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)visibilityAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)visibleParticleCount;

@end
