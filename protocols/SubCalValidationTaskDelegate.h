/* made by EzioChiu.
 */

@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>

@required

- (void)subCalValidationTask:(SubCalValidationTask *)arg1 finishedWithError:(NSError *)arg2 calendarName:(NSString *)arg3 calendarData:(NSData *)arg4;

@end
