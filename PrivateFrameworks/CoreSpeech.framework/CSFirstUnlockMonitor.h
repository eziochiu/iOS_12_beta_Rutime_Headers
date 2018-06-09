/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSFirstUnlockMonitor : CSEventMonitor {
    bool  _firstUnlocked;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (bool)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(bool)arg1;
- (void)_didReceiveFirstUnlockInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withUnlocked:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isFirstUnlocked;

@end
