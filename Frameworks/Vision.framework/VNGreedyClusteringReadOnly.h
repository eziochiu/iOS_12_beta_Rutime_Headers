/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringCancelling, VNClusteringReadOnly> {
    NSString * _cacheFolderPath;
    VNClusteringLogger * _clusteringLogger;
    NSData * _state;
    VNSuggestionsLogger * _suggestionsLogger;
    NSNumber * _thresholdN;
    NSNumber * _thresholdTorso;
    NSString * _type;
    NSNumber * _vectorMapReadOnlyFlagN;
    struct shared_ptr<const vision::mod::FaceClustering> { 
        struct FaceClustering {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl_const;
}

+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg2;
+ (void)addFaceObservations:(id)arg1 withGroupingIdentifiers:(id)arg2 toFaceDescriptorBuffer:(struct ImageDescriptorBufferJoint { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg3;
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3;
+ (id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_parseOptions:(id)arg1 error:(id*)arg2;
- (bool)cancelClustering:(id*)arg1;
- (id)convertUpdatePairsToClusters:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x1; struct pair<long long, long long> {} *x2; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x_3_1_1; } x3; }*)arg1;
- (id)getClusterState:(id*)arg1;
- (id)getClusteredIds:(id*)arg1;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id*)arg2;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (void)initializeLogging;
- (id)maximumFaceIdInModelAndReturnError:(id*)arg1;
- (void)setGreedyClustererFaces_const:(struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
