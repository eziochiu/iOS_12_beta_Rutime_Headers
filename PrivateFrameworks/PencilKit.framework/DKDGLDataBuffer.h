/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLDataBuffer : NSObject <DKDGLDataBufferAccessor> {
    bool  _didTeardown;
    unsigned int  _drawMode;
    DKDGLShader * _enabledShader;
    bool  _isDoubleBuffered;
    bool  _isEnabled;
    bool  _isUpdatingRawDataBuffer;
    struct { int x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; } * _updateDataArray;
    NSArray * _vertexAttributes;
    unsigned long long  _vertexCount;
    NSMutableArray * mArrayBuffers;
    NSMutableDictionary * mAttributeToArrayBuffersDictionary;
    unsigned long long  mCurrentBufferIndex;
    unsigned long long  mElementArrayCount;
    unsigned short * mGLElementData;
    unsigned int  mGLElementDataBuffer;
    bool  mGLElementDataBufferWasSetup;
    struct CGSize { 
        double width; 
        double height; 
    }  mGLElementMeshSize;
    unsigned long long  mGLElementQuadParticleCount;
    unsigned int  mGLVertexArrayObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDoubleBuffered;
@property (readonly) Class superclass;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) unsigned long long vertexCount;

- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)disableElementArrayBuffer;
- (unsigned int)drawMode;
- (void)drawWithShader:(id)arg1;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(bool)arg2;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)enableElementArrayBuffer;
- (char *)getDataPtr;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(bool)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3;
- (bool)isDoubleBuffered;
- (bool)p_setAttributeUpdateData:(struct { int x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*)arg1 fromAttribute:(id)arg2;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)teardown;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(id /* block */)arg2;
- (id)vertexAttributeNamed:(id)arg1;
- (id)vertexAttributes;
- (unsigned long long)vertexCount;

@end
