/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal * _internal;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long availableFileSize;
@property (nonatomic, readonly) unsigned long long countOfBytesReceived;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) AVMediaSelection *resolvedMediaSelection;
@property (nonatomic, readonly) long long status;

+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (id)URL;
- (void)_addFigAssetDownloaderListeners;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_common_init;
- (struct OpaqueFigAsset { }*)_createDuplicateFigAssetFromAVAsset:(id)arg1;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_figAssetDownloaderNotificationNames;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (void)_forwardLoadedTimeRangesChangedNotification:(id)arg1;
- (id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (int)_readyForInspection;
- (void)_removeFigAssetDownloaderListeners;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (void)_selectMediaOptionsFromMediaSelection:(id)arg1;
- (int)_setFileFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (id)_verifyDownloadConfigurationForAssetType;
- (id)_weakReference;
- (unsigned long long)availableFileSize;
- (unsigned long long)countOfBytesReceived;
- (void)dealloc;
- (id)destinationURL;
- (unsigned long long)downloadToken;
- (id)error;
- (unsigned long long)fileSize;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)loadedTimeRanges;
- (void)pause;
- (long long)priority;
- (id)resolvedMediaSelection;
- (void)start;
- (void)startLoadingMetadata;
- (long long)status;
- (void)stop;

@end
