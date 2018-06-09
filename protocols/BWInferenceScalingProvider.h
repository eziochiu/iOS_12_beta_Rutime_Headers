/* made by EzioChiu.
 */

@protocol BWInferenceScalingProvider <NSObject>

@required

- (int)performScalingOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(BWInferenceStorage *)arg2;
- (int)prepareForScaling;
- (void)propagateScalingResultsToStorage:(BWInferenceStorage *)arg1;
- (int)type;

@end
