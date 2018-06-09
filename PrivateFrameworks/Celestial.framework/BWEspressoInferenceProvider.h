/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider> {
    NSMutableDictionary * _bindingNamesByRequirement;
    NSMutableArray * _cloneVideoRequirements;
    BWEspressoInferenceContext * _context;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    int  _executionTarget;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
    NSURL * _networkURL;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSMutableArray * _pixelBuffersLockedDuringExecution;
    NSSet * _preventionReasons;
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
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (int)_espressoStorageTypeForExecutionTarget:(int)arg1;
- (id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)description;
- (int)executionTarget;
- (id)initWithType:(int)arg1 networkURL:(id)arg2 context:(id)arg3 executionTarget:(int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)performInferenceOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2;
- (int)prepareForInference;
- (id)preventionReasons;
- (int)prewarm;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)type;

@end
