/* made by EzioChiu.
 */

@protocol MFQueryableLibraryAdapter <NSObject>

@required

- (unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (NSDictionary *)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3;
- (NSArray *)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (NSArray *)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3;

@end
