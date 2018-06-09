/* made by EzioChiu.
 */

@protocol BWInferenceSchedulerGraphNode <NSObject, NSCopying>

@required

- (BWInferenceSchedulerInference *)inference;
- (int)performOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(BWInferenceStorage *)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)prepare;
- (NSArray *)requirementsNeedingPixelBufferPools;

@end
