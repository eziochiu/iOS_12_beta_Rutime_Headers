/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalDateInterval : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKMedicalDate * _endDate;
    HKMedicalDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HKMedicalDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKMedicalDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
