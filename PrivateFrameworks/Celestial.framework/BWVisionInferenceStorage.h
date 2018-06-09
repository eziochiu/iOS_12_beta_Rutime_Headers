/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVisionInferenceStorage : BWInferenceStorage {
    NSDictionary * _requestsByRequirement;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithRequestsByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)requestForRequirement:(id)arg1;

@end
