/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKProcedureRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _bodySitesCodings;
    NSArray * _categoryCodings;
    NSArray * _complicationsCodings;
    HKMedicalDate * _executionEndDate;
    HKMedicalDate * _executionStartDate;
    NSArray * _followUpsCodings;
    bool  _notPerformed;
    NSArray * _outcomeCodings;
    NSArray * _performers;
    NSArray * _procedureCodings;
    NSArray * _reasonCodings;
    NSArray * _reasonsNotPerformedCodings;
    HKMedicalCoding * _statusCoding;
}

@property (readonly, copy) NSArray *bodySitesCodings;
@property (readonly, copy) NSArray *categoryCodings;
@property (readonly, copy) NSArray *complicationsCodings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKMedicalDate *executionEndDate;
@property (readonly, copy) HKMedicalDate *executionStartDate;
@property (readonly, copy) NSArray *followUpsCodings;
@property (readonly) unsigned long long hash;
@property (readonly) bool notPerformed;
@property (readonly, copy) NSArray *outcomeCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) NSArray *procedureCodings;
@property (readonly, copy) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy) NSArray *reasonCodings;
@property (readonly, copy) NSArray *reasonsNotPerformedCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)complicationsCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)followUpsCodingsPreferredSystems;
+ (id)outcomeCodingsPreferredSystems;
+ (id)procedureCodingsPreferredSystems;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 procedureCodings:(id)arg9 performers:(id)arg10 executionStartDate:(id)arg11 executionEndDate:(id)arg12 notPerformed:(bool)arg13 statusCoding:(id)arg14 categoryCodings:(id)arg15 reasonCodings:(id)arg16 reasonsNotPerformedCodings:(id)arg17 outcomeCodings:(id)arg18 complicationsCodings:(id)arg19 followUpsCodings:(id)arg20 bodySitesCodings:(id)arg21;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 procedureCodings:(id)arg10 performers:(id)arg11 executionStartDate:(id)arg12 executionEndDate:(id)arg13 notPerformed:(bool)arg14 statusCoding:(id)arg15 categoryCodings:(id)arg16 reasonCodings:(id)arg17 reasonsNotPerformedCodings:(id)arg18 outcomeCodings:(id)arg19 complicationsCodings:(id)arg20 followUpsCodings:(id)arg21 bodySitesCodings:(id)arg22;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonsNotPerformedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySitesCodings:(id)arg1;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setComplicationsCodings:(id)arg1;
- (void)_setExecutionEndDate:(id)arg1;
- (void)_setExecutionStartDate:(id)arg1;
- (void)_setFollowUpsCodings:(id)arg1;
- (void)_setNotPerformed:(bool)arg1;
- (void)_setOutcomeCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setProcedureCodings:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonsNotPerformedCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)bodySitesCodings;
- (id)bodySitesCodingsTasks;
- (id)categoryCodings;
- (id)categoryCodingsTasks;
- (id)complicationsCodings;
- (id)complicationsCodingsTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executionEndDate;
- (id)executionStartDate;
- (id)followUpsCodings;
- (id)followUpsCodingsTasks;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (bool)notPerformed;
- (id)outcomeCodings;
- (id)outcomeCodingsTasks;
- (id)performers;
- (id)procedureCodings;
- (id)procedureCodingsTasks;
- (id)procedureRecordType;
- (id)reasonCodings;
- (id)reasonCodingsTasks;
- (id)reasonsNotPerformedCodings;
- (id)reasonsNotPerformedCodingsTasks;
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
