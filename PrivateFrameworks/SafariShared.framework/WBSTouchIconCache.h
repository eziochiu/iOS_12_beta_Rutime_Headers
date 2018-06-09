/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider, WBSWebViewMetadataFetchOperationDelegate> {
    bool  _allowFetchingOverCellularNetwork;
    NSURL * _cacheDirectoryURL;
    WBSTouchIconCacheSettingsSQLiteStore * _cacheSettingsStore;
    bool  _didLoadSettings;
    NSMutableSet * _failedTouchIconRequestHosts;
    long long  _fileMappingStyle;
    NSMutableDictionary * _hostsToRequestSets;
    WBSSiteMetadataImageCache * _imageCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _internalQueueBusy;
    NSMutableArray * _pendingSaveTouchIconToDiskBlocks;
    NSMutableSet * _pendingTouchIconRequestHosts;
    long long  _protectionType;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    bool  _readOnly;
    NSMutableDictionary * _requestsToDelayedResponses;
    NSCache * _requestsToResponses;
    NSMutableDictionary * _touchIconsDataForHosts;
}

@property (nonatomic, readonly) NSURL *cacheDirectoryURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (getter=isInternalQueueBusy) bool internalQueueBusy;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

+ (id)_favoritesGlyph;
+ (id)_generateDefaultFavoritesIconWithGlyphColor:(id)arg1;
+ (id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)_monogramConfiguration;
+ (id)defaultBackgroundColor;
+ (id)defaultFavoritesIcon;
+ (id)defaultGlyphColor;
+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;

- (void).cxx_destruct;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_ensureCacheDirectory;
- (void)_enumerateRequestsForHost:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_imageCacheSettingsDatabaseURL;
- (double)_maximumScreenScale;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_openCacheSettingsDatabaseIfNeeded;
- (id)_operationWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_registerRequest:(id)arg1;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (id)_resizedImage:(id)arg1 forHost:(id)arg2;
- (id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2;
- (id)_responseForTouchIconRequestWithNoHost:(id)arg1;
- (void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(bool)arg3 isUserLoadedWebpageRequest:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5;
- (void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 didReceiveNewData:(bool)arg2;
- (void)_setUpImageCacheSettingsSQLiteStore;
- (bool)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (bool)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3;
- (bool)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2 initiatedFromBookmarkInteraction:(bool)arg3;
- (id)_touchIconForURL:(id)arg1;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(bool)arg3 isUserLoadedWebpageRequest:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5 UUIDString:(id)arg6;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)cacheDirectoryURL;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)emptyCaches;
- (bool)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)imageDirectoryURL;
- (id)init;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(bool)arg2;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(bool)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(bool)arg4 fileMappingStyle:(long long)arg5;
- (bool)isInternalQueueBusy;
- (bool)isReadOnly;
- (id)operationForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)purgeUnneededCacheEntries;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconForURLString:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconForURLString:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setInternalQueueBusy:(bool)arg1;
- (void)setProviderDelegate:(id)arg1;
- (bool)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(bool)arg2;
- (bool)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1;
- (id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (id)webViewMetadataFetchOperation:(id)arg1 webViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(id)arg3;

@end
