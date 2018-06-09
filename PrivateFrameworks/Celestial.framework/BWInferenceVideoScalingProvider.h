/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceScalingProvider> {
    bool  _applyUprightExifOrientation;
    bool  _applyValidBufferRect;
    NSDictionary * _colorSpaceProperties;
    bool  _computeAndApplyAspectRatioCrop;
    BWInferenceVideoRequirement * _inputRequirement;
    int  _lastUprightExifOrientation;
    struct __CVBuffer { } * _mostRecentOutputBuffer;
    float  _outputAspectRatio;
    NSArray * _outputRequirements;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    int  _rotationSessionConfiguredDegrees;
    bool  _rotationSessionConfiguredHorizontalFlip;
    bool  _rotationSessionConfiguredVerticalFlip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 applyingValidBufferRectIfPresent:(bool)arg3;
- (int)performScalingOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2;
- (int)prepareForScaling;
- (void)propagateScalingResultsToStorage:(id)arg1;
- (int)type;

@end
