/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSiriEnabledMonitor : VTEventMonitor {
    bool  _isSiriEnabled;
}

+ (id)sharedInstance;

- (void)_didReceiveSiriSettingChanged:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isEnabled;

@end
