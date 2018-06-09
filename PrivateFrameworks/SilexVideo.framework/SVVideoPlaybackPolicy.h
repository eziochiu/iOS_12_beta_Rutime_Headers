/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackPolicy : NSObject <SVVideoPlaybackPolicy> {
    bool  _playbackIsAllowedToStart;
    bool  playbackRequested;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlaybackAllowedToStart, nonatomic) bool playbackIsAllowedToStart;
@property (nonatomic) bool playbackRequested;
@property (readonly) Class superclass;

- (id)init;
- (bool)isPlaybackAllowedToStart;
- (bool)playbackRequested;
- (void)setPlaybackIsAllowedToStart:(bool)arg1;
- (void)setPlaybackRequested:(bool)arg1;

@end
