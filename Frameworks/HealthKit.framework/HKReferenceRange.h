/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKReferenceRange : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _referenceRangeIdentifier;
    HKInspectableValueCollection * _valueRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *referenceRangeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKInspectableValueCollection *valueRange;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)referenceRangeIdentifier;
- (id)valueRange;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
