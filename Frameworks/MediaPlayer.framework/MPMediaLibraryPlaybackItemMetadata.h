/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasEvaluatedOfflineHLS;
    bool  _hasValidMediaItemValuesForProperties;
    bool  _isOfflineHLS;
    MPMediaItem * _mediaItem;
    NSDictionary * _mediaItemValuesForProperties;
    NSDictionary * _playbackKeys;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (getter=_writeQueue, nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)_lowQualityCachedAssetDestinationDirectory;
+ (id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7;

- (void).cxx_destruct;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(bool)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(bool*)arg4;
- (void)_invalidateMediaItemProperties;
- (id)_mediaItemValuesForProperties;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_onqueue_mediaItemValuesForProperties;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (id)_writeQueue;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (bool)allowsInitiatingPlayWhileDownload;
- (id)artistName;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (double)bookmarkTime;
- (id)buyParameters;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(bool*)arg3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)arg1;
- (id)composerName;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (void)dealloc;
- (long long)downloadIdentifier;
- (long long)endpointType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)hlsOfflinePlaybackKeys;
- (id)hlsPlaylistURLString;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (id)init;
- (id)initWithMediaItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (bool)isOfflineHLS;
- (bool)isSubscriptionRequired;
- (id)localNetworkContentURL;
- (id)mediaItem;
- (long long)mediaLibraryPersistentID;
- (id)modelGenericObject;
- (bool)prefersStoreContentInfo;
- (id)protectedContentSupportStorageURL;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setMediaItem:(id)arg1;
- (void)setWriteQueue:(id)arg1;
- (bool)shouldRememberBookmarkTime;
- (bool)shouldReportPlayEventsToStore;
- (bool)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (float)volumeNormalization;

@end
