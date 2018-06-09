/* made by EzioChiu.
 */

@protocol JTClipSequencePlaybackDelegate <NSObject>

@required

- (void)mediaserverdCrashed;

@optional

- (void)playbackDidReachEnd:(JTClipSequencePlayer *)arg1;
- (void)playbackDidStart:(JTClipSequencePlayer *)arg1;
- (void)playbackDidStop:(JTClipSequencePlayer *)arg1 currentTime:(int)arg2;
- (void)playbackReadyForDisplayChanged:(JTClipSequencePlayer *)arg1 isReady:(bool)arg2;
- (void)playbackTimeDidChange:(JTClipSequencePlayer *)arg1 currentTime:(int)arg2;
- (void)playerWillBeDestroyed:(JTClipSequencePlayer *)arg1;

@end
