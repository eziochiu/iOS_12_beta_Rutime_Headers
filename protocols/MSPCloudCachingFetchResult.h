/* made by EzioChiu.
 */

@protocol MSPCloudCachingFetchResult <NSObject>

@required

- (NSDictionary *)deletedRecordNamesByRecordType;
- (NSDictionary *)records;

@end
