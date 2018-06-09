/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVAssetWriterInputPixelBufferAdaptorInternal * _internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;

- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)assetWriterInput;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)sourcePixelBufferAttributes;

@end
