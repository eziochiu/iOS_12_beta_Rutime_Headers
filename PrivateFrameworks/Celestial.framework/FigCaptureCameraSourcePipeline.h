/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureCameraSourcePipeline : FigCapturePipeline {
    BWStreamingFilterNode * _cameraFilterNode;
    BWFigVideoCaptureDevice * _captureDevice;
    BWDepthConverterNode * _depthConverterNode;
    BWNodeOutput * _detectedFacesOutput;
    int  _devicePosition;
    int  _deviceType;
    BWMultiStreamCameraSourceNode * _infraredSourceNode;
    BWNodeOutput * _infraredStillImageOutput;
    BWMemoryPool * _memoryPool;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overscanRect;
    NSArray * _previewFilters;
    BWNodeOutput * _previewOutput;
    BWNodeOutput * _sourceFormatReferenceOutput;
    NSString * _sourceID;
    BWSourceNode<BWFigCameraSourceNode> * _sourceNode;
    NSMutableArray * _sourceNodes;
    BWNodeOutput * _stillImageOutput;
    bool  _stillImageOutputDerivesFromVideoCaptureOutput;
    BWSynchronizerNode * _synchronizerNode;
    BWMultiStreamCameraSourceNode * _telephotoSourceNode;
    BWNodeOutput * _telephotoStillImageOutput;
    bool  _useCaptureOutputForPreview;
    bool  _useMultiStreamCameraNode;
    NSArray * _videoCaptureOutputs;
}

@property (nonatomic, readonly) BWFigVideoCaptureDevice *captureDevice;
@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic, readonly) BWNodeOutput *detectedFacesOutput;
@property (nonatomic) <BWDetectedFacesFilterDelegate> *faceFilteringDelegate;
@property (nonatomic, readonly) BWNodeOutput *infraredStillImageOutput;
@property (nonatomic) bool keepISPStreamingWhenStopping;
@property (nonatomic) struct OpaqueCMClock { }*masterClock;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overscanRect;
@property (nonatomic, readonly) BWNodeOutput *previewOutput;
@property (nonatomic, readonly) bool requiresMasterClock;
@property (nonatomic, readonly) BWNodeOutput *sourceFormatReferenceOutput;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) BWSourceNode<BWFigCameraSourceNode> *sourceNode;
@property (nonatomic, readonly) BWNodeOutput *stillImageOutput;
@property (nonatomic, readonly) bool stillImageOutputDerivesFromVideoCaptureOutput;
@property (nonatomic) int stillImageOutputRetainedBufferCountOverride;
@property (nonatomic, readonly) unsigned int stillImagePixelFormat;
@property (nonatomic, readonly) BWNodeOutput *telephotoStillImageOutput;
@property (nonatomic, readonly) NSArray *videoCaptureOutputs;

+ (void)initialize;

- (int)_buildCameraSourcePipeline:(id)arg1 graph:(id)arg2 renderDelegate:(id)arg3 errorDelegate:(id)arg4;
- (int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 ispIsStreaming:(bool)arg3 renderDelegate:(id)arg4 errorDelegate:(id)arg5;
- (int)_configure:(id)arg1 graph:(id)arg2 ispIsStreaming:(bool)arg3 renderDelegate:(id)arg4 errorDelegate:(id)arg5;
- (void)allocateSharedBufferPools;
- (id)captureDevice;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)detectedFacesOutput;
- (id)faceFilteringDelegate;
- (void)hackRetainedBufferCountsForDualStreamSources;
- (id)infraredStillImageOutput;
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 ispIsStreaming:(bool)arg4 renderDelegate:(id)arg5 errorDelegate:(id)arg6;
- (bool)keepISPStreamingWhenStopping;
- (void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2;
- (struct OpaqueCMClock { }*)masterClock;
- (bool)newConfigurationRequiresStreamRestart:(id)arg1 stillImageConnectionConfiguration:(id)arg2 videoCaptureConnectionConfigurations:(id)arg3 zeroShutterLagEnabled:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overscanRect;
- (int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(bool)arg3;
- (id)previewOutput;
- (int)reconfigure:(id)arg1;
- (bool)requiresMasterClock;
- (void)setFaceFilteringDelegate:(id)arg1;
- (void)setKeepISPStreamingWhenStopping:(bool)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setStillImageOutputRetainedBufferCountOverride:(int)arg1;
- (id)sourceFormatReferenceOutput;
- (id)sourceID;
- (id)sourceNode;
- (id)stillImageOutput;
- (bool)stillImageOutputDerivesFromVideoCaptureOutput;
- (int)stillImageOutputRetainedBufferCountOverride;
- (unsigned int)stillImagePixelFormat;
- (id)telephotoStillImageOutput;
- (id)videoCaptureOutputs;

@end
