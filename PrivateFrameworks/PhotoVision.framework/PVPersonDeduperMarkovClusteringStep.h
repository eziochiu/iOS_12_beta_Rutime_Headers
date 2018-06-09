/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVPersonDeduperMarkovClusteringStep : PVPersonDeduperStep

+ (id)markovClustering:(id)arg1 withDistanceBlock:(id /* block */)arg2;

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(id /* block */)arg3 resultBlock:(id /* block */)arg4;
- (id)name;

@end