/* made by EzioChiu.
 */

@protocol nw_listener_inbox_delegate

@required

- (void)handleInbound:(NSObject<OS_nw_connection> *)arg1 addProtocolInbox:(bool)arg2;
- (void)handleInboxCancelComplete:(nw_listener_inbox *)arg1;
- (void)handleInboxFailed:(nw_listener_inbox *)arg1 error:(NSObject<OS_nw_error> *)arg2;

@end
