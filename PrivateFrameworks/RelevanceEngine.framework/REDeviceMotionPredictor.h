/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDeviceMotionPredictor : REPredictor {
    CMMotionActivityManager * _activityManager;
    bool  _isStationary;
    unsigned long long  _type;
}

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)_updateWithActivity:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (void)pause;
- (void)resume;

@end
