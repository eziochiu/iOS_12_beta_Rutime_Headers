/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageBasedTechnique : ARTechnique {
    NSMutableArray * _pendingFrameReferences;
    NSMutableArray * _pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> * _pendingRequestsSemaphore;
    NSMutableArray * _pendingResultData;
}

- (void).cxx_destruct;
- (bool)context:(id)arg1 matchesFrameReference:(id)arg2;
- (id)init;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (void)pushResultData:(id)arg1 forFrame:(struct __CVBuffer { }*)arg2;
- (void)pushResultData:(id)arg1 forFrameReference:(id)arg2;
- (void)pushResultData:(id)arg1 forTimestamp:(double)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
