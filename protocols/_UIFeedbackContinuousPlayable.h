/* made by EzioChiu.
 */

@protocol _UIFeedbackContinuousPlayable <NSObject>

@required

- (double)duration;
- (bool)isPlaying;
- (void)setDuration:(double)arg1;
- (void)stop;

@end
