/* made by EzioChiu.
 */

@protocol MSPCloudCachingCKFetchResult <NSObject>

@required

- (NSDictionary *)fetchedDeletedRecordIDsByRecordType;
- (NSDictionary *)fetchedRecords;

@end
