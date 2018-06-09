/* made by EzioChiu.
 */

@protocol IMDCKSyncTokenStore <NSObject>

@required

- (void)migrateKey:(NSString *)arg1 fromDatabase:(NSString *)arg2;
- (void)persistToken:(CKServerChangeToken *)arg1 forKey:(NSString *)arg2;
- (CKServerChangeToken *)tokenForKey:(NSString *)arg1;

@end
