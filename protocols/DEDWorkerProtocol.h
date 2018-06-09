/* made by EzioChiu.
 */

@protocol DEDWorkerProtocol <NSObject>

@required

- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)cancelNotificationForSession:(NSString *)arg1;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (void)scheduleNotificationForSession:(NSString *)arg1;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)syncSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (long long)transportType;

@end
