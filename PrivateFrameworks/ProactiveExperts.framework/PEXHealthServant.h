/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXHealthServant : PEXServant {
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    NSDictionary * _preferredUnitMap;
    HKHealthStore * _store;
}

- (void).cxx_destruct;
- (id)_accumulatedValueForCategorySamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 matchValue:(long long)arg4;
- (id)_accumulatedValueForSamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (id)_accumulatedValueForWorkoutSamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (bool)_allowDecimalForType:(id)arg1;
- (id)_formattedLabelForType:(id)arg1 formatter:(id)arg2;
- (id)_formattedQuantity:(id)arg1 formatter:(id)arg2 allowDecimals:(bool)arg3 scaleUnits:(bool)arg4;
- (void)_getPreferredUnits;
- (void)_handleSampleResults:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 output:(id)arg4 error:(id)arg5;
- (void)_handleSummationResults:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 output:(id)arg4 error:(id)arg5;
- (id)_predicateForSampleType:(id)arg1;
- (id)_quantityInPreferredUnit:(id)arg1 type:(id)arg2;
- (id)_queryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (void)_registerForNotifications;
- (id)_sampleQueryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (id)_sampleTypeForSubfield:(id)arg1;
- (bool)_scaleUnitsForType:(id)arg1;
- (void)_setupHealthKit;
- (bool)_shouldAccumulateSamplesForSubfield:(id)arg1;
- (id)_summationQueryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (id)_supportedQuantityTypes;
- (id)_supportedTypes;
- (id)_valueForSample:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (void)_warmUpFormatters;
- (id)init;
- (unsigned char)loadNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (void)setStore:(id)arg1;
- (id)store;

@end
