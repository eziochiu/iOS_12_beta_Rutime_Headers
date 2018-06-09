/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    NSURL * _URL;
    AVAssetInspector * _assetInspector;
    long long  _assetInspectorOnce;
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    struct OpaqueFigAsset { } * _figAsset;
    int  _figAssetCreationStatus;
    long long  _fragmentMinderAssociationCount;
    NSMutableArray * _loadingBatches;
    bool  _loadingCanceled;
    struct OpaqueFigSimpleMutex { } * _loadingMutex;
    bool  _registeredForFigAssetNotifications;
    AVWeakReference * _weakReferenceToAsset;
}

+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;
+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;

- (id)URL;
- (void)_addFigAssetNotifications;
- (Class)_classForTrackInspectors;
- (id)_completionHandlerQueue;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (double)_fragmentMindingInterval;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (bool)_isStreaming;
- (long long)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset { }*)arg2 error:(id*)arg3;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (void)_removeFigAssetNotifications;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (id)asset;
- (id)assetInspector;
- (void)cancelLoading;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (void)finalize;
- (bool)hasProtectedContent;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1 forAsset:(id)arg2;
- (id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4;
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
