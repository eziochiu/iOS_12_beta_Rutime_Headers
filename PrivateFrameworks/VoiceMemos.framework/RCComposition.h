/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCComposition : NSObject <NSCopying, NSMutableCopying, RCDictionaryPListRepresentationCoding> {
    double  _cachedComposedAVURLDuration;
    bool  _cachedComposedAVURLDurationIsValid;
    NSURL * _composedAVURL;
    NSArray * _composedFragments;
    NSURL * _composedWaveformURL;
    NSDate * _creationDate;
    NSArray * _decomposedFragments;
    bool  _readonly;
    NSString * _savedRecordingUUID;
}

@property (nonatomic) double cachedComposedAVURLDuration;
@property (nonatomic) bool cachedComposedAVURLDurationIsValid;
@property (nonatomic, readonly) NSURL *composedAVURL;
@property (nonatomic, readonly) double composedDuration;
@property (nonatomic, readonly) NSArray *composedFragments;
@property (nonatomic, readonly) NSURL *composedWaveformURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *decomposedFragments;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic) bool readonly;
@property (nonatomic, retain) NSString *savedRecordingUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingUUID:(id)arg3 creationDate:(id)arg4 createIfNeeded:(bool)arg5;
+ (id)_compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (bool)_markCompositionAVURLsBeingModified:(id)arg1;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)compositionLoadedForSavedRecording:(id)arg1;
+ (id)compositionLoadedForSavedRecordingUUID:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)compositionWithComposedAVURL:(id)arg1;
+ (void)deleteFromFilesystem:(id)arg1;

- (void).cxx_destruct;
- (id)_calculateComposedFragments;
- (double)_composedDuration;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(bool)arg1;
- (double)cachedComposedAVURLDuration;
- (bool)cachedComposedAVURLDurationIsValid;
- (id)composedAVURL;
- (double)composedDuration;
- (id)composedFragments;
- (id)composedFragmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (id)composedWaveformURL;
- (id)compositionAsset;
- (id)compositionByClippingToComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (id)compositionByReloadingFromDefaultMetadataLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)decomposedFragments;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (void)enumerateOrphanedFragmentsWithBlock:(id /* block */)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(bool)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(bool)arg1;
- (id)initWithComposedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 decomposedFragments:(id)arg4 composedFragments:(id)arg5;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (bool)isContentBeingModified;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(struct { double x1; double x2; })arg1 pathExtension:(id)arg2;
- (id)playableAsset;
- (bool)readonly;
- (void)recacheComposedDuration;
- (bool)saveMetadataToDefaultLocation;
- (id)savedRecordingUUID;
- (void)setCachedComposedAVURLDuration:(double)arg1;
- (void)setCachedComposedAVURLDurationIsValid:(bool)arg1;
- (void)setDecomposedFragments:(id)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setSavedRecordingUUID:(id)arg1;
- (void)setSavedRecordingUUIDFromRecoveredRecordingUUID:(id)arg1;
- (id)title;

@end
