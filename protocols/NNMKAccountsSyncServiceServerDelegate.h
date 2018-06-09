/* made by EzioChiu.
 */

@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>

@required

- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didChangeAccountSourceType:(NNMKProtoAccountSourceType *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didReceivedWatchAccountsStatus:(NSDictionary *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;

@end
