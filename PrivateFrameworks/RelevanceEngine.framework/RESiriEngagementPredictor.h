/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver> {
    NSString * _lastSiriDomain;
    REUpNextTimer * _siriDecayTimer;
    float  _siriInfluence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;

@end