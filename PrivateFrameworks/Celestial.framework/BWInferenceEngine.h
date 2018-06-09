/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {
    BWFigVideoCaptureDevice * _captureDevice;
    unsigned long long  _connection;
    BWEspressoInferenceContext * _convContext;
    BWEspressoInferenceContext * _cpuContext;
    BWInferenceDependencyProvider * _dependencyProvider;
    BWEspressoInferenceAdapter * _espressoAdapter;
    BWEspressoInferenceContext * _gpuContext;
    NSMutableArray * _inferenceRequirements;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
    NSMutableDictionary * _lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary * _lazyOutputVideoRequirementsByAttachedMediaKey;
    unsigned int  _priority;
    bool  _requiresDeviceOrientationMetadata;
    NSMutableDictionary * _scalingRequirementByVideoFormatByAttachedMediaKey;
    BWInferenceScheduler * _scheduler;
    NSMutableSet * _unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
    NSMutableArray * _videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableArray * _videoRequirementsPossiblyReceivingAttachedMedia;
    BWVisionInferenceAdapter * _visionAdapter;
    BWVisionInferenceContext * _visionContext;
}

@property (getter=isConfiguredForInference, nonatomic, readonly) bool configuredForInference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (nonatomic, readonly) bool requiresDeviceOrientationMetadata;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)isConvolutionEngineSupported;
+ (bool)isStillImageConfigurationSupported;

- (void)_addInferenceRequirementForProvider:(id)arg1 configuration:(id)arg2;
- (void)_invalidateProcessingSessionIfNecessary;
- (void)_prepareDependenciesByRequirementIfNecessary;
- (int)_prepareProcessingSessionIfNecessary;
- (void)_prepareProvidedVideoRequirementsIfNecessary;
- (int)addInferenceOfType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3;
- (void)dealloc;
- (id)espressoContextForExecutionTarget:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3;
- (bool)isConfiguredForInference;
- (struct OpaqueFigCaptureISPProcessingSession { }*)ispProcessingSessionForExecutionTarget:(int)arg1;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)prepareForInferenceWithFormatProvider:(id)arg1;
- (int)prepareForInferenceWithFormatProvider:(id)arg1 pixelBufferPoolProvider:(id)arg2;
- (int)prepareForInputVideoFormat:(id)arg1 attachedMediaKey:(id)arg2;
- (int)prewarmInferences;
- (id)providedVideoRequirementsByAttachedMediaKey;
- (bool)requiresDeviceOrientationMetadata;
- (id)visionContextForExecutionTarget:(int)arg1;

@end
