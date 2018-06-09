/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    NSURL * _URL;
    AVAssetInspector * _assetInspector;
    int  _basicInspectionFailureCode;
    struct OpaqueFigFormatReader { } * _formatReader;
    NSMutableArray * _keysAwaitingCompletion;
    struct OpaqueFigSimpleMutex { } * _loadingMutex;
    long long  _status;
}

- (id)URL;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (bool)_inspectionRequiresAFormatReader;
- (bool)_isStreaming;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (bool)_providesAccurateTiming;
- (void)_serverHasDied;
- (void)_setStatus:(long long)arg1 figErrorCode:(int)arg2;
- (long long)_status;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2;
- (bool)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (bool)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2;
- (id)assetInspector;
- (void)cancelLoading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (void)finalize;
- (bool)hasProtectedContent;
- (id)initWithURL:(id)arg1;
- (bool)isComposable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)lyrics;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end
