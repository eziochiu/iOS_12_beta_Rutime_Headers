/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMattingInferenceProvider : NSObject <BWInferenceProvider> {
    BWInferenceVideoRequirement * _depthInputVideoRequirement;
    NSArray * _inputVideoRequirements;
    FigMatting * _mattingProcessor;
    NSArray * _outputVideoRequirements;
    BWInferenceVideoRequirement * _primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationConfidenceInputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationInputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationOutputVideoRequirement;
    NSDictionary * _tuningParameters;
}

@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int executionTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (int)_configureMattingProcessor;
- (int)_loadMattingProcessor;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (int)executionTarget;
- (id)initWithConfiguration:(id)arg1;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)performInferenceOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2;
- (int)prepareForInference;
- (id)preventionReasons;
- (int)prewarm;
- (id)processorOptionsDictionary;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)type;

@end
