/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRPlaceholderNowPlayingState : NMRNowPlayingState {
    NSString * album;
    NSString * artist;
    bool  explicitTrack;
    double  fastForwardTimeInterval;
    NSNumber * itemPersistentID;
    NSNumber * nextTrackCommandEnabled;
    float  playbackRate;
    bool  playbackRateCommandSupported;
    unsigned int  playbackState;
    float  preferredPlaybackRate;
    NSNumber * previousTrackCommandEnabled;
    double  rewindTimeInterval;
    bool  skipBackwardCommandEnabled;
    bool  skipForwardCommandEnabled;
    NSString * title;
}

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (getter=isExplicitTrack, nonatomic) bool explicitTrack;
@property (nonatomic) double fastForwardTimeInterval;
@property (nonatomic, copy) NSNumber *itemPersistentID;
@property (nonatomic, retain) NSNumber *nextTrackCommandEnabled;
@property (nonatomic) float playbackRate;
@property (getter=isPlaybackRateCommandSupported, nonatomic) bool playbackRateCommandSupported;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) float preferredPlaybackRate;
@property (nonatomic, retain) NSNumber *previousTrackCommandEnabled;
@property (nonatomic) double rewindTimeInterval;
@property (getter=isSkipBackwardCommandEnabled, nonatomic) bool skipBackwardCommandEnabled;
@property (getter=isSkipForwardCommandEnabled, nonatomic) bool skipForwardCommandEnabled;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)fastForwardTimeInterval;
- (bool)isExplicitTrack;
- (bool)isPlaybackRateCommandSupported;
- (bool)isSkipBackwardCommandEnabled;
- (bool)isSkipForwardCommandEnabled;
- (id)itemPersistentID;
- (id)nextTrackCommandEnabled;
- (float)playbackRate;
- (unsigned int)playbackState;
- (float)preferredPlaybackRate;
- (id)previousTrackCommandEnabled;
- (double)rewindTimeInterval;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setExplicitTrack:(bool)arg1;
- (void)setFastForwardTimeInterval:(double)arg1;
- (void)setItemPersistentID:(id)arg1;
- (void)setNextTrackCommandEnabled:(id)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaybackRateCommandSupported:(bool)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPreferredPlaybackRate:(float)arg1;
- (void)setPreviousTrackCommandEnabled:(id)arg1;
- (void)setRewindTimeInterval:(double)arg1;
- (void)setSkipBackwardCommandEnabled:(bool)arg1;
- (void)setSkipForwardCommandEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
