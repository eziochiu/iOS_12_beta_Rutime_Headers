/* made by EzioChiu.
 */

@protocol CSVolumeMonitorDelegate <NSObject>

@optional

- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveMusicVolumeChanged:(float)arg2;

@end
