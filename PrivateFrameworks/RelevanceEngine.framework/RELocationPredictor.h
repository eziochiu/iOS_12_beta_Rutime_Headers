/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver> {
    RTRoutineManager * _manager;
    NSMutableDictionary * _routineData;
    NSLock * _routineDataLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (void)addRelevanceEngine:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (id)locationForEngine:(id)arg1 userLocation:(long long)arg2;
- (void)locationManagerDidUpdateLocation:(id)arg1;
- (void)removeRelevanceEngine:(id)arg1;
- (void)update;

@end
