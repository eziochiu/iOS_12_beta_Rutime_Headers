/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor {
    bool  _isVoiceTriggerEnabled;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (bool)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(bool)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isEnabled;

@end
