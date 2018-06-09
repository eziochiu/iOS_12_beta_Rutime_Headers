/* made by EzioChiu.
 */

@protocol DEDNotifier <NSObject>

@required

- (void)cancelNotification;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;
- (void)scheduleNotification;

@end
