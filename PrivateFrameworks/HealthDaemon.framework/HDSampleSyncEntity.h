/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleSyncEntity : HDDataSyncEntity

+ (id)_appleWatchSamplesPredicateForSession:(id)arg1;
+ (id)_companionNanoSyncPredicateConjunctionForSession:(id)arg1;
+ (id)_defaultCompanionNanoSyncSampleAgePredicateForSession:(id)arg1;
+ (int)nanoSyncObjectType;
+ (id)nanoSyncPredicateForSession:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;

@end
