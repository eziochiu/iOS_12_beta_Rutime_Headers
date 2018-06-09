/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalCodingSystem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _OID;
    NSString * _identifier;
    NSString * _name;
    NSArray * _synonyms;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *OID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *synonyms;
@property (nonatomic) unsigned long long type;

+ (id)CVXSystem;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRConditionVerificationStatus;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)FHIRMedicationDispenseStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRObservationStatus;
+ (id)FHIRProcedureStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)ICD10System;
+ (id)ICD10USSystem;
+ (id)LOINCCodeSystem;
+ (id)NDCSystem;
+ (id)RxNormCodeSystem;
+ (id)SNOMEDCodeSystem;
+ (id)UCUMSystem;
+ (id)codeSystemWithIdentifier:(id)arg1;
+ (id)externalCodeSystems;
+ (bool)supportsSecureCoding;
+ (id)systemWithSystemDefinition:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; })arg1;
+ (id)textSystem;

- (void).cxx_destruct;
- (id)OID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 OID:(id)arg3 type:(unsigned long long)arg4 synonyms:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOID:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)synonyms;
- (unsigned long long)type;

@end
