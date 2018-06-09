/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoProvider : NSObject <SVVideo, SVVideoProviding> {
    <NUVideoEventTracker> * _eventTracker;
    NSString * _identifier;
    <SVVideoMetadataProviding> * _metadata;
    bool  _playbackHasStarted;
    <NUVideoItem> * _videoItem;
}

@property (nonatomic, readonly) bool allowsCallToActionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NUVideoEventTracker> *eventTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) <SVVideoMetadataProviding> *metadata;
@property (getter=areNeighboringAdsAllowed, nonatomic, readonly) bool neighboringAdsAreAllowed;
@property (nonatomic) bool playbackHasStarted;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <NUVideoItem> *videoItem;
@property (nonatomic, readonly) unsigned long long videoType;

- (void).cxx_destruct;
- (bool)allowsCallToActionBar;
- (bool)areNeighboringAdsAllowed;
- (id)eventTracker;
- (id)identifier;
- (id)initWithVideoItem:(id)arg1 eventTracker:(id)arg2;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)metadata;
- (void)muteStateChanged:(bool)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (bool)playbackHasStarted;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)setEventTracker:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaybackHasStarted:(bool)arg1;
- (void)tappedAdvance;
- (void)tappedCallToAction;
- (void)tappedDiscoverMore;
- (void)tappedNowPlaying;
- (void)tappedReplay;
- (id)videoItem;
- (id)videoMetadataForCurrentState;
- (unsigned long long)videoType;

@end
