/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVisionInferenceProvider : NSObject <BWInferenceProvider> {
    NSMutableArray * _cloneVideoRequirements;
    BWVisionInferenceContext * _context;
    int  _executionTarget;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSSet * _preventionReasons;
    BWInferenceVideoRequirement * _primaryInputVideoRequirement;
    NSArray * _requests;
    NSMutableDictionary * _requestsByRequirement;
    int  _type;
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
@property (nonatomic, retain) BWInferenceVideoRequirement *primaryInputVideoRequirement;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (id)bindInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 preparedByAttachedMediaKey:(id)arg3 withVideoFormatProvider:(id /* block */)arg4;
- (id)bindInputForRequest:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindOutputForRequest:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (int)executionTarget;
- (id)initWithType:(int)arg1 requests:(id)arg2 executionTarget:(int)arg3 preventionReasons:(id)arg4 resourceProvider:(id)arg5;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)performInferenceOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2;
- (int)prepareForInference;
- (id)preventionReasons;
- (int)prewarm;
- (id)primaryInputVideoRequirement;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)setPrimaryInputVideoRequirement:(id)arg1;
- (int)type;

@end
