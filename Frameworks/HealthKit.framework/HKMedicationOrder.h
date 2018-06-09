/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationOrder : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _endedDate;
    NSArray * _medicationCodings;
    long long  _numberOfFills;
    NSString * _prescriber;
    NSArray * _reasonCodings;
    NSArray * _reasonEndedCodings;
    HKMedicalCoding * _statusCoding;
    HKMedicalDate * _writtenDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *endedDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationOrderType *medicationOrderType;
@property (readonly) long long numberOfFills;
@property (readonly, copy) NSString *prescriber;
@property (readonly, copy) NSArray *reasonCodings;
@property (readonly, copy) NSArray *reasonEndedCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKMedicalDate *writtenDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 prescriber:(id)arg10 numberOfFills:(long long)arg11 dosages:(id)arg12 earliestDosageDate:(id)arg13 writtenDate:(id)arg14 endedDate:(id)arg15 statusCoding:(id)arg16 reasonCodings:(id)arg17 reasonEndedCodings:(id)arg18;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 prescriber:(id)arg11 numberOfFills:(long long)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 writtenDate:(id)arg15 endedDate:(id)arg16 statusCoding:(id)arg17 reasonCodings:(id)arg18 reasonEndedCodings:(id)arg19;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonEndedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEndedDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setNumberOfFills:(long long)arg1;
- (void)_setPrescriber:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonEndedCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setWrittenDate:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endedDate;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)medicationCodings;
- (id)medicationCodingsTasks;
- (id)medicationOrderType;
- (long long)numberOfFills;
- (id)prescriber;
- (id)reasonCodings;
- (id)reasonCodingsTasks;
- (id)reasonEndedCodings;
- (id)reasonEndedCodingsTasks;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)writtenDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
