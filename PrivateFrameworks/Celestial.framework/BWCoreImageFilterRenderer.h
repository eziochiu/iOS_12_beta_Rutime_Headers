/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    CIContext * _renderingQueueContext;
    bool  _usingDepth;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CIContext *renderingQueueContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) bool usingDepth;

+ (void)initialize;
+ (void)prewarm;

- (void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 prewarming:(bool)arg6 completionHandler:(id /* block */)arg7;
- (id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (id)coreImageArrayRepresentationForRegion:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)init;
- (id)initForRenderingWithDepth:(bool)arg1;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (id)renderingQueueContext;
- (void)setRenderingQueueContext:(id)arg1;
- (bool)supportsAnimation;
- (short)type;
- (bool)usingDepth;

@end
