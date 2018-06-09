/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsset : NSObject <AVAsynchronousKeyValueLoading, NSCopying> {
    AVAssetInternal * _asset;
}

@property (readonly) NSArray *availableChapterLocales;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) bool isDecodableMovie;
@property (nonatomic, readonly) bool isProxy;
@property (readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly, retain) <AVLoggingIdentifier> *loggingIdentifier;
@property (readonly) AVAssetTrack *mainAudioTrack;
@property (readonly) AVAssetTrack *mainVideoTrack;
@property (readonly) struct CGSize { double x1; double x2; } mainVideoTrackNaturalSize;
@property (readonly) float mainVideoTrackNominalFrameRate;
@property (readonly) struct CGSize { double x1; double x2; } mainVideoTrackPreferredSize;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } mainVideoTrackPreferredTransform;
@property (nonatomic, readonly) long long moovAtomSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSizeWithPreferredTransforms;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) NSValue *pu_cachedDuration;
@property (getter=isQTAutoloopVideo, readonly) bool qtAutoloopVideo;
@property (setter=rc_setComposedAVURL:, nonatomic, retain) NSURL *rc_composedAVURL;
@property (readonly) struct CGSize { double x1; double x2; } scaleFactors;
@property (nonatomic, readonly) bool tsu_isPlayable;
@property (nonatomic, readonly) unsigned int videoOrientation;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
+ (id)assetWithURL:(id)arg1;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;
+ (bool)expectsPropertyRevisedNotifications;
+ (id)makeAssetLoggingIdentifier;
+ (bool)supportsPlayerItems;

- (id)_ID3Metadata;
- (id)_absoluteURL;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_assetAnalysisMessages;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_availableCanonicalizedChapterLanguages;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterTracks;
- (Class)_classForTrackInspectors;
- (id)_comparisonToken;
- (bool)_containsAtLeastOnePlayableAudioTrack;
- (bool)_containsAtLeastOnePlayableVideoTrack;
- (id)_exportURL;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_firstTrackGroupWithMediaTypes:(id)arg1;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (double)_fragmentMindingInterval;
- (void)_handleURLRequest:(id)arg1;
- (bool)_hasResourceLoaderDelegate;
- (bool)_isStreaming;
- (void)_loadChapterInfo;
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;
- (id)_mediaSelectionGroupDictionaries;
- (bool)_mindsFragments;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_nameForLogging;
- (bool)_needsLegacyChangeNotifications;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (void)_setLoggingIdentifier:(id)arg1;
- (void)_tracksDidChange;
- (id)_tracksWithClass:(Class)arg1;
- (id)_weakReference;
- (id)allMediaSelections;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLanguages;
- (id)availableChapterLocales;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (bool)canContainFragments;
- (void)cancelLoading;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (bool)containsFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isProxy;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)loggingIdentifier;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (long long)moovAtomSize;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (id)preferredMediaSelection;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (unsigned long long)referenceRestrictions;
- (long long)statusOfValueForKey:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)subtitleAlternatesTrackGroup;
- (bool)supportsAnalysisReporting;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)createLanguageOptionGroups;
- (void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (bool)canPassthroughExport;
- (id)commonMetadataStringValueForKey:(id)arg1;
- (bool)isDecodableMovie;
- (bool)isMarkedNotSerializable;
- (id)localizedDisplayName;
- (id)mainAudioTrack;
- (id)mainVideoTrack;
- (struct CGSize { double x1; double x2; })mainVideoTrackNaturalSize;
- (float)mainVideoTrackNominalFrameRate;
- (struct CGSize { double x1; double x2; })mainVideoTrackPreferredSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })mainVideoTrackPreferredTransform;
- (struct CGSize { double x1; double x2; })scaleFactors;
- (bool)valuesForKeysAreFinishedLoading:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)_pu_setCachedDuration:(id)arg1;
- (id)pu_cachedDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pu_duration;
- (void)pu_loadDurationWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (void)assetIsAutoloopMedia:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

- (bool)isQTAutoloopVideo;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (unsigned int)videoOrientation;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)assetWithIdentifierURL:(id)arg1;
+ (id)pluginEditedAsset;
+ (void)setPluginEditedAsset:(id)arg1;

- (id)creationDateFromMetadata;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (struct CGImageSource { }*)newPreviewImageSource;
- (id)previewImageDataWithUTType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (struct UIImage { Class x1; }*)previewImage;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)plVideoCodecFourCharCodeString;
- (id)plVideoCodecName;

// Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation

- (id)ipaVideoCodecName;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (float)is_cropFactor;
- (id)is_valueForMetadataIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })is_videoSize;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;

- (struct CGSize { double x1; double x2; })naturalSizeWithPreferredTransforms;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2;
- (id)vcp_enabledTracksWithMediaType:(id)arg1;
- (id)vcp_firstEnabledTrackWithMediaType:(id)arg1;
- (bool)vcp_isMontage;
- (bool)vcp_isShortMovie;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_livePhotoStillDisplayTime;
- (void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5;
- (void)vcp_scaleSlowmoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_composedAVURL;
- (void)rc_setComposedAVURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_playableKeysWithKeys:(id)arg1;

- (struct CGSize { double x1; double x2; })naturalSizeWithPreferredTransforms;
- (bool)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
- (bool)tsu_isPlayable;

@end
