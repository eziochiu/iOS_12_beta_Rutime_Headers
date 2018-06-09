/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    long long  _copyFigFormatReaderOnce;
    long long  _copyFigTrackReaderOnce;
    struct OpaqueFigAsset { } * _figAsset;
    struct OpaqueFigAssetTrack { } * _figAssetTrack;
    struct OpaqueFigFormatReader { } * _figFormatReader;
    struct OpaqueFigTrackReader { } * _figTrackReader;
    NSMutableArray * _loadingBatches;
    struct OpaqueFigSimpleMutex { } * _loadingMutex;
    unsigned int  _mediaType;
    AVWeakReference * _weakReferenceToAsset;
}

- (void)_addFigNotifications;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigFormatReader { }*)_figFormatReader;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id*)arg2;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (void)_removeFigNotifications;
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
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (bool)isDecodable;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (bool)isPlayable;
- (bool)isSelfContained;
- (id)languageCode;
- (long long)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loudnessInfo;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
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
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end
