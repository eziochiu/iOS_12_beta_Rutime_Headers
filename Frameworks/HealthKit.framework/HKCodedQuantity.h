/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCodedQuantity : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKMedicalCoding * _comparatorCoding;
    NSString * _rawValue;
    HKMedicalCoding * _unitCoding;
}

@property (nonatomic, readonly, copy) HKMedicalCoding *comparatorCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double doubleValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *rawValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKMedicalCoding *unitCoding;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
+ (id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comparatorCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedValue;
- (id)numberValue;
- (id)rawValue;
- (id)unitCoding;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_shortDisplayStringForComparatorCode:(id)arg1;
- (id)displayString;

@end
