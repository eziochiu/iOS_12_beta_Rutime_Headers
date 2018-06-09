/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClusterObservation : VNObservation {
    NSData * _clusterState;
    NSSet * _clusteredFaceIds;
    NSArray * _clusters;
    NSNumber * _distance;
    NSDictionary * _distancesById;
    NSArray * _groupedClusteredFaceIdsForCluster;
    NSArray * _suggestionsForCluster;
}

@property (nonatomic, retain) NSData *clusterState;
@property (nonatomic, retain) NSSet *clusteredFaceIds;
@property (nonatomic, retain) NSArray *clusters;
@property (nonatomic, retain) NSNumber *distance;
@property (nonatomic, retain) NSDictionary *distancesById;
@property (nonatomic, retain) NSArray *groupedClusteredFaceIdsForCluster;
@property (nonatomic, retain) NSArray *suggestionsForCluster;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clusterState;
- (id)clusteredFaceIds;
- (id)clusters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)distance;
- (id)distancesById;
- (void)encodeWithCoder:(id)arg1;
- (id)groupedClusteredFaceIdsForCluster;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClusterState:(id)arg1;
- (void)setClusteredFaceIds:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setDistancesById:(id)arg1;
- (void)setGroupedClusteredFaceIdsForCluster:(id)arg1;
- (void)setSuggestionsForCluster:(id)arg1;
- (id)suggestionsForCluster;

@end
