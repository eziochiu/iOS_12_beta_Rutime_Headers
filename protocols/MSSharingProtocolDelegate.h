/* made by EzioChiu.
 */

@protocol MSSharingProtocolDelegate <NSObject>

@required

- (void)sharingProtocol:(MSSharingProtocol *)arg1 didCompleteTransactionWithError:(NSError *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didFailToSendInvitations:(NSArray *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didFindShareState:(NSArray *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;

@end
