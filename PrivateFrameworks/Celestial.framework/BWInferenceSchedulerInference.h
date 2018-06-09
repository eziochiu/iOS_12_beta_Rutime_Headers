/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerInference : NSObject <BWInferenceSchedulerGraphNode, BWInferenceSchedulerGraphNodeForwarding, BWInferenceSchedulerGraphNodePreventable> {
    bool  _alwaysPropagateResults;
    unsigned long long  _connectionIdentifier;
    unsigned long long  _identifier;
    float  _maximumFramesPerSecond;
    double  _previousExecutionTimeInSeconds;
    unsigned int  _priority;
    <BWInferenceProvider> * _provider;
    BWInferenceStorage * _storage;
}

@property (nonatomic, readonly) bool alwaysPropagateResults;
@property (nonatomic, readonly) unsigned long long connectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) BWInferenceSchedulerInference *inference;
@property (nonatomic, readonly) float maximumFramesPerSecond;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } previousExecutionTime;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) <BWInferenceProvider> *provider;
@property (nonatomic, readonly) NSArray *requirementsNeedingPixelBufferPools;
@property (nonatomic, readonly) BWInferenceStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (bool)alwaysPropagateResults;
- (unsigned long long)connectionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)forwardInputPixelBuffersFromGlobalStorage:(id)arg1 toInferenceStorage:(id)arg2;
- (unsigned long long)identifier;
- (id)inference;
- (id)initWithInferenceRequirement:(id)arg1 forConnection:(unsigned long long)arg2;
- (float)maximumFramesPerSecond;
- (int)performOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)prepare;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previousExecutionTime;
- (unsigned int)priority;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)provider;
- (id)requirementsNeedingPixelBufferPools;
- (id)storage;
- (int)type;

@end
