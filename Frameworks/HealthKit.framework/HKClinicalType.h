/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)conditionRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)medicationRecordType;
+ (id)procedureRecordType;
+ (id)vitalSignRecordType;

- (bool)_isClinicalType;

@end
