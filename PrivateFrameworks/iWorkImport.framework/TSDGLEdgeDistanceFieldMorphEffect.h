/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    bool  _didSetupSkewAngleOffsetX;
    bool  _didTeardown;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _incomingTextBounds;
    unsigned int  _incomingTextureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _incomingTextureSize;
    bool  _isTextStyleIdenticalExceptSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outgoingTextBounds;
    unsigned int  _outgoingTextureName;
    struct CGSize { 
        double width; 
        double height; 
    }  _outgoingTextureSize;
    TSDGLShader * _shader;
    struct CGPoint { 
        double x; 
        double y; 
    }  _skewAngleOffsetX;
}

@property (nonatomic, readonly) unsigned int incomingTextureName;
@property (nonatomic) bool isTextStyleIdenticalExceptSize;
@property (nonatomic, readonly) unsigned int outgoingTextureName;
@property (nonatomic, readonly) TSDGLShader *shader;

- (void)dealloc;
- (unsigned int)incomingTextureName;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize { double x1; double x2; })arg2 outgoingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outgoingColor:(struct { float x1; float x2; float x3; float x4; })arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize { double x1; double x2; })arg6 incomingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 incomingColor:(struct { float x1; float x2; float x3; float x4; })arg8;
- (bool)isTextStyleIdenticalExceptSize;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (unsigned int)outgoingTextureName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_affineTransformConvertingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPercent:(double)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_affineTransformWithSkewAngleOffsetX:(struct CGPoint { double x1; double x2; })arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (double)p_errorFromApplyingSkewAngleOffsetX:(struct CGPoint { double x1; double x2; })arg1 toOutgoingScanlines:(double*)arg2 incomingScanlines:(double*)arg3 samples:(unsigned long long)arg4;
- (void)p_fillScanlineLocations:(double*)arg1 samples:(unsigned long long)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4;
- (void)setIsTextStyleIdenticalExceptSize:(bool)arg1;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 generateTextureMatrices:(bool)arg3;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 outgoingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 incomingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)shader;
- (void)teardown;
- (struct CGPoint { double x1; double x2; })textureMatchingSkewAngleOffsetX;

@end
