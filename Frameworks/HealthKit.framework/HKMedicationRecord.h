/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _asserter;
    HKMedicalDate * _assertionDate;
    long long  _assertionType;
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    NSArray * _medicationCodings;
    bool  _notTaken;
    NSArray * _reasonForUseCodings;
    NSArray * _reasonsNotTakenCodings;
    HKMedicalCoding * _statusCoding;
}

@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalDate *assertionDate;
@property (readonly) long long assertionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationRecordType *medicationRecordType;
@property (readonly) bool notTaken;
@property (readonly, copy) NSArray *reasonForUseCodings;
@property (readonly, copy) NSArray *reasonsNotTakenCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 assertionType:(long long)arg10 asserter:(id)arg11 assertionDate:(id)arg12 statusCoding:(id)arg13 dosages:(id)arg14 earliestDosageDate:(id)arg15 reasonForUseCodings:(id)arg16 notTaken:(bool)arg17 reasonsNotTakenCodings:(id)arg18 effectiveStartDate:(id)arg19 effectiveEndDate:(id)arg20;
+ (id)medicationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 assertionType:(long long)arg11 asserter:(id)arg12 assertionDate:(id)arg13 statusCoding:(id)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 reasonForUseCodings:(id)arg17 notTaken:(bool)arg18 reasonsNotTakenCodings:(id)arg19 effectiveStartDate:(id)arg20 effectiveEndDate:(id)arg21;
+ (id)reasonForUseCodingsPreferredSystems;
+ (id)reasonsNotTakenCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAsserter:(id)arg1;
- (void)_setAssertionDate:(id)arg1;
- (void)_setAssertionType:(long long)arg1;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setNotTaken:(bool)arg1;
- (void)_setReasonForUseCodings:(id)arg1;
- (void)_setReasonsNotTakenCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)asserter;
- (id)assertionDate;
- (long long)assertionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)medicationCodings;
- (id)medicationCodingsTasks;
- (id)medicationRecordType;
- (bool)notTaken;
- (id)reasonForUseCodings;
- (id)reasonForUseCodingsTasks;
- (id)reasonsNotTakenCodings;
- (id)reasonsNotTakenCodingsTasks;
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
