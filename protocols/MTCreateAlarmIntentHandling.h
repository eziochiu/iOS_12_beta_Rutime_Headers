/* made by EzioChiu.
 */

@protocol MTCreateAlarmIntentHandling <NSObject>

@required

- (void)handleMTCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTCreateAlarmIntentResponse *, void*

@optional

- (void)confirmMTCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTCreateAlarmIntentResponse *, void*

@end
