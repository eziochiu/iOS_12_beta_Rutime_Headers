/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMBlockBuffer {} * _bbufCache;
    struct opaqueCMFormatDescription { } * _boxedMetadataFormatDescription;
    struct OpaqueCMClock { } * _clock;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
    int  _exifOrientation;
    unsigned int  _localIDOfOrientationMetadata;
    struct OpaqueCMClock { } * _masterClock;
    bool  _recordVideoOrientationAndMirroringChanges;
    bool  _recording;
    int  _sourcePosition;
    bool  _videoMirrored;
    int  _videoOrientation;
}

+ (void)initialize;

- (void)_determineExifOrientation;
- (void)_emitBufferForNewStateIfRecording;
- (void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_releaseCachedBBufs;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSourcePosition:(int)arg1;
- (int)sourcePosition;
- (void)updateVideoMirrored:(bool)arg1;
- (void)updateVideoOrientation:(int)arg1;

@end
