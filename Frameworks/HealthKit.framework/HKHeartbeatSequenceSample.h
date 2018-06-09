/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartbeatSequenceSample : HKSample <_HKBinarySample> {
    NSNumber * _cachedMaxBeatsPerMinute;
    NSNumber * _cachedMinBeatsPerMinute;
    NSData * _heartbeatData;
    long long  _numberOfDataPoints;
}

@property (readonly) NSNumber *_maximumBeatsPerMinute;
@property (readonly) NSNumber *_minimumBeatsPerMinute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long numberOfDataPoints;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)heartBeatSequenceSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id*)arg4;
+ (id)heartbeatSequenceSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
- (id)_maximumBeatsPerMinute;
- (id)_minimumBeatsPerMinute;
- (void)_setPayload:(id)arg1;
- (id)_validateConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHeartbeatDataWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)numberOfDataPoints;
- (id)payload;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sequenceChartData;

@end
