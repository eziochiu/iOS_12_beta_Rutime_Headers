/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompiler : NSObject {
    struct MTLCompilerConnectionManager { int (**x1)(); } * _compilerConnectionManager;
    unsigned long long  _compilerFlags;
    unsigned int  _compilerId;
    NSObject<OS_dispatch_queue> * _compilerQueue;
    _MTLDevice * _device;
    NSString * _pluginPath;
    struct MTLCompilerCache { int (**x1)(); id x2; int x3; } * _shaderCache;
}

@property (readonly) struct MTLCompilerConnectionManager { int (**x1)(); }*compilerConnectionManager;
@property (readonly) unsigned long long compilerFlags;
@property (readonly) unsigned int compilerId;
@property (readonly) NSObject<OS_dispatch_queue> *compilerQueue;
@property (readonly, copy) NSString *pluginPath;

- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(bool)arg5 options:(unsigned int)arg6 sync:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)compileFunctionInternal:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(bool)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned int)arg7 sync:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)compileRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (struct MTLCompilerConnectionManager { int (**x1)(); }*)compilerConnectionManager;
- (unsigned long long)compilerFlags;
- (unsigned int)compilerId;
- (id)compilerQueue;
- (void)dealloc;
- (void*)getShaderCacheKeys;
- (id)initWithTargetData:(id)arg1 cacheUUID:(struct { unsigned char x1[32]; }*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)unloadShaderCaches;

@end
