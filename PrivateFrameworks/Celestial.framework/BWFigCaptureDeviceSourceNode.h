/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    float  _aeMaxGain;
    NSObject<OS_dispatch_queue> * _bufferServicingQueue;
    BWFigVideoCaptureDevice * _captureDevice;
    BWFigVideoCaptureStream * _captureStream;
    bool  _chromaNoiseReductionEnabled;
    bool  _deferMetadataDictionaryCreation;
    BWNodeOutput * _detectedFacesOutput;
    bool  _detectedFacesOutputEnabled;
    NSMutableDictionary * _dutyCycleMetadataCache;
    struct { 
        int width; 
        int height; 
    }  _ispOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _lastISPCropDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationFrameworkOverride;
    float  _maxFrameRate;
    struct { 
        int width; 
        int height; 
    }  _maxISPCropDimensions;
    float  _maxISPZoomFactor;
    float  _minFrameRate;
    struct { 
        int width; 
        int height; 
    }  _minOutputDimensions;
    int  _minOutputDimensionsSensorFormatIndex;
    int  _motionAttachmentsSource;
    int  _offlineConfigurationSeed;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanPercentage;
    bool  _requiresOverscan;
    int  _resolvedOfflineConfigurationSeed;
    int  _resolvedSensorFormatIndex;
    struct { 
        int width; 
        int height; 
    }  _sensorDimensions;
    int  _sensorFormatIndex;
    struct { 
        int width; 
        int height; 
    }  _sensorOverscanDimensions;
    unsigned int  _sensorPixelFormat;
    BWNodeOutput * _stillImageOutput;
    struct opaqueCMBufferQueue { } * _stillImageQueue;
    struct opaqueCMBufferQueueTriggerToken { } * _stillImageQueueTriggerToken;
    NSObject<OS_dispatch_queue> * _stillImageServicingQueue;
    struct OpaqueFigCaptureStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamEventDispatchQueue;
    NSObject<OS_dispatch_group> * _streamEventNotificationGroup;
    bool  _streamFormatChangeInFlight;
    struct { 
        int width; 
        int height; 
    }  _streamOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _streamOutputDimensionsAfterFormatChange;
    struct opaqueCMBufferQueue { } * _streamQueue;
    struct opaqueCMBufferQueueTriggerToken { } * _streamQueueTriggerToken;
    int  _streamSensorFormatIndex;
    unsigned int  _streamSensorPixelFormat;
    unsigned int  _streamSensorPixelFormatAfterFormatChange;
    bool  _temporalNoiseReductionEnabled;
    BWNodeOutput * _videoCaptureOutput;
    NSDictionary * _videoCaptureOutputColorInfoOverride;
    bool  _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedFacesOutput;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (nonatomic, copy) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) bool videoCaptureOutputPixelBufferAttachmentModificationAllowed;

+ (int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(struct { int x1; int x2; })arg2 sensorPixelFormat:(unsigned int)arg3 sensorFormatIndex:(int)arg4;
+ (id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1;
+ (void)initialize;

- (int)_addCaptureStreamMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_bringStreamFormatIndexUpToDate;
- (void)_bringStreamPixelFormatUpToDate;
- (int)_bringStreamUpToDate;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(bool*)arg1 sensorPixelFormatChanged:(bool*)arg2 outputDimensionsChanged:(bool*)arg3;
- (id)_initWithCaptureDevice:(id)arg1;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (int)_lockFramerateToMaxSupportedByCurrentSensorFormat;
- (struct { int x1; int x2; })_maxOutputDimensionsForResolvedSensorFormatIndex;
- (int)_prepareStillImageQueue;
- (bool)_prepareStreamQueue;
- (void)_registerForStreamNotifications;
- (void)_resolveOfflineConfiguration;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 updateISPZoom:(bool)arg2;
- (int)_startStreaming;
- (int)_stopStreaming;
- (void)_unprepareStillImageQueue;
- (void)_unprepareStreamQueue;
- (void)_unregisterFromStreamNotifications;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (void)_updateMetadataConfigurations;
- (void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
- (int)_updateStreamOutputDimensions;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(long long)arg1;
- (float)aeMaxGain;
- (id)captureDevice;
- (id)captureStream;
- (bool)chromaNoiseReductionEnabled;
- (struct OpaqueCMClock { }*)clock;
- (id)colorInfoForOutput:(id)arg1;
- (void)dealloc;
- (id)detectedFacesOutput;
- (bool)detectedFacesOutputEnabled;
- (bool)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationClientOverride;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationFrameworkOverride;
- (float)maxFrameRate;
- (float)minFrameRate;
- (struct { int x1; int x2; })minOutputDimensions;
- (int)motionAttachmentsSource;
- (id)nodeSubType;
- (struct { int x1; int x2; })outputDimensions;
- (struct CGSize { double x1; double x2; })overscanPercentage;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)requiresOverscan;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorFormatIndex;
- (struct { int x1; int x2; })sensorOverscanDimensions;
- (unsigned int)sensorPixelFormat;
- (void)setAeMaxGain:(float)arg1;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setDetectedFacesOutputEnabled:(bool)arg1;
- (void)setMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxExposureDurationFrameworkOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequiresOverscan:(bool)arg1;
- (void)setSensorDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorFormatIndex:(int)arg1;
- (void)setSensorPixelFormat:(unsigned int)arg1;
- (void)setTemporalNoiseReductionEnabled:(bool)arg1;
- (void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
- (void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (bool)start:(id*)arg1;
- (id)stillImageOutput;
- (bool)stop:(id*)arg1;
- (bool)temporalNoiseReductionEnabled;
- (void)updateOutputRequirements;
- (id)videoCaptureOutput;
- (id)videoCaptureOutputColorInfoOverride;
- (bool)videoCaptureOutputPixelBufferAttachmentModificationAllowed;

@end
