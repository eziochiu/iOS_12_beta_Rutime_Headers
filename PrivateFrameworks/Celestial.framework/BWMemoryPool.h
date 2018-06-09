/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMemoryPool : NSObject {
    struct __IOSurface { } * _defaultCacheBuffer;
    unsigned long long  _defaultCacheBufferSize;
    NSObject<OS_dispatch_queue> * _queue;
    struct __IOSurface { } * _writeCombineCacheBuffer;
    unsigned long long  _writeCombineCacheBufferSize;
}

+ (void)initialize;

- (void)_discardMemory;
- (void)_ensureMemoryPool;
- (void)addMemoryPoolToPixelBufferAttributes:(id)arg1;
- (int)addMemoryPoolToPropertiesForCaptureDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
- (int)addMemoryPoolToPropertiesForCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)dealloc;
- (void)discardMemory;
- (void)ensureMemoryAsync;
- (id)initWithDefaultCacheMemoryPoolSize:(long long)arg1 writeCombineCacheMemoryPoolSize:(long long)arg2;
- (int)removeMemoryPoolFromPropertiesForCaptureDevice:(struct OpaqueFigCaptureDevice { }*)arg1;

@end
