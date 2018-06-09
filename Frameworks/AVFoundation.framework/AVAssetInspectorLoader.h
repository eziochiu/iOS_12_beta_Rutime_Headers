/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspectorLoader : NSObject <AVAsynchronousKeyValueLoading, NSCopying> {
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) NSURL *URL;
@property (getter=isAssociatedWithFragmentMinder, nonatomic, readonly) bool associatedWithFragmentMinder;
@property (getter=_classForTrackInspectors, nonatomic, readonly) Class classForTrackInspectors;
@property (getter=isCompatibleWithSavedPhotosAlbum, nonatomic, readonly) bool compatibleWithSavedPhotosAlbum;
@property (getter=isComposable, nonatomic, readonly) bool composable;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExportable, nonatomic, readonly) bool exportable;
@property (getter=_figAsset, nonatomic, readonly) struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (getter=_formatReader, nonatomic, readonly) struct OpaqueFigFormatReader { }*formatReader;
@property (getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:, nonatomic) double fragmentMindingInterval;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly) NSURL *originalNetworkContentURL;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (getter=_playbackItem, nonatomic, readonly) struct OpaqueFigPlaybackItem { }*playbackItem;
@property (getter=isReadable, nonatomic, readonly) bool readable;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (getter=_isStreaming, nonatomic, readonly) bool streaming;
@property (getter=_weakReference, nonatomic, readonly) AVWeakReference *weakReference;

+ (void)initialize;

- (id)URL;
- (Class)_classForTrackInspectors;
- (id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (double)_fragmentMindingInterval;
- (bool)_isStreaming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (id)_weakReference;
- (id)assetInspector;
- (void)cancelLoading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (bool)hasProtectedContent;
- (id)init;
- (bool)isAssociatedWithFragmentMinder;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)lyrics;
- (id)originalNetworkContentURL;
- (id)resolvedURL;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end
