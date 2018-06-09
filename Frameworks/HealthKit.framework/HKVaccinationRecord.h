/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKVaccinationRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    HKMedicalDate * _administrationDate;
    NSArray * _bodySiteCoding;
    NSString * _doseNumber;
    NSString * _doseQuantity;
    HKMedicalDate * _expirationDate;
    bool  _notGiven;
    bool  _patientReported;
    NSString * _performer;
    NSString * _reaction;
    NSArray * _reasonsCodings;
    NSArray * _reasonsNotGivenCodings;
    NSArray * _routeCodings;
    HKMedicalCoding * _statusCoding;
    NSArray * _vaccinationCodings;
}

@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) NSArray *bodySiteCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) bool notGiven;
@property (readonly) bool patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *vaccinationCodings;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySiteCodingPreferredSystems;
+ (id)defaultDisplayString;
+ (id)reasonsCodingsPreferredSystems;
+ (id)reasonsNotGivenCodingsPreferredSystems;
+ (id)routeCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)vaccinationCodingsPreferredSystems;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 vaccinationCodings:(id)arg10 expirationDate:(id)arg11 doseNumber:(id)arg12 doseQuantity:(id)arg13 performer:(id)arg14 bodySiteCoding:(id)arg15 reaction:(id)arg16 notGiven:(bool)arg17 administrationDate:(id)arg18 statusCoding:(id)arg19 patientReported:(bool)arg20 routeCodings:(id)arg21 reasonsCodings:(id)arg22 reasonsNotGivenCodings:(id)arg23;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 vaccinationCodings:(id)arg9 expirationDate:(id)arg10 doseNumber:(id)arg11 doseQuantity:(id)arg12 performer:(id)arg13 bodySiteCoding:(id)arg14 reaction:(id)arg15 notGiven:(bool)arg16 administrationDate:(id)arg17 statusCoding:(id)arg18 patientReported:(bool)arg19 routeCodings:(id)arg20 reasonsCodings:(id)arg21 reasonsNotGivenCodings:(id)arg22;

- (void).cxx_destruct;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setBodySiteCoding:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setNotGiven:(bool)arg1;
- (void)_setPatientReported:(bool)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
- (id)_validateConfiguration;
- (id)administrationDate;
- (id)bodySiteCoding;
- (id)bodySiteCodingTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doseNumber;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (bool)notGiven;
- (bool)patientReported;
- (id)performer;
- (id)reaction;
- (id)reasonsCodings;
- (id)reasonsCodingsTasks;
- (id)reasonsNotGivenCodings;
- (id)reasonsNotGivenCodingsTasks;
- (id)routeCodings;
- (id)routeCodingsTasks;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)vaccinationCodings;
- (id)vaccinationCodingsTasks;
- (id)vaccinationRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
