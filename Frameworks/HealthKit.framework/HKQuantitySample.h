/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySample : HKSample <HDCoding> {
    HDCodableQuantitySample * _codableQuantitySample;
    long long  _count;
    long long  _freezeState;
    HKQuantity * _quantity;
}

@property (setter=_setCodableQuantitySample:, nonatomic, retain) HDCodableQuantitySample *codableQuantitySample;
@property (readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_frozen, setter=_setFrozen:, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_frozen;
- (id)_init;
- (void)_setCodableQuantitySample:(id)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setFreezing;
- (void)_setFrozen:(bool)arg1;
- (void)_setQuantity:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (id)codableQuantitySample;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
+ (id)migrateCodableObject:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;
- (id)dataProviderValue;
- (bool)hasBeatToBeatData;

@end
