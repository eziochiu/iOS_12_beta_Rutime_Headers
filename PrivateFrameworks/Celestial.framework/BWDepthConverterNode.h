/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDepthConverterNode : BWNode {
    int  _baseRotationDegrees;
    float  _baseline;
    NSDictionary * _cameraInfoByPortType;
    bool  _conversionAfterFilteringRequired;
    int  _depthAccuracy;
    int  _depthBufferFinalExifOrientation;
    int  _depthBufferOriginalExifOrientation;
    bool  _depthFromInfrared;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _depthLensDistortionCorrectionBasePolynomial;
    struct { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _depthLensDistortionCorrectionDynamicPolynomial;
    float  _depthPixelSizeInMicrons;
    <DepthProcessor> * _depthProcessor;
    NSString * _depthProcessorClassName;
    struct __CVBuffer { } * _filteringInputBuffer;
    struct __CVBuffer { } * _filteringOutputBuffer;
    struct __CVBuffer { } * _filteringScaledYUVBuffer;
    struct __CVBuffer { } * _fixedPointRotatedIntermediateBuffer;
    struct __CVBuffer { } * _fixedPointScaledIntermediateBuffer;
    bool  _forceCPath;
    int  _horizontalSensorBinningFactor;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _identityExtrinsicMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _infraredProjectorExtrinsicMatrix;
    struct { 
        int width; 
        int height; 
    }  _inputDepthDimensions;
    BWVisionLandmarkDetector * _landmarkDetector;
    bool  _mirroringEnabled;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    unsigned int  _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    int  _rotationDegrees;
    struct FigPhotoScaleAndRotateSession { } * _scaler;
    NSDictionary * _sensorIDDictionary;
    bool  _stillFilteringEnabled;
    bool  _streamingFilteringEnabled;
    struct __CVBuffer { } * _streamingFilteringScaledDepthInputBuffer;
    struct __CVBuffer { } * _streamingFilteringScaledDepthOutputBuffer;
    int  _verticalSensorBinningFactor;
    struct work_interval { } * _workInterval;
    bool  _workIntervalHintsEnabled;
}

+ (void)initialize;

- (int)_computeConversionParametersFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 convertOptionsOut:(struct { unsigned int x1; float x2; float x3; unsigned int x4; bool x5; }*)arg2;
- (int)_convertDepthDisparityToFloat_C:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2 options:(struct { unsigned int x1; float x2; float x3; unsigned int x4; bool x5; }*)arg3;
- (int)_convertDepthDisparityToFloat_NEON:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2 options:(struct { unsigned int x1; float x2; float x3; unsigned int x4; bool x5; }*)arg3;
- (int)_convertU16toFloatForImage_NEON:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2 options:(struct { unsigned int x1; float x2; float x3; unsigned int x4; bool x5; }*)arg3;
- (id)_depthMetadataDictionaryFromDepthSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orientation:(unsigned int)arg2 stillFilteringRequested:(bool)arg3;
- (int)_loadAndConfigureDepthProcessorClass:(id)arg1;
- (int)_parseCameraInfo;
- (void)_updateOutputRequirements;
- (int)baseRotationDegrees;
- (int)convertToFloatAndRotate:(struct opaqueCMSampleBuffer { }*)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (int)filterBuffer:(struct __CVBuffer { }*)arg1 outputPixelBuffer:(struct __CVBuffer { }*)arg2 imageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)horizontalSensorBinningFactor;
- (id)init;
- (id)initWithCameraInfoByPortType:(id)arg1 sensorIDDictionary:(id)arg2 rgbPersonSegmentationEnabled:(bool)arg3;
- (bool)mirroringEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (struct { int x1; int x2; })outputDimensions;
- (unsigned int)outputFormat;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prewarmLandmarkDetectorIfNecessary;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotateAndScaleImagePixelBuffer:(struct __CVBuffer { }*)arg1 depthPixelBuffer:(struct __CVBuffer { }*)arg2 to:(struct __CVBuffer { }*)arg3 rotationAngle:(int)arg4 flip:(bool)arg5;
- (int)rotationDegrees;
- (void)setBaseRotationDegrees:(int)arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setStillFilteringEnabled:(bool)arg1;
- (void)setStreamingFilteringEnabled:(bool)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (bool)stillFilteringEnabled;
- (bool)streamingFilteringEnabled;
- (int)verticalSensorBinningFactor;

@end
