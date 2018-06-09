/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAllergyReaction : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _manifestionCodings;
    HKMedicalDate * _onsetDate;
    HKMedicalCoding * _severityCoding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *manifestionCodings;
@property (nonatomic, readonly, copy) HKMedicalDate *onsetDate;
@property (nonatomic, readonly, copy) HKMedicalCoding *severityCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
+ (id)manifestationCodingsPreferredSystems;
+ (id)severityCodingPreferredSystems;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)manifestionCodings;
- (id)onsetDate;
- (id)severityCoding;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
