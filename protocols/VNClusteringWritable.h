/* made by EzioChiu.
 */

@protocol VNClusteringWritable

@required

+ (NSUUID *)nonGroupedGroupID;

- (NSArray *)getClustersWithOptions:(NSDictionary *)arg1 error:(id*)arg2;

@end
