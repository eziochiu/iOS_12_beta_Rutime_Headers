/* made by EzioChiu.
 */

@protocol VNClusteringReadOnly

@required

+ (NSArray *)clustererModelFileNamesFromState:(NSData *)arg1 storedInPath:(NSString *)arg2 error:(id*)arg3;
+ (NSDictionary *)getRepresentativenessForFaces:(NSArray *)arg1 error:(id*)arg2;

- (NSData *)getClusterState:(id*)arg1;
- (NSSet *)getClusteredIds:(id*)arg1;
- (NSArray *)getClustersForClusterIds:(NSArray *)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;
- (NSNumber *)getDistanceBetweenLevel0ClustersWithFaceId:(NSNumber *)arg1 andFaceId:(NSNumber *)arg2 error:(id*)arg3;
- (NSDictionary *)getDistanceBetweenLevel1Clusters:(NSArray *)arg1 error:(id*)arg2;
- (NSDictionary *)getDistances:(NSArray *)arg1 to:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(NSNumber *)arg1 error:(id*)arg2;
- (NSNumber *)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (NSArray *)suggestionsForClusterIdsWithFlags:(NSDictionary *)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
