/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {
    CIContext * _defaultCIContext;
    NSObject<OS_dispatch_queue> * _defaultCIContextThreadSafety;
    NSObject<OS_dispatch_group> * _filteringRequestsInFlight;
    bool  _shouldCancelAllRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property bool shouldCancelAllRequests;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;

+ (void)initialize;

- (void)_willDeallocOrFinalize;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)dealloc;
- (id)defaultCIContext;
- (id)filteringRequestsInFlight;
- (void)finalize;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setShouldCancelAllRequests:(bool)arg1;
- (bool)shouldCancelAllRequests;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsWideColorSourceFrames;

@end
