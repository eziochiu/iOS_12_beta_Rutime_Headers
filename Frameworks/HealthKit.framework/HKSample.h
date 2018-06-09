/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSample : HKObject <HDCoding, HKDataMetadataObject, NSCopying> {
    double  _endTimestamp;
    HKSampleType * _sampleType;
    double  _startTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (getter=_endTimestamp, setter=_setEndTimestamp:, nonatomic) double endTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (readonly, copy) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (getter=_startTimestamp, setter=_setStartTimestamp:, nonatomic) double startTimestamp;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_newSampleFromDatesWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 config:(id /* block */)arg6;
+ (id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(id /* block */)arg6;
+ (id)_sampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 sampleType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_endTimestamp;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)arg1;
- (long long)_externalSyncObjectCode;
- (id)_init;
- (bool)_requiresPrivateEntitlementForQueries;
- (void)_setEndDate:(id)arg1;
- (void)_setEndTimestamp:(double)arg1;
- (void)_setSampleType:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setStartTimestamp:(double)arg1;
- (void)_setType:(id)arg1;
- (double)_startTimestamp;
- (id)_validateConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)sampleType;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

- (bool)fi_isAfterDate:(id)arg1;
- (bool)fi_isBeforeDate:(id)arg1;
- (bool)fi_overlapsStartDate:(id)arg1 endDate:(id)arg2;
- (bool)fi_spansDate:(id)arg1 useStrictDateLimits:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (id)fiui_dateInterval;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (id)hd_sampleTypesForObjects:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (long long)entityType;
- (id)hd_associatedSampleTypes;
- (id)hd_sampleType;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (id)dataProviderValue;
- (id)detailedReportName;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)subSamplePredicate;
- (id)subSampleSectionTitle;

@end
