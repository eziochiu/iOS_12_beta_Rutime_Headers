/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCharacteristicType : HKObjectType

- (id)_canoncialUnit;
- (id)_relatedCategoryType;
- (id)_relatedQuantityType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1;
- (bool)_validateBiologicalSex:(id)arg1 error:(id*)arg2;
- (bool)_validateBloodType:(id)arg1 error:(id*)arg2;
- (bool)_validateCharacteristic:(id)arg1 error:(id*)arg2;
- (bool)_validateDateOfBirth:(id)arg1 error:(id*)arg2;
- (bool)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2;
- (bool)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3;
- (bool)_validateWheelchairUse:(id)arg1 error:(id*)arg2;

@end
