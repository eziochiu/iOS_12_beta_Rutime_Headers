/* made by EzioChiu.
 */

@protocol MiroPlayerControlling <NSObject>

@required

- (int)currentFrameTime;
- (bool)isPlaying;
- (void)setPlaying:(bool)arg1;

@end
