/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } * _formatReader;
    unsigned int  _mediaType;
    int  _trackID;
    struct OpaqueFigTrackReader { } * _trackReader;
    AVWeakReference * _weakReferenceToAsset;
}

- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_trackReferences;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (long long)alternateGroupID;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (int)decodabilityValidationResult;
- (long long)defaultAlternateGroupID;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (unsigned long long)hash;
- (bool)isDecodable;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (bool)isPlayable;
- (bool)isSelfContained;
- (id)languageCode;
- (long long)layer;
- (id)loudnessInfo;
- (id)mediaCharacteristics;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (bool)requiresFrameReordering;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end
