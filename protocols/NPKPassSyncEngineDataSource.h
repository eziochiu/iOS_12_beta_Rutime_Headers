/* made by EzioChiu.
 */

@protocol NPKPassSyncEngineDataSource <NSObject>

@required

- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 dataForPassWithUniqueID:(NSString *)arg2;

@end
