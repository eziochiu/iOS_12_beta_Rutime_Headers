/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedDuration;
    struct OpaqueFigPlaybackItem { } * _playbackItem;
    bool  _shouldCacheDuration;
    NSArray * _trackIDs;
}

@property (getter=_playbackItem, nonatomic, readonly) struct OpaqueFigPlaybackItem { }*playbackItem;

- (void)_addFigObjectNotifications;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (bool)_inspectionRequiresAFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (void)_removeFigObjectNotifications;
- (id)assetInspector;
- (void)cancelLoading;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;
- (bool)isEqual:(id)arg1;

@end
