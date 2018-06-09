/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal * _trackOutputInternal;
}

@property (nonatomic) bool appliesPreferredTrackTransform;
@property (getter=_isAttachedToAdaptor, nonatomic, readonly) bool attachedToAdaptor;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) AVAssetTrack *track;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (id)_asset;
- (id)_attachedAdaptor;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferForAdaptor;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (id)_figAssetReaderExtractionOptions;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (bool)_isAttachedToAdaptor;
- (void)_setAttachedAdaptor:(id)arg1;
- (bool)_trimsSampleDurations;
- (bool)appliesPreferredTrackTransform;
- (id)audioTimePitchAlgorithm;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)mediaType;
- (id)outputSettings;
- (void)setAppliesPreferredTrackTransform:(bool)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)track;

@end
