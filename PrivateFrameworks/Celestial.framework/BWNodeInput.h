/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeInput : NSObject {
    NSMutableDictionary * _attachedMediaConfigurations;
    NSMutableDictionary * _attachedMediaProperties;
    long long  _configurationID;
    BWNodeConnection * _connection;
    bool  _enabled;
    unsigned long long  _index;
    long long  _liveConfigurationID;
    unsigned int  _mediaType;
    bool  _mediaTypeIsVideo;
    NSString * _name;
    BWNode * _node;
    unsigned int  _numberOfBuffersDropped;
    unsigned int  _numberOfBuffersReceived;
    BWNodeInputMediaConfiguration * _primaryMediaConfiguration;
    BWNodeInputMediaProperties * _primaryMediaProperties;
    BWNodeInputMediaConfiguration * _unspecifiedAttachedMediaConfiguration;
}

@property (nonatomic) long long configurationID;
@property (nonatomic) BWNodeConnection *connection;
@property (nonatomic) int delayedBufferCount;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) BWFormat *format;
@property (nonatomic, retain) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long liveConfigurationID;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) bool mediaTypeIsVideo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BWNode *node;
@property (nonatomic, readonly) unsigned int numberOfBuffersDropped;
@property (nonatomic, readonly) unsigned int numberOfBuffersReceived;
@property (nonatomic) bool passesBuffersDownstream;
@property (nonatomic) int passthroughMode;
@property (nonatomic, readonly) BWNodeInputMediaConfiguration *primaryMediaConfiguration;
@property (nonatomic, readonly) BWNodeInputMediaProperties *primaryMediaProperties;
@property (nonatomic, readonly) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic, readonly) NSArray *specifiedAttachedMediaKeys;
@property (nonatomic, retain) BWNodeInputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;

+ (void)initialize;

- (void)_clearAllMediaProperties;
- (void)_handleConfigurationLiveMessage:(id)arg1;
- (int)_passthroughModeForAttachedMediaKey:(id)arg1;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)_setPrimaryProperties:(id)arg1;
- (long long)configurationID;
- (id)connection;
- (void)dealloc;
- (int)delayedBufferCount;
- (id)description;
- (id)format;
- (id)formatRequirements;
- (void)handleMessage:(id)arg1;
- (int)indefinitelyHeldBufferCount;
- (unsigned long long)index;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2 index:(unsigned long long)arg3;
- (void)invalidate;
- (bool)isEnabled;
- (long long)liveConfigurationID;
- (id)liveFormat;
- (id)mediaConfigurationForAttachedMediaKey:(id)arg1;
- (id)mediaPropertiesForAttachedMediaKey:(id)arg1;
- (unsigned int)mediaType;
- (bool)mediaTypeIsVideo;
- (id)name;
- (id)node;
- (unsigned int)numberOfBuffersDropped;
- (unsigned int)numberOfBuffersReceived;
- (bool)passesBuffersDownstream;
- (int)passthroughMode;
- (id)primaryMediaConfiguration;
- (id)primaryMediaProperties;
- (id)resolvedAttachedMediaKeys;
- (int)retainedBufferCount;
- (void)setConfigurationID:(long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelayedBufferCount:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormatRequirements:(id)arg1;
- (void)setIndefinitelyHeldBufferCount:(int)arg1;
- (void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPassesBuffersDownstream:(bool)arg1;
- (void)setPassthroughMode:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setUnspecifiedAttachedMediaConfiguration:(id)arg1;
- (id)specifiedAttachedMediaKeys;
- (id)unspecifiedAttachedMediaConfiguration;
- (id)videoFormat;

@end
