/* made by EzioChiu.
 */

@protocol BSSqliteDatabaseConnectionObserver <NSObject>

@optional

- (void)sqliteDatabaseConnectionWillClose:(BSSqliteDatabaseConnection *)arg1;

@end
