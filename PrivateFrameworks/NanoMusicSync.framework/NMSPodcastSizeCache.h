/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSPodcastSizeCache : NSObject {
    NSDictionary * _episodeSizeInfoDict;
    NSObject<OS_dispatch_queue> * _internalQueue;
    int  _notifyToken;
    NSDictionary * _relationshipDict;
}

@property (nonatomic, readonly) NSDictionary *episodeSizeInfoDict;
@property (nonatomic, readonly) NSDictionary *relationshipDict;

+ (id)_podcastSizeCacheFilePath;

- (void).cxx_destruct;
- (id)_cachedPodcastEpisodeSizeDictionary;
- (id)_initWithCache:(bool)arg1;
- (void)_registerForCacheChanged;
- (void)_setupFromCache;
- (void)dealloc;
- (id)episodeSizeInfoDict;
- (id)init;
- (id)itemsForFeedURL:(id)arg1;
- (id)relationshipDict;

@end
