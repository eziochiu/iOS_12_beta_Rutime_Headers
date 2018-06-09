/* made by EzioChiu.
 */

@protocol RCWaveformSelectionOverlayDelegate <NSObject>

@required

- (void)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 didFinishTrackingSelectionBeginTime:(bool)arg2 endTime:(bool)arg3 assetCurrentTime:(bool)arg4;
- (double)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 timeForOffset:(double)arg2;
- (void)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willBeginTrackingSelectionBeginTime:(bool)arg2 endTime:(bool)arg3 assetCurrentTime:(bool)arg4;
- (double)waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(bool)arg3;
- (struct { double x1; double x2; })waveformSelectionOverlay:(RCWaveformSelectionOverlay *)arg1 willChangeSelectedTimeRange:(struct { double x1; double x2; })arg2 isTracking:(bool)arg3;
- (double)waveformSelectionOverlayGetCurrentTime:(RCWaveformSelectionOverlay *)arg1;

@end
