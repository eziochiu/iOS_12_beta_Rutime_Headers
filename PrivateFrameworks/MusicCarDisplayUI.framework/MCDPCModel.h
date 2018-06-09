/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPCModel : NSObject {
    NSMutableDictionary * _beginLoadingBlocks;
    MPWeakTimer * _beginLoadingTimeoutTimer;
    NSString * _bundleID;
    id /* block */  _containerCompletion;
    bool  _didFinishInitialLoad;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSMutableDictionary * _items;
    NSObject<OS_dispatch_queue> * _mediaRemoteNotificationQueue;
    MPWeakTimer * _modelSourceInvalidatedTimer;
    id /* block */  _playbackCompletion;
    MPWeakTimer * _playbackProgressTimeoutTimer;
    MCDPCItem * _rootItem;
    NSIndexPath * _selectedIndexPath;
    bool  _shouldReloadAgain;
    unsigned int  _supportedAPIMask;
}

@property (nonatomic, readonly) NSString *appTitle;
@property (nonatomic, retain) NSMutableDictionary *beginLoadingBlocks;
@property (nonatomic, retain) MPWeakTimer *beginLoadingTimeoutTimer;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, copy) id /* block */ containerCompletion;
@property (nonatomic) bool didFinishInitialLoad;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSMutableDictionary *items;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue;
@property (nonatomic, retain) MPWeakTimer *modelSourceInvalidatedTimer;
@property (nonatomic, copy) id /* block */ playbackCompletion;
@property (nonatomic, retain) MPWeakTimer *playbackProgressTimeoutTimer;
@property (nonatomic, readonly) MCDPCItem *rootItem;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic) bool shouldReloadAgain;
@property (nonatomic) unsigned int supportedAPIMask;

- (void).cxx_destruct;
- (void)_browsableContentDidRegisterNotification:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (id)_errorForNotification:(id)arg1;
- (void)_finishBeginLoadingNotification:(id)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)_invalidateBeginLoadingTimeoutTimer;
- (void)_invalidatePlaybackProgressTimeoutTimer;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_registerForClientContent;
- (void)_registerNotifications;
- (void)_setupBeginLoadingTimeoutTimerWithCompletion:(id /* block */)arg1;
- (void)_setupPlaybackProgressTimeoutTimerWithCompletion:(id /* block */)arg1;
- (id)appTitle;
- (id)beginLoadingBlocks;
- (void)beginLoadingItemAtIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (id)beginLoadingTimeoutTimer;
- (id)bundleID;
- (id /* block */)containerCompletion;
- (id)containerForRoot;
- (void)dealloc;
- (bool)didFinishInitialLoad;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completion:(id /* block */)arg3;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(id /* block */)arg1;
- (void)getRemoteAppIsPlaying:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithBundleID:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (id)items;
- (id)itemsFromMRContentItems:(id)arg1;
- (id)mediaRemoteNotificationQueue;
- (id)modelSourceInvalidatedTimer;
- (id /* block */)playbackCompletion;
- (id)playbackProgressTimeoutTimer;
- (void)reloadAgainIfInvalidationCalled;
- (id)rootItem;
- (id)selectedIndexPath;
- (void)setBeginLoadingBlocks:(id)arg1;
- (void)setBeginLoadingTimeoutTimer:(id)arg1;
- (void)setContainerCompletion:(id /* block */)arg1;
- (void)setDidFinishInitialLoad:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setMediaRemoteNotificationQueue:(id)arg1;
- (void)setModelSourceInvalidatedTimer:(id)arg1;
- (void)setPlaybackCompletion:(id /* block */)arg1;
- (void)setPlaybackProgressTimeoutTimer:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setShouldReloadAgain:(bool)arg1;
- (void)setSupportedAPIMask:(unsigned int)arg1;
- (bool)shouldReloadAgain;
- (unsigned int)supportedAPIMask;

@end
