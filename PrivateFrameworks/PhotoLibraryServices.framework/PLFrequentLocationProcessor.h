/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFrequentLocationProcessor : NSObject

+ (id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(id /* block */)arg2;
+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(id /* block */)arg4;
+ (id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(id /* block */)arg2;
+ (id)_dateIntervalForItems:(id)arg1;
+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(id /* block */)arg3;

@end
