/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureTransmuter : NSObject {
    NSMutableOrderedSet * _featureValuesCache;
    NSLock * _featureValuesCacheLock;
    REFeatureSet * _inputSet;
    REFeatureMapGenerator * _orderedFeatureMapGenerator;
    NSArray * _orderedFeatures;
    REFeatureMapGenerator * _outputFeatureMapGenerator;
    REFeatureSet * _outputSet;
    REFeatureMap * _scratchValues;
}

- (void).cxx_destruct;
- (id)_buildGraph;
- (bool)_supportedFeature:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3;
- (id)transformFeatureMaps:(id)arg1;

@end
