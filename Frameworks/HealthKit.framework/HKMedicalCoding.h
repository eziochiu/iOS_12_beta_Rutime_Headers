/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalCoding : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _code;
    HKMedicalCodingSystem * _codingSystem;
    NSString * _codingVersion;
    NSString * _displayString;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) HKMedicalCodingSystem *codingSystem;
@property (nonatomic, readonly, copy) NSString *codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_ucumUnitWithCode:(id)arg1 displayString:(id)arg2;
+ (id)medicalCodingWithSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)ucum_centimeterUnitCoding;
+ (id)ucum_meterUnitCoding;

- (void).cxx_destruct;
- (id)_validateConfiguration;
- (id)code;
- (id)codingSystem;
- (id)codingVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)codeableRepresentationForMedicalCodings:(id)arg1;
+ (id)createWithCodable:(id)arg1;
+ (id)medicalCodingsWithCodeable:(id)arg1;
+ (id)multipleMedicalCodingsWithCodables:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)formattedDescription;
- (id)formattedTitle;

@end
