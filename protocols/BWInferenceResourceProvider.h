/* made by EzioChiu.
 */

@protocol BWInferenceResourceProvider <NSObject>

@required

- (BWEspressoInferenceContext *)espressoContextForExecutionTarget:(int)arg1 options:(unsigned long long)arg2;
- (struct OpaqueFigCaptureISPProcessingSession { }*)ispProcessingSessionForExecutionTarget:(int)arg1;
- (BWVisionInferenceContext *)visionContextForExecutionTarget:(int)arg1;

@end
