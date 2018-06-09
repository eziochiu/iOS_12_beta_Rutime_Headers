/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocationCluster : NSObject {
    NSArray * _groups;
    CLLocation * _homeLocation;
    NSArray * _locations;
    unsigned long long  _numOfClusters;
}

@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) CLLocation *homeLocation;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) unsigned long long numOfClusters;

- (void).cxx_destruct;
- (void)calculateHomeLocationFromGroups;
- (void)clusterWithGroups:(id)arg1;
- (id)generateNewGroupsFromGroups:(id)arg1;
- (id)groups;
- (id)homeLocation;
- (id)initWithLocations:(id)arg1;
- (id)locations;
- (unsigned long long)numOfClusters;
- (void)printGroups:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setNumOfClusters:(unsigned long long)arg1;
- (void)startGrouping;
- (void)startKMeans;

@end
