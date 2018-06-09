/* made by EzioChiu.
 */

@protocol RCAVWaveformViewControllerDelegate

@required

- (void)audioWaveformControllerDidChangeAVState:(RCAVWaveformViewController *)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(RCAVWaveformViewController *)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(RCAVWaveformViewController *)arg1;

@end
