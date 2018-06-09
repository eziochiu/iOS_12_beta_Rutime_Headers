/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeOutput : NSObject {
    NSMutableDictionary * _attachedMediaConfigurations;
    NSMutableDictionary * _attachedMediaProperties;
    long long  _configurationID;
    <BWNodeOutputConsumer> * _consumer;
    bool  _consumerIsANodeConnection;
    bool  _discardsSampleData;
    bool  _dropsSampleBuffersWithUnexpectedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastValidPTS;
    long long  _liveConfigurationID;
    float  _maxSampleDataOutputRate;
    unsigned int  _mediaType;
    bool  _mediaTypeIsVideo;
    BWMemoryPool * _memoryPool;
    NSString * _name;
    BWNode * _node;
    unsigned int  _numberOfBuffersDropped;
    unsigned int  _numberOfBuffersEmitted;
    NSMutableArray * _poolPreallocationCompletionHandlers;
    bool  _poolPreallocationDone;
    struct OpaqueFigSimpleMutex { } * _poolPreallocationMutex;
    bool  _prefetchesPixelBufferPool;
    BWNodeOutputMediaConfiguration * _primaryMediaConfiguration;
    BWNodeOutputMediaProperties * _primaryMediaProperties;
    bool  _receivedEOD;
    BWNodeOutputMediaConfiguration * _unspecifiedAttachedMediaConfiguration;
}

@property (nonatomic) bool buffersOriginateUpstream;
@property (nonatomic) long long configurationID;
@property (nonatomic, readonly) BWNodeConnection *connection;
@property (nonatomic) <BWNodeOutputConsumer> *consumer;
@property (nonatomic) bool discardsSampleData;
@property (nonatomic) bool dropsSampleBuffersWithUnexpectedPTS;
@property (nonatomic, copy) BWFormat *format;
@property (nonatomic, copy) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (nonatomic, readonly) long long liveConfigurationID;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) float maxSampleDataOutputRate;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) bool mediaTypeIsVideo;
@property (nonatomic, retain) BWMemoryPool *memoryPool;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BWNode *node;
@property (nonatomic, readonly) unsigned int numberOfBuffersDropped;
@property (nonatomic, readonly) unsigned int numberOfBuffersEmitted;
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (nonatomic) int passthroughMode;
@property (nonatomic) bool prefetchesPixelBufferPool;
@property (nonatomic, readonly) BWPixelBufferPool *preparedPixelBufferPool;
@property (nonatomic, readonly) BWNodeOutputMediaConfiguration *primaryMediaConfiguration;
@property (nonatomic, readonly) BWNodeOutputMediaProperties *primaryMediaProperties;
@property (nonatomic) bool providesPixelBufferPool;
@property (nonatomic, readonly) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic, readonly) NSArray *specifiedAttachedMediaKeys;
@property (nonatomic, retain) BWNodeOutputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;

+ (void)initialize;

- (void)_clearAllMediaProperties;
- (void)_makeConfiguredFormatLiveForAttachedMediaKey:(id)arg1;
- (void)_markEndOfLiveOutputForAttachedMediaKey:(id)arg1;
- (id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg1;
- (int)_passthroughModeForAttachedMediaKey:(id)arg1;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (id)_poolName;
- (void)_prepareForConfiguredFormatToBecomeLiveForAttachedMediaKey:(id)arg1;
- (void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)_setPrimaryProperties:(id)arg1;
- (void)addPoolPreallocationCompletionHandler:(id /* block */)arg1;
- (id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg1 inputIndex:(unsigned long long)arg2;
- (bool)buffersOriginateUpstream;
- (long long)configurationID;
- (id)connection;
- (id)consumer;
- (void)dealloc;
- (id)description;
- (bool)discardsSampleData;
- (bool)dropsSampleBuffersWithUnexpectedPTS;
- (void)emitDroppedSample:(id)arg1;
- (void)emitIrisReferenceMovieRequestWithInfo:(id)arg1;
- (void)emitNodeError:(id)arg1;
- (void)emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)emitStillImagePrewarmMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3;
- (void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg1;
- (id)format;
- (id)formatRequirements;
- (int)indexOfInputWhichDrivesThisOutput;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2;
- (void)invalidate;
- (long long)liveConfigurationID;
- (id)liveFormat;
- (id)livePixelBufferPool;
- (void)makeConfiguredFormatLive;
- (void)markEndOfLiveOutput;
- (float)maxSampleDataOutputRate;
- (id)mediaConfigurationForAttachedMediaKey:(id)arg1;
- (id)mediaPropertiesForAttachedMediaKey:(id)arg1;
- (unsigned int)mediaType;
- (bool)mediaTypeIsVideo;
- (id)memoryPool;
- (id)name;
- (id)node;
- (unsigned int)numberOfBuffersDropped;
- (unsigned int)numberOfBuffersEmitted;
- (int)owningNodeRetainedBufferCount;
- (int)passthroughMode;
- (bool)prefetchesPixelBufferPool;
- (void)prepareForConfiguredFormatToBecomeLive;
- (id)preparedPixelBufferPool;
- (id)primaryMediaConfiguration;
- (id)primaryMediaProperties;
- (bool)providesPixelBufferPool;
- (id)resolvedAttachedMediaKeys;
- (int)retainedBufferCount;
- (void)setBuffersOriginateUpstream:(bool)arg1;
- (void)setConfigurationID:(long long)arg1;
- (void)setConsumer:(id)arg1;
- (void)setDiscardsSampleData:(bool)arg1;
- (void)setDropsSampleBuffersWithUnexpectedPTS:(bool)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormatRequirements:(id)arg1;
- (void)setIndexOfInputWhichDrivesThisOutput:(int)arg1;
- (void)setLiveFormat:(id)arg1;
- (void)setMaxSampleDataOutputRate:(float)arg1;
- (void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)setMemoryPool:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNodePreparedPixelBufferPool:(id)arg1;
- (void)setOwningNodeRetainedBufferCount:(int)arg1;
- (void)setPassthroughMode:(int)arg1;
- (void)setPrefetchesPixelBufferPool:(bool)arg1;
- (void)setPreparedSharedPixelBufferPool:(id)arg1;
- (void)setProvidesPixelBufferPool:(bool)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setUnspecifiedAttachedMediaConfiguration:(id)arg1;
- (id)specifiedAttachedMediaKeys;
- (id)unspecifiedAttachedMediaConfiguration;
- (id)videoFormat;

@end
