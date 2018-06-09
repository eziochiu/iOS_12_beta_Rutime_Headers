/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShaderQualifierInt : DKDGLShaderQualifier {
    int  _GLintValue;
    int  _proposedGLintValue;
}

@property (nonatomic, readonly) int GLintValue;
@property (nonatomic) int proposedGLintValue;

- (int)GLintValue;
- (id)description;
- (int)proposedGLintValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLintValue:(int)arg1;

@end
