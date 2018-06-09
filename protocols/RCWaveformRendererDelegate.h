/* made by EzioChiu.
 */

@protocol RCWaveformRendererDelegate <NSObject>

@required

- (void)waveformRenderer:(RCWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
- (void)waveformRendererContentDidFinishLoading:(RCWaveformRenderer *)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(RCWaveformRenderer *)arg1;

@end
