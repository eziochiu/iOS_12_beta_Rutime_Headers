/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RECompanionAppUsagePredictor : REPredictor {
    NSDictionary * _predictions;
}

+ (double)updateInterval;

- (void).cxx_destruct;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (void)update;

@end
