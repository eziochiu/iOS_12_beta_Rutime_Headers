/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaybackItemMetadata : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _albumArtistName;
    long long  _albumStoreAdamID;
    NSString * _albumTitle;
    bool  _allowsCellularNetworking;
    bool  _allowsInitiatingPlayWhileDownload;
    NSString * _artistName;
    long long  _artistStoreAdamID;
    double  _bookmarkTime;
    NSString * _buyParameters;
    NSString * _composerName;
    NSString * _contentTitle;
    unsigned long long  _contentType;
    NSString * _copyrightText;
    long long  _downloadIdentifier;
    long long  _endpointType;
    double  _expectedDuration;
    NSString * _genreTitle;
    NSDictionary * _hlsOfflinePlaybackKeys;
    NSString * _hlsPlaylistURLString;
    NSNumber * _iTunesStoreContentDSID;
    NSNumber * _iTunesStoreContentID;
    bool  _isExplicitTrack;
    NSURL * _localNetworkContentURL;
    MPMediaItem * _mediaItem;
    long long  _mediaLibraryPersistentID;
    MPModelGenericObject * _modelGenericObject;
    bool  _offlineHLS;
    bool  _prefersStoreContentInfo;
    NSURL * _protectedContentSupportStorageURL;
    NSNumber * _rentalIdentifier;
    bool  _requiresPlayWhileDownload;
    bool  _shouldRememberBookmarkTime;
    bool  _shouldReportPlayEventsToStore;
    bool  _showComposer;
    unsigned long long  _storeAccountID;
    long long  _storeAdamID;
    unsigned long long  _storeSagaID;
    long long  _storeSubscriptionAdamID;
    NSString * _storeUbiquitousIdentifier;
    bool  _subscriptionRequired;
    float  _volumeNormalization;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic, readonly, copy) NSDictionary *additionalHTTPHeaderFields;
@property (nonatomic, readonly, copy) NSString *albumArtistName;
@property (nonatomic, readonly) long long albumStoreAdamID;
@property (nonatomic, readonly, copy) NSString *albumTitle;
@property (nonatomic, readonly) bool allowsAssetCaching;
@property (nonatomic, readonly) bool allowsCellularNetworking;
@property (nonatomic, readonly) bool allowsInitiatingPlayWhileDownload;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly) long long artistStoreAdamID;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly, copy) NSString *composerName;
@property (nonatomic, readonly, copy) NSString *contentTitle;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) long long endpointType;
@property (nonatomic, readonly) double expectedDuration;
@property (nonatomic, readonly, copy) NSString *genreTitle;
@property (nonatomic, readonly) NSDictionary *hlsOfflinePlaybackKeys;
@property (nonatomic, readonly, copy) NSString *hlsPlaylistURLString;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreContentDSID;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentDownloadParameters;
@property (nonatomic, readonly, copy) NSNumber *iTunesStoreContentID;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentPurchasedMediaKind;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentType;
@property (nonatomic, readonly, copy) NSString *iTunesStoreContentUserAgent;
@property (nonatomic, readonly) bool isExplicitTrack;
@property (nonatomic, readonly) long long likedState;
@property (nonatomic, readonly, copy) NSURL *localNetworkContentURL;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) long long mediaLibraryPersistentID;
@property (nonatomic, readonly) MPModelGenericObject *modelGenericObject;
@property (getter=isOfflineHLS, nonatomic, readonly) bool offlineHLS;
@property (nonatomic, readonly) bool prefersStoreContentInfo;
@property (nonatomic, readonly, copy) NSURL *protectedContentSupportStorageURL;
@property (getter=_rentalIdentifier, nonatomic, readonly) NSNumber *rentalIdentifier;
@property (nonatomic, readonly) bool requiresPlayWhileDownload;
@property (nonatomic, readonly) bool shouldRememberBookmarkTime;
@property (nonatomic, readonly) bool shouldReportPlayEventsToStore;
@property (nonatomic, readonly) bool showComposer;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) unsigned long long storeSagaID;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;
@property (nonatomic, readonly, copy) NSString *storeUbiquitousIdentifier;
@property (getter=isSubscriptionRequired, nonatomic, readonly) bool subscriptionRequired;
@property (nonatomic, readonly) float volumeNormalization;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)_shouldRespectMusicCellularDataSetting;
+ (bool)_shouldRespectStoreCellularDataSetting;

- (void).cxx_destruct;
- (bool)_calculateAllowsCellularNetworking;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (id)_rentalIdentifier;
- (bool)_requiresPendingItemDownload;
- (void)_setNeedsAllowsCellularNetworkingUpdate;
- (void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (id)_storeRedownloadProductItem;
- (id)additionalHTTPHeaderFields;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (bool)allowsAssetCaching;
- (bool)allowsCellularNetworking;
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
- (long long)downloadIdentifier;
- (long long)endpointType;
- (double)expectedDuration;
- (id)genreTitle;
- (void)getNetworkConstraintsForDownloadKind:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)hlsOfflinePlaybackKeys;
- (id)hlsPlaylistURLString;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentDownloadParameters;
- (id)iTunesStoreContentID;
- (id)iTunesStoreContentPurchasedMediaKind;
- (id)iTunesStoreContentType;
- (id)iTunesStoreContentUserAgent;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (bool)isOfflineHLS;
- (bool)isSubscriptionRequired;
- (long long)likedState;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (id)localNetworkContentURL;
- (id)mediaItem;
- (long long)mediaLibraryPersistentID;
- (id)modelGenericObject;
- (bool)prefersStoreContentInfo;
- (id)protectedContentSupportStorageURL;
- (bool)requiresPlayWhileDownload;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setLikedState:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)shouldRememberBookmarkTime;
- (bool)shouldReportPlayEventsToStore;
- (bool)showComposer;
- (unsigned long long)storeAccountID;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg1;
- (float)volumeNormalization;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
