/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {
    bool  _requestingPlaybackInitialization;
    NSURL * _stationURL;
}

@property (getter=isRequestingPlaybackInitialization, nonatomic, readonly) bool requestingPlaybackInitialization;
@property (nonatomic, readonly) NSURL *stationURL;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isRequestingPlaybackInitialization;
- (id)stationURL;

@end
