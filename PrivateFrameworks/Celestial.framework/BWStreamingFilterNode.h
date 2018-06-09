/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamingFilterNode : BWNode <BWDetectedFacesFilterDelegate, BWRendererResourceProvider> {
    bool  _attachesInputPixelBufferAfterRendering;
    BWFigVideoCaptureDevice * _captureDevice;
    BWColorLookupCache * _colorLookupCache;
    BWRenderListAnimator * _currentAnimator;
    BWRenderList * _currentRenderList;
    bool  _depthDataDeliveryEnabled;
    bool  _metadataProcessingEnabled;
    BWRenderList * _mostRecentRenderListRequested;
    BWRenderListAnimator * _nextAnimator;
    BWRenderList * _nextRenderList;
    bool  _preparedToBecomeLive;
    NSObject<OS_dispatch_queue> * _processorPreparationQueue;
    bool  _receivedInitialFixedPointDisparityBuffer;
    bool  _receivedOccludedFixedPointDisparityBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renderListLock;
    BWRenderListProcessor * _renderListProcessor;
    bool  _stageRenderingEnabled;
    BWStreamingCVAFilterRenderer * _streamingCVAFilterRenderer;
    bool  _studioAndContourRenderingEnabled;
}

@property (nonatomic) bool attachesInputPixelBufferAfterRendering;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthDataDeliveryEnabled, nonatomic) bool depthDataDeliveryEnabled;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMetadataProcessingEnabled, nonatomic) bool metadataProcessingEnabled;
@property (nonatomic) bool stageRenderingEnabled;
@property (nonatomic) bool studioAndContourRenderingEnabled;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)attachesInputPixelBufferAfterRendering;
- (void)changeToFilters:(id)arg1 animated:(bool)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithCaptureDevice:(id)arg1 usingDepth:(bool)arg2;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isMetadataProcessingEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingCVAFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachesInputPixelBufferAfterRendering:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setMetadataProcessingEnabled:(bool)arg1;
- (void)setStageRenderingEnabled:(bool)arg1;
- (void)setStudioAndContourRenderingEnabled:(bool)arg1;
- (bool)stageRenderingEnabled;
- (bool)studioAndContourRenderingEnabled;
- (id)videoInput;
- (id)videoOutput;

@end
