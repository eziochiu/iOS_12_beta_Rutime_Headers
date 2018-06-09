/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiagnosticTestReport : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKMedicalDate * _issueDate;
    NSString * _panelName;
    NSArray * _results;
    HKMedicalCoding * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) NSString *panelName;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKMedicalCoding *status;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 diagnosticTestCodings:(id)arg9 panelName:(id)arg10 results:(id)arg11 effectiveStartDate:(id)arg12 status:(id)arg13 effectiveEndDate:(id)arg14 issueDate:(id)arg15;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 status:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)statusPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setPanelName:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)_setStatus:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsTasks;
- (id)diagnosticTestReportType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)panelName;
- (id)results;
- (id)status;
- (id)statusTasks;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
