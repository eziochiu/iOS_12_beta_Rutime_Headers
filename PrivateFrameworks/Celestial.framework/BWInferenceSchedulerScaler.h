/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceSchedulerGraphNode> {
    BWInferenceVideoRequirement * _inputRequirement;
    NSArray * _outputRequirements;
    <BWInferenceScalingProvider> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWInferenceSchedulerInference *inference;
@property (nonatomic, readonly) BWInferenceVideoRequirement *inputRequirement;
@property (nonatomic, readonly) NSArray *outputRequirements;
@property (nonatomic, readonly) NSArray *requirementsNeedingPixelBufferPools;
@property (readonly) Class superclass;

- (id)_newProviderForWithOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)inference;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 options:(unsigned long long)arg3;
- (id)inputRequirement;
- (id)outputRequirements;
- (int)performOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)prepare;
- (id)requirementsNeedingPixelBufferPools;

@end
