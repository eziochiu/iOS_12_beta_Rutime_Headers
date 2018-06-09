/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKConditionRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    HKInspectableValue * _abatement;
    NSString * _asserter;
    NSArray * _bodySitesCodings;
    NSArray * _categoryCodings;
    HKMedicalCoding * _clinicalStatusCoding;
    NSArray * _conditionCodings;
    HKInspectableValue * _onset;
    HKMedicalDate * _recordedDate;
    NSArray * _severityCodings;
    HKMedicalCoding * _verificationStatusCoding;
}

@property (readonly, copy) HKInspectableValue *abatement;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) NSArray *bodySitesCodings;
@property (readonly, copy) NSArray *categoryCodings;
@property (readonly, copy) HKMedicalCoding *clinicalStatusCoding;
@property (readonly, copy) NSArray *conditionCodings;
@property (readonly, copy) HKConditionRecordType *conditionRecordType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKInspectableValue *onset;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly, copy) NSArray *severityCodings;
@property (readonly) Class superclass;
@property (readonly, copy) HKMedicalCoding *verificationStatusCoding;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)clinicalStatusCodingPreferredSystems;
+ (id)conditionCodingsPreferredSystems;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 conditionCodings:(id)arg9 categoryCodings:(id)arg10 asserter:(id)arg11 abatement:(id)arg12 onset:(id)arg13 recordedDate:(id)arg14 clinicalStatusCoding:(id)arg15 verificationStatusCoding:(id)arg16 severityCodings:(id)arg17 bodySitesCodings:(id)arg18;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 conditionCodings:(id)arg10 categoryCodings:(id)arg11 asserter:(id)arg12 abatement:(id)arg13 onset:(id)arg14 recordedDate:(id)arg15 clinicalStatusCoding:(id)arg16 verificationStatusCoding:(id)arg17 severityCodings:(id)arg18 bodySitesCodings:(id)arg19;
+ (id)defaultDisplayString;
+ (id)severityCodingsPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)verificationStatusCodingPreferredSystems;

- (void).cxx_destruct;
- (void)_setAbatement:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setBodySitesCodings:(id)arg1;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setClinicalStatusCoding:(id)arg1;
- (void)_setConditionCodings:(id)arg1;
- (void)_setOnset:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (void)_setSeverityCodings:(id)arg1;
- (void)_setVerificationStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)abatement;
- (id)asserter;
- (id)bodySitesCodings;
- (id)bodySitesCodingsTasks;
- (id)categoryCodings;
- (id)categoryCodingsTasks;
- (id)clinicalStatusCoding;
- (id)clinicalStatusCodingTasks;
- (id)conditionCodings;
- (id)conditionCodingsTasks;
- (id)conditionRecordType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)onset;
- (id)recordedDate;
- (id)severityCodings;
- (id)severityCodingsTasks;
- (id)verificationStatusCoding;
- (id)verificationStatusCodingTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
