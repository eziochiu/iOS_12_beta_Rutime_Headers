/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFactory : NSObject {
    <NUStorageFactory> * _bufferFactory;
    NUPurgeableStoragePool * _bufferStoragePool;
    NUCacheNodeRegistry * _cacheNodeRegistry;
    NSString * _defaultNameSpace;
    NUPlatform * _platform;
    NURenderNodeCache * _renderNodeCache;
    NURenderPipelineRegistry * _renderPipelineRegistry;
    NUScheduler * _scheduler;
    NUSchemaRegistry * _schemaRegistry;
    NUJSContextPool * _sharedJavaScriptContextPool;
    NUGLContext * _sharedOpenGLContext;
    NUGLContextPool * _sharedOpenGLContextPool;
    <NUStorageFactory> * _surfaceFactory;
    NUPurgeableStoragePool * _surfaceStoragePool;
}

@property (nonatomic, retain) <NUStorageFactory> *bufferFactory;
@property (nonatomic, retain) NUPurgeableStoragePool *bufferStoragePool;
@property (nonatomic, retain) NUCacheNodeRegistry *cacheNodeRegistry;
@property (nonatomic, copy) NSString *defaultNameSpace;
@property (nonatomic, retain) NUPlatform *platform;
@property (nonatomic, retain) NURenderNodeCache *renderNodeCache;
@property (nonatomic, retain) NURenderPipelineRegistry *renderPipelineRegistry;
@property (nonatomic, retain) NUScheduler *scheduler;
@property (nonatomic, retain) NUSchemaRegistry *schemaRegistry;
@property (nonatomic, retain) NUJSContextPool *sharedJavaScriptContextPool;
@property (nonatomic, retain) NUGLContext *sharedOpenGLContext;
@property (nonatomic, retain) NUGLContextPool *sharedOpenGLContextPool;
@property (nonatomic, retain) <NUStorageFactory> *surfaceFactory;
@property (nonatomic, retain) NUPurgeableStoragePool *surfaceStoragePool;

+ (void)reset;
+ (void)setSharedFactory:(id)arg1;
+ (id)sharedFactory;

- (void).cxx_destruct;
- (id)bufferFactory;
- (id)bufferStoragePool;
- (id)cacheNodeRegistry;
- (id)defaultNameSpace;
- (id)platform;
- (id)renderNodeCache;
- (id)renderPipelineRegistry;
- (id)scheduler;
- (id)schemaRegistry;
- (void)setBufferFactory:(id)arg1;
- (void)setBufferStoragePool:(id)arg1;
- (void)setCacheNodeRegistry:(id)arg1;
- (void)setDefaultNameSpace:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setRenderNodeCache:(id)arg1;
- (void)setRenderPipelineRegistry:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSchemaRegistry:(id)arg1;
- (void)setSharedJavaScriptContextPool:(id)arg1;
- (void)setSharedOpenGLContext:(id)arg1;
- (void)setSharedOpenGLContextPool:(id)arg1;
- (void)setSurfaceFactory:(id)arg1;
- (void)setSurfaceStoragePool:(id)arg1;
- (id)sharedJavaScriptContextPool;
- (id)sharedOpenGLContext;
- (id)sharedOpenGLContextPool;
- (void)shutdown;
- (void)start;
- (id)surfaceFactory;
- (id)surfaceStoragePool;

@end
