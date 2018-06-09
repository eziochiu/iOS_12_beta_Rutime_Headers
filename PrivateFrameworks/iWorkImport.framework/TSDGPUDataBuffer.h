/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGPUDataBuffer : NSObject <TSDGLDataBuffer, TSDMTLDataBuffer> {
    NSMutableArray * _arrayBuffers;
    NSMutableDictionary * _attributeToArrayBuffersDictionary;
    unsigned long long  _centerAttributeIndex;
    bool  _conformsToMetalProtocol;
    unsigned long long  _currentBufferIndex;
    <MTLDevice> * _device;
    bool  _didTeardown;
    unsigned int  _drawMode;
    unsigned long long  _elementArrayCount;
    TSDGLShader * _enabledShader;
    unsigned short * _gLElementData;
    unsigned int  _gLElementDataBuffer;
    bool  _gLElementDataBufferWasSetup;
    struct CGSize { 
        double width; 
        double height; 
    }  _gLElementMeshSize;
    unsigned long long  _gLElementQuadParticleCount;
    unsigned int  _gLVertexArrayObjects;
    bool  _isDynamicallyBuffered;
    bool  _isEnabled;
    bool  _isUpdatingRawDataBuffer;
    unsigned long long  _metalDrawMode;
    <MTLBuffer> * _metalElementData;
    unsigned long long  _positionAttributeIndex;
    unsigned long long  _texCoordAttributeIndex;
    NSArray * _vertexAttributes;
    unsigned long long  _vertexCount;
}

@property (readonly) unsigned long long centerAttributeIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDynamicallyBuffered;
@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) Class superclass;
@property (readonly) unsigned long long texCoordAttributeIndex;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) unsigned long long vertexCount;

+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 device:(id)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5 device:(id)arg6;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3 device:(id)arg4;

- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (unsigned long long)centerAttributeIndex;
- (void)dealloc;
- (id)description;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)disableGLElementArrayBuffer;
- (void)disableWithDevice:(id)arg1;
- (unsigned int)drawMode;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 advanceDynamicBuffer:(bool)arg4;
- (void)drawWithShader:(id)arg1;
- (void)drawWithShader:(id)arg1 advanceDynamicBuffer:(bool)arg2;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(bool)arg2;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(bool)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3 advanceDynamicBuffer:(bool)arg4;
- (void)enableDataBuffer;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)enableGLElementArrayBuffer;
- (void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2 bufferCount:(unsigned long long)arg3;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
- (bool)isDynamicallyBuffered;
- (unsigned long long)metalDrawMode;
- (bool)p_setAttributeUpdateData:(struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*)arg1 fromAttribute:(id)arg2;
- (void)p_setupElementArrayBufferIfNecessary;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (unsigned long long)positionAttributeIndex;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)setMetalDrawMode:(unsigned long long)arg1;
- (void)teardown;
- (unsigned long long)texCoordAttributeIndex;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(id /* block */)arg2;
- (void)updateDataBufferAttributesWithBlock:(id /* block */)arg1;
- (void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(id /* block */)arg2;
- (id)vertexAttributeNamed:(id)arg1;
- (id)vertexAttributes;
- (unsigned long long)vertexCount;

@end
