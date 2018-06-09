/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClientCallbacks : NSObject {
    MSVMultiCallback * _artworkCallbacks;
    id /* block */  _audioAmplitudeSamplesCallback;
    id /* block */  _beginLyricsEventCallback;
    NSMutableDictionary * _commandHandlerBlocks;
    MSVMultiCallback * _createChildItemCallbacks;
    MSVMultiCallback * _createItemForOffsetCallbacks;
    MSVMultiCallback * _createPlaybackQueueForRequestCallbacks;
    id /* block */  _endLyricsEventCallback;
    MSVMultiCallback * _infoCallbacks;
    MSVMultiCallback * _languageOptionsCallbacks;
    MSVMultiCallback * _lyricsCallbacks;
    MSVMultiCallback * _metadataCallbacks;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    id /* block */  _videoThumbnailsCallback;
}

@property (nonatomic, readonly) MSVMultiCallback *artworkCallbacks;
@property (nonatomic, copy) id /* block */ audioAmplitudeSamplesCallback;
@property (nonatomic, copy) id /* block */ beginLyricsEventCallback;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSArray *commandHandlerBlocks;
@property (nonatomic, readonly) MSVMultiCallback *createChildItemCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *createItemForOffsetCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *createPlaybackQueueForRequestCallbacks;
@property (nonatomic, copy) id /* block */ endLyricsEventCallback;
@property (nonatomic, readonly) bool hasPlaybackQueueCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *infoCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *languageOptionsCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *lyricsCallbacks;
@property (nonatomic, readonly) MSVMultiCallback *metadataCallbacks;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, copy) id /* block */ videoThumbnailsCallback;

- (void).cxx_destruct;
- (unsigned long long)_onQueue_capabilities;
- (void)addCommandHandlerBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)artworkCallbacks;
- (id /* block */)audioAmplitudeSamplesCallback;
- (id /* block */)beginLyricsEventCallback;
- (unsigned long long)capabilities;
- (id)commandHandlerBlocks;
- (id)createChildItemCallbacks;
- (id)createItemForOffsetCallbacks;
- (id)createPlaybackQueueForRequestCallbacks;
- (id /* block */)endLyricsEventCallback;
- (bool)hasPlaybackQueueCallbacks;
- (id)infoCallbacks;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;
- (id)languageOptionsCallbacks;
- (id)lyricsCallbacks;
- (id)metadataCallbacks;
- (id)playerPath;
- (void)registerCallbacks;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1;
- (void)registerNowPlayingInfoAssetCallbacks:(id)arg1;
- (void)registerNowPlayingInfoCallbacks:(id)arg1;
- (void)registerNowPlayingInfoLanguageOptionsCallback:(id)arg1;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)setAudioAmplitudeSamplesCallback:(id /* block */)arg1;
- (void)setBeginLyricsEventCallback:(id /* block */)arg1;
- (void)setEndLyricsEventCallback:(id /* block */)arg1;
- (void)setVideoThumbnailsCallback:(id /* block */)arg1;
- (id /* block */)videoThumbnailsCallback;

@end
