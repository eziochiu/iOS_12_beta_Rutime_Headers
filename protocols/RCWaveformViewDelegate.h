/* made by EzioChiu.
 */

@protocol RCWaveformViewDelegate <NSObject>

@required

- (void)waveformViewController:(RCWaveformViewController *)arg1 didChangeToSelectedTimeRange:(struct { double x1; double x2; })arg2;
- (void)waveformViewController:(RCWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(bool)arg3;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCWaveformViewController *)arg1;

@end
