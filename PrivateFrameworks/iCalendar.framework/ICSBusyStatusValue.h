/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSBusyStatusValue : ICSPredefinedValue

+ (id)busyStatusTypeFromCode:(int)arg1;
+ (id)busyStatusValueFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end