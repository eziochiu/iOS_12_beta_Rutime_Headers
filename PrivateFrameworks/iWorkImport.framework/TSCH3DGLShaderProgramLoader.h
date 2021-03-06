/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLShaderProgramLoader : TSCH3DResourceLoader

+ (id)loader;

- (id)activateShader:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (void)compileShaderSource:(struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x_1_1_1; char *x_1_1_2; } x1; })arg1 forHandle:(id)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)postbindHandle:(id)arg1 config:(void*)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;

@end
