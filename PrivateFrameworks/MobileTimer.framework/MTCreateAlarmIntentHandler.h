/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)confirmMTCreateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTCreateAlarm:(id)arg1 completion:(id /* block */)arg2;

@end
