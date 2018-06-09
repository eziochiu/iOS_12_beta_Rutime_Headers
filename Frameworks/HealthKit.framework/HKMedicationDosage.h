/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationDosage : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _instruction;
    HKMedicalDateInterval * _timingPeriod;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instruction;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKMedicalDateInterval *timingPeriod;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (id)timingPeriod;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
