/* made by EzioChiu.
 */

@protocol MTAlarmServer <NSObject>

@required

- (void)addAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkIn;
- (void)dismissAlarmWithIdentifier:(void *)arg1 dismissAction:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAlarmsWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, MTAlarm *, MTAlarm *, NSError *, void*
- (void)removeAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)snoozeAlarmWithIdentifier:(void *)arg1 snoozeAction:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
