/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiagnosticTestResult : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _bodySiteCodings;
    NSString * _category;
    NSString * _comments;
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    NSArray * _interpretationCodings;
    HKMedicalDate * _issueDate;
    NSArray * _methodCodings;
    NSArray * _performers;
    NSArray * _referenceRanges;
    HKMedicalCoding * _statusCoding;
    HKInspectableValueCollection * _value;
}

@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *comments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *interpretationCodings;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) NSArray *methodCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) NSArray *referenceRanges;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKInspectableValueCollection *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySiteCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 diagnosticTestCodings:(id)arg9 value:(id)arg10 referenceRanges:(id)arg11 effectiveStartDate:(id)arg12 category:(id)arg13 issueDate:(id)arg14 effectiveEndDate:(id)arg15 statusCoding:(id)arg16 interpretationCodings:(id)arg17 comments:(id)arg18 bodySiteCodings:(id)arg19 methodCodings:(id)arg20 performers:(id)arg21;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 diagnosticTestCodings:(id)arg10 value:(id)arg11 referenceRanges:(id)arg12 effectiveStartDate:(id)arg13 category:(id)arg14 issueDate:(id)arg15 effectiveEndDate:(id)arg16 statusCoding:(id)arg17 interpretationCodings:(id)arg18 comments:(id)arg19 bodySiteCodings:(id)arg20 methodCodings:(id)arg21 performers:(id)arg22;
+ (id)interpretationCodingsPreferredSystems;
+ (id)methodCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setInterpretationCodings:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setMethodCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_validateConfiguration;
- (id)bodySiteCodings;
- (id)bodySiteCodingsTasks;
- (id)category;
- (id)comments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsTasks;
- (id)diagnosticTestResultType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpretationCodings;
- (id)interpretationCodingsTasks;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)methodCodings;
- (id)methodCodingsTasks;
- (id)performers;
- (id)referenceRanges;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
