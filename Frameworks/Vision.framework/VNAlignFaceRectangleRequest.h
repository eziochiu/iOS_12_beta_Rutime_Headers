/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNAlignFaceRectangleRequest : VNRequest {
    NSArray * _inputFaceObservations;
}

@property (nonatomic, readonly, copy) NSArray *inputFaceObservations;

- (void).cxx_destruct;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputFaceObservations;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
