/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationDispenseRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    HKCodedQuantity * _daysSupplyQuantity;
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _handOverDate;
    NSArray * _medicationCodings;
    HKMedicalDate * _preparationDate;
    HKCodedQuantity * _quantityDispensed;
    HKMedicalCoding * _statusCoding;
}

@property (readonly, copy) HKCodedQuantity *daysSupplyQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *handOverDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationDispenseRecordType *medicationDispenseRecordType;
@property (readonly, copy) HKMedicalDate *preparationDate;
@property (readonly, copy) HKCodedQuantity *quantityDispensed;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 quantityDispensed:(id)arg10 preparationDate:(id)arg11 handOverDate:(id)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 statusCoding:(id)arg15 daysSupplyQuantity:(id)arg16;
+ (id)medicationDispenseRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 quantityDispensed:(id)arg11 preparationDate:(id)arg12 handOverDate:(id)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 statusCoding:(id)arg16 daysSupplyQuantity:(id)arg17;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDaysSupplyQuantity:(id)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setHandOverDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setPreparationDate:(id)arg1;
- (void)_setQuantityDispensed:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysSupplyQuantity;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)handOverDate;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)medicationCodings;
- (id)medicationCodingsTasks;
- (id)medicationDispenseRecordType;
- (id)preparationDate;
- (id)quantityDispensed;
- (id)statusCoding;
- (id)statusCodingTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
