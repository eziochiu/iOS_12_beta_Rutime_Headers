/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore> {
    <FCDerivedPersonalizationData> * _derivedPersonalizationData;
    NSMutableDictionary * _overrideAggregatesByFeatureKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <FCDerivedPersonalizationData> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (id)derivedPersonalizationData;
- (id)init;
- (id)initWithDerivedPersonalizationData:(id)arg1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;
- (id)overrideAggregatesByFeatureKey;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setOverrideAggregatesByFeatureKey:(id)arg1;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(bool)arg5 configurableValues:(id)arg6;

@end
