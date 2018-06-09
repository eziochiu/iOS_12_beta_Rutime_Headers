/* made by EzioChiu.
 */

@protocol BWInferenceProvider <NSObject>

@required

- (NSArray *)cloneVideoRequirements;
- (int)executionTarget;
- (NSArray *)inputMetadataRequirements;
- (NSArray *)inputVideoRequirements;
- (BWInferenceStorage *)newStorage;
- (NSArray *)outputMetadataRequirements;
- (NSArray *)outputVideoRequirements;
- (int)performInferenceOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(BWInferenceStorage *)arg2;
- (int)prepareForInference;
- (NSSet *)preventionReasons;
- (int)prewarm;
- (void)propagateInferenceResultsToInferenceDictionary:(NSMutableDictionary *)arg1 usingStorage:(BWInferenceStorage *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)type;

@end
