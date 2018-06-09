/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    unsigned long long  _backgroundCacheSize;
    unsigned long long  _cacheSize;
    CPLRUDictionary * _cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> * _cachedArtworkRepresentationsAccessQueue;
    long long  _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;

- (void).cxx_destruct;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(bool)arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)dealloc;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
