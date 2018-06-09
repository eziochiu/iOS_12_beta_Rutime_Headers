/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver> {
    ISLivePhotoUIView * _livePhotoView;
    long long  _requestID;
    AVPlayerItem * _videoPlayerItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_updateLivePhotoPlayerItem;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (bool)isDisplayingFullQualityContent;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (void)setVideoPlayerItem:(id)arg1;
- (void)updateContent;
- (id)videoPlayerItem;

@end
