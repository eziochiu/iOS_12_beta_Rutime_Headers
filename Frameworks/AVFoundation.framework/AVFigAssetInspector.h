/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetInspector : AVAssetInspector {
    long long  _checkIsStreamingOnce;
    struct OpaqueFigAsset { } * _figAsset;
    struct OpaqueFigFormatReader { } * _formatReader;
    long long  _formatReaderOnce;
    bool  _isStreaming;
    bool  didCheckForSaveRestriction;
    bool  hasSaveRestriction;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (getter=_figAsset, nonatomic, readonly) struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (getter=_formatReader, nonatomic, readonly) struct OpaqueFigFormatReader { }*formatReader;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) NSURL *originalNetworkContentURL;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (getter=_isStreaming, nonatomic, readonly) bool streaming;

- (id)SHA1Digest;
- (id)URL;
- (id)_assetAnalysisMessages;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (bool)_hasQTSaveRestriction;
- (id)_instanceIdentifier;
- (bool)_isStreaming;
- (id)_mediaSelectionGroupDictionaries;
- (id)_nameForProxy;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (bool)canContainFragments;
- (id)commonMetadata;
- (bool)containsFragments;
- (id)creationDate;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (void)finalize;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (id)lyrics;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (id)originalNetworkContentURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (id)resolvedURL;
- (bool)supportsAnalysisReporting;
- (long long)trackCount;
- (id)trackReferences;

@end
