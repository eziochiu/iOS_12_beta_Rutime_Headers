/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent {
    double  _duration;
}

@property (nonatomic) double duration;

- (double)duration;
- (long long)eventCode;
- (id)eventPayload;
- (void)setDuration:(double)arg1;

@end
