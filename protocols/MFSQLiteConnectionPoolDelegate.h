/* made by EzioChiu.
 */

@protocol MFSQLiteConnectionPoolDelegate <NSObject>

@required

- (MFSQLiteConnection *)newConnectionForConnectionPool:(MFSQLiteConnectionPool *)arg1;

@end
