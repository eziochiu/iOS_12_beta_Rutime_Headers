/* made by EzioChiu.
 */

@protocol ML3DatabaseConnectionDelegate <NSObject>

@optional

- (void)connection:(ML3DatabaseConnection *)arg1 didEndDatabaseTransactionAndCommit:(bool)arg2;
- (void)connection:(ML3DatabaseConnection *)arg1 didFailToCloseDatabaseWithError:(NSError *)arg2;
- (void)connection:(ML3DatabaseConnection *)arg1 didFailToOpenDatabaseWithError:(NSError *)arg2;
- (void)connectionDidBeginDatabaseTransaction:(ML3DatabaseConnection *)arg1;
- (void)connectionDidCloseDatabase:(ML3DatabaseConnection *)arg1;
- (void)connectionDidOpenDatabase:(ML3DatabaseConnection *)arg1;
- (void)connectionWillCloseDatabase:(ML3DatabaseConnection *)arg1;
- (void)connectionWillOpenDatabase:(ML3DatabaseConnection *)arg1;

@end
