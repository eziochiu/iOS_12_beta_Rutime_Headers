/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShaderQualifierPoint3D : DKDGLShaderQualifier {
    struct { 
        float x; 
        float y; 
        float z; 
    }  _GLPoint3DValue;
    struct { 
        float x; 
        float y; 
        float z; 
    }  _proposedGLPoint3DValue;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3; } GLPoint3DValue;
@property (nonatomic) struct { float x1; float x2; float x3; } proposedGLPoint3DValue;

- (struct { float x1; float x2; float x3; })GLPoint3DValue;
- (id)description;
- (struct { float x1; float x2; float x3; })proposedGLPoint3DValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLPoint3DValue:(struct { float x1; float x2; float x3; })arg1;

@end
