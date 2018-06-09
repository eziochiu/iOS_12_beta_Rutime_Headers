/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPArtworkResizeUtility * _artworkResizeUtility;
    struct { 
        void *createPlaybackQueue; 
        void *createChildItem; 
        void *metadata; 
        void *artwork; 
        void *info; 
        void *languageOptions; 
        void *lyrics; 
    }  _callbacks;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableArray * _contentItemIdentifiers;
    MSVTimer * _contentItemInvalidationTimer;
    MSVLRUDictionary * _contentItems;
    NSDictionary * _convertedNowPlayingInfo;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    void * _fallbackActivity;
    struct _MSVSignedRange { 
        long long location; 
        long long length; 
    }  _loadedContentItemsRange;
    <MPNowPlayingInfoLyricsDelegate> * _lyricsDelegate;
    NSMutableDictionary * _mutatedContentItems;
    NSMutableDictionary * _mutatedPlaybackQueueRequests;
    MPNowPlayingContentItem * _nowPlayingContentItem;
    NSDictionary * _nowPlayingInfo;
    <MPNowPlayingPlaybackQueueDataSource> * _playbackQueueDataSource;
    <MPNowPlayingPlaybackQueueDelegate> * _playbackQueueDelegate;
    unsigned long long  _playbackState;
    NSString * _playerID;
    void * _playerPath;
    MPNowPlayingInfoCenterArtworkContext * _publishedContext;
    NSDate * _pushDate;
    NSDictionary * _queuedNowPlayingInfo;
    NSString * _representedApplicationBundleIdentifier;
    struct _MSVSignedRange { 
        long long location; 
        long long length; 
    }  _requestedContentItemsRange;
    NSObject<OS_dispatch_queue> * _utilityQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (nonatomic) <MPNowPlayingInfoLyricsDelegate> *lyricsDelegate;
@property (nonatomic, retain) MPNowPlayingContentItem *nowPlayingContentItem;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic) MPCPlaybackEngine *playbackEngine;
@property (nonatomic) <MPNowPlayingPlaybackQueueDataSource> *playbackQueueDataSource;
@property (nonatomic) <MPNowPlayingPlaybackQueueDelegate> *playbackQueueDelegate;
@property (nonatomic) unsigned long long playbackState;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly) void*playerPath;
@property (nonatomic, copy) NSString *representedApplicationBundleIdentifier;
@property (nonatomic, readonly) bool supportsArtworkCatalogLoading;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)defaultCenter;
+ (id)infoCenterForPlayerID:(id)arg1;
+ (id)serviceQueue;

- (void).cxx_destruct;
- (id)_artworkCatalogForContentItem:(id)arg1;
- (void)_audioSessionRoutingContextDidChangeNotification:(id)arg1;
- (void)_becomeActiveWithCompletion:(id /* block */)arg1;
- (id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2;
- (void)_contentItemChangedNotification:(id)arg1;
- (id)_contentItemForIdentifier:(id)arg1;
- (id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(bool)arg2;
- (id)_contentItemIDsInRange:(struct { long long x1; long long x2; })arg1 itemsRange:(struct { long long x1; long long x2; }*)arg2;
- (void*)_createPlaybackQueueForRequest:(void*)arg1;
- (void)_getMetadataForContentItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_initializeNowPlayingInfo;
- (void)_invalidatePlaybackQueueImmediately;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1 completion:(id /* block */)arg2;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (void)_onQueue_pushContentItemsUpdate;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(bool)arg1;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_updatePlayerAudioSessionProperties;
- (void)becomeActive;
- (void)becomeActiveSystemFallback;
- (id)dataSourceQueue;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerID:(id)arg1;
- (void)invalidatePlaybackQueue;
- (id)lyricsDelegate;
- (id)nowPlayingContentItem;
- (id)nowPlayingInfo;
- (id)playbackQueueDataSource;
- (id)playbackQueueDelegate;
- (unsigned long long)playbackState;
- (id)playerID;
- (void*)playerPath;
- (id)representedApplicationBundleIdentifier;
- (void)resignActiveSystemFallback;
- (void)setDataSourceQueue:(id)arg1;
- (void)setLyricsDelegate:(id)arg1;
- (void)setNowPlayingContentItem:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueueDataSource:(id)arg1;
- (void)setPlaybackQueueDelegate:(id)arg1;
- (void)setPlaybackState:(unsigned long long)arg1;
- (void)setRepresentedApplicationBundleIdentifier:(id)arg1;
- (bool)supportsArtworkCatalogLoading;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackEngine;
- (void)setPlaybackEngine:(id)arg1;

@end
