/* made by EzioChiu.
 */

@protocol TUConversationManagerDataSourceDelegate <NSObject>

@required

- (void)conversationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 oldConversationsByGroupUUID:(NSDictionary *)arg2;
- (void)serverDisconnectedForDataSource:(id <TUConversationManagerDataSource>)arg1;

@end
