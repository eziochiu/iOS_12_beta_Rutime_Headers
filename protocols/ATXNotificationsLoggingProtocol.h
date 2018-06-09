/* made by EzioChiu.
 */

@protocol ATXNotificationsLoggingProtocol

@required

- (void)logEvent:(long long)arg1 forNotificationId:(NSString *)arg2 supplementaryAction:(NSString *)arg3 timestamp:(NSDate *)arg4;
- (void)logEvent:(long long)arg1 forNotificationId:(NSString *)arg2 timestamp:(NSDate *)arg3;
- (void)logNotification:(ATXNotificationsInterface *)arg1 withNotificationId:(NSString *)arg2 timestamp:(NSDate *)arg3;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(NSString *)arg2;
- (void)logTapCoalesceForNotificationId:(NSString *)arg1 andBundleId:(NSString *)arg2 timestamp:(NSDate *)arg3;
- (void)makePromotingSuggestionForNextNotification;
- (void)makeQuietingSuggestionForNextNotification;
- (void)makeSuggestionForNextNotification;
- (void)promotingSuggestionResponse:(NSString *)arg1 topic:(NSString *)arg2 response:(long long)arg3;
- (void)quietingSuggestionResponse:(NSString *)arg1 topic:(NSString *)arg2 response:(long long)arg3;
- (void)shouldMakePromotingSuggestionForBundleId:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, void*
- (void)shouldMakePromotingSuggestionForNotificationGroup:(void *)arg1 topic:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)shouldMakeQuietingSuggestionForBundleId:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, void*
- (void)shouldMakeQuietingSuggestionForNotificationGroup:(void *)arg1 topic:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
