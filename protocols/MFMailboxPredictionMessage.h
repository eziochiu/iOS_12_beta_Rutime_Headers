/* made by EzioChiu.
 */

@protocol MFMailboxPredictionMessage <NSObject>

@required

- (NSArray *)ccAddressList;
- (long long)conversationID;
- (NSDate *)dateReceived;
- (NSString *)firstSenderAddress;
- (long long)listIDHash;
- (<MFMailboxPredictionMailbox> *)mailbox;
- (NSString *)persistentID;
- (NSString *)subject;
- (NSArray *)toAddressList;

@end
