/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell <ISChangeObserver> {
    ISWrappedAVAudioSession * __audioSession;
    AVAsset * _displayedAsset;
    ISWrappedAVPlayer * _videoPlayer;
    PXVideoPlayerView * _videoView;
}

@property (setter=_setAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *_audioSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioSession;
- (void)_setAudioSession:(id)arg1;
- (void)_updateVideoPlayerRateWithItem:(id)arg1;
- (void)_videoStatusDidChange;
- (id)loadVariationView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)updateError;
- (void)updateVariationView;

@end
