/* made by EzioChiu.
 */

@protocol TUConversationManagerXPCClient <TUConversationMediaControllerXPCClient>

@required

- (oneway void)updateConversationsByGroupUUID:(NSDictionary *)arg1;

@end
