/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTEnableDisableAlarmIntentHandler : MTAlarmIntentHandler <MTDisableAlarmIntentHandling, MTEnableAlarmIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alarmUserActivityWithDisableIntent:(id)arg1;
- (id)_alarmUserActivityWithEnableIntent:(id)arg1;
- (bool)_enableDisableAlarm:(bool)arg1 alarmIDString:(id)arg2;
- (void)confirmMTDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmMTEnableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTEnableAlarm:(id)arg1 completion:(id /* block */)arg2;

@end
