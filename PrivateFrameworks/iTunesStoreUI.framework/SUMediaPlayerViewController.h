/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {
    UIView * _backgroundContainerView;
    SUClientInterface * _clientInterface;
    SUMediaPlayerItem * _mediaItem;
    NSMutableArray * _operations;
    long long  _playerState;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SUMediaPlayerItem *mediaPlayerItem;
@property (readonly) Class superclass;

+ (bool)_URLIsITunesU:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)_backgroundContainerView;
- (void)_bookmarkCurrentTime;
- (void)_dequeueOperation:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)_insertBackgroundContainerView;
- (void)_loadBackgroundImage;
- (void)_mediaTypesAvailableNotification:(id)arg1;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)_prepareMediaItem;
- (void)_setIsActivePlayer:(bool)arg1;
- (void)_showBackgroundImage:(id)arg1;
- (id)clientInterface;
- (id)copyScriptViewController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithMediaPlayerItem:(id)arg1;
- (void)loadView;
- (id)mediaPlayerItem;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
