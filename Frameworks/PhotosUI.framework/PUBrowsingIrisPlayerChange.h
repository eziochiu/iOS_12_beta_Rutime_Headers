/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {
    bool  _activatedDidChange;
    bool  _currentlyDisplayedTimesDidChange;
    bool  _hasPendingVitalityHintDidChange;
    bool  _isLivePhotoLoadingAllowedDidChange;
    bool  _isLivePhotoPlaybackAllowedDidChange;
    bool  _livePhotoDidChange;
    bool  _livePhotoLoadingAllowedDidChange;
    bool  _livePhotoPlaybackAllowedDidChange;
    bool  _playbackStateDidChange;
    bool  _playerDidChange;
    bool  _playingDidChange;
    bool  _scrubbingPhotoTimeDidChange;
}

@property (setter=_setActivatedDidChange:, nonatomic) bool activatedDidChange;
@property (setter=_setCurrentlyDisplayedTimesDidChange:, nonatomic) bool currentlyDisplayedTimesDidChange;
@property (setter=_setHasPendingVitalityHintDidChange:, nonatomic) bool hasPendingVitalityHintDidChange;
@property (setter=_setLivePhotoLoadingAllowedDidChange:, nonatomic) bool isLivePhotoLoadingAllowedDidChange;
@property (setter=_setLivePhotoPlaybackAllowedDidChange:, nonatomic) bool isLivePhotoPlaybackAllowedDidChange;
@property (setter=_setLivePhotoDidChange:, nonatomic) bool livePhotoDidChange;
@property (nonatomic, readonly) bool livePhotoLoadingAllowedDidChange;
@property (nonatomic, readonly) bool livePhotoPlaybackAllowedDidChange;
@property (setter=_setPlaybackStateDidChange:, nonatomic) bool playbackStateDidChange;
@property (setter=_setPlayerDidChange:, nonatomic) bool playerDidChange;
@property (setter=_setPlayingDidChange:, nonatomic) bool playingDidChange;
@property (setter=_setScrubbingPhotoTimeDidChange:, nonatomic) bool scrubbingPhotoTimeDidChange;

- (void)_setActivatedDidChange:(bool)arg1;
- (void)_setCurrentlyDisplayedTimesDidChange:(bool)arg1;
- (void)_setHasPendingVitalityHintDidChange:(bool)arg1;
- (void)_setLivePhotoDidChange:(bool)arg1;
- (void)_setLivePhotoLoadingAllowedDidChange:(bool)arg1;
- (void)_setLivePhotoPlaybackAllowedDidChange:(bool)arg1;
- (void)_setPlaybackStateDidChange:(bool)arg1;
- (void)_setPlayerDidChange:(bool)arg1;
- (void)_setPlayingDidChange:(bool)arg1;
- (void)_setScrubbingPhotoTimeDidChange:(bool)arg1;
- (bool)activatedDidChange;
- (bool)currentlyDisplayedTimesDidChange;
- (bool)hasChanges;
- (bool)hasPendingVitalityHintDidChange;
- (bool)isLivePhotoLoadingAllowedDidChange;
- (bool)isLivePhotoPlaybackAllowedDidChange;
- (bool)livePhotoDidChange;
- (bool)livePhotoLoadingAllowedDidChange;
- (bool)livePhotoPlaybackAllowedDidChange;
- (bool)playbackStateDidChange;
- (bool)playerDidChange;
- (bool)playingDidChange;
- (bool)scrubbingPhotoTimeDidChange;

@end
