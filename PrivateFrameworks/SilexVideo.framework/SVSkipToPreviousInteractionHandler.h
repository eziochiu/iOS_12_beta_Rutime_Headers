/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVSkipToPreviousInteractionHandler : NSObject <SVInteractionHandling> {
    <SVVideoPlaybackSkipping> * _playbackSkipper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackSkipping> *playbackSkipper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;
- (id)playbackSkipper;

@end
