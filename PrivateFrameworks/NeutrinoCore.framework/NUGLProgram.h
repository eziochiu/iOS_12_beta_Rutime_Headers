/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLProgram : NUGLObject {
    NSDictionary * _attributes;
    NSError * _buildError;
    long long  _buildStatus;
    NUGLShader * _shader;
    NSDictionary * _uniforms;
}

@property (readonly) NSDictionary *attributes;
@property (readonly) NUGLShader *shader;
@property (readonly) NSDictionary *uniforms;

- (void).cxx_destruct;
- (void)_build:(id)arg1;
- (id)attributes;
- (bool)build:(id)arg1 error:(out id*)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithShader:(id)arg1;
- (id)shader;
- (id)uniforms;

@end
