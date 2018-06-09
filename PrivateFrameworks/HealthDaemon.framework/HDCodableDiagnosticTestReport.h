/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableDiagnosticTestReport : PBCodable <HDDecoding, NSCopying> {
    HDCodableMedicalCodingList * _diagnosticTestCodings;
    NSData * _effectiveEndDate;
    NSData * _effectiveStartDate;
    NSData * _issueDate;
    HDCodableMedicalRecord * _medicalRecord;
    NSString * _panelName;
    HDCodableFHIRIdentifierList * _results;
    HDCodableMedicalCoding * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDCodableMedicalCodingList *diagnosticTestCodings;
@property (nonatomic, retain) NSData *effectiveEndDate;
@property (nonatomic, retain) NSData *effectiveStartDate;
@property (nonatomic, readonly) bool hasDiagnosticTestCodings;
@property (nonatomic, readonly) bool hasEffectiveEndDate;
@property (nonatomic, readonly) bool hasEffectiveStartDate;
@property (nonatomic, readonly) bool hasIssueDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasPanelName;
@property (nonatomic, readonly) bool hasResults;
@property (nonatomic, readonly) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *issueDate;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) NSString *panelName;
@property (nonatomic, retain) HDCodableFHIRIdentifierList *results;
@property (nonatomic, retain) HDCodableMedicalCoding *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTestCodings;
- (id)dictionaryRepresentation;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (bool)hasDiagnosticTestCodings;
- (bool)hasEffectiveEndDate;
- (bool)hasEffectiveStartDate;
- (bool)hasIssueDate;
- (bool)hasMedicalRecord;
- (bool)hasPanelName;
- (bool)hasResults;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueDate;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)panelName;
- (bool)readFrom:(id)arg1;
- (id)results;
- (void)setDiagnosticTestCodings:(id)arg1;
- (void)setEffectiveEndDate:(id)arg1;
- (void)setEffectiveStartDate:(id)arg1;
- (void)setIssueDate:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setPanelName:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)writeTo:(id)arg1;

@end
