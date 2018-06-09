/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem> {
    unsigned long long  _activityCoordinatorQueuePosition;
    bool  _canLoadVideo;
    long long  _requestID;
    AVPlayerItem * _videoPlayerItem;
    PXVideoPlayerView * _videoView;
}

@property (nonatomic) unsigned long long activityCoordinatorQueuePosition;
@property (nonatomic) bool canLoadVideo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_loadVideo;
- (void)_unloadVideo;
- (unsigned long long)activityCoordinatorQueuePosition;
- (bool)canLoadVideo;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)didMoveToWindow;
- (void)imageDidChange;
- (bool)isDisplayingFullQualityContent;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1;
- (void)setCanLoadVideo:(bool)arg1;
- (void)setVideoPlayerItem:(id)arg1;
- (void)updateContent;
- (id)videoPlayerItem;

@end
