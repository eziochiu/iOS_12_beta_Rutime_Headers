/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalRecord : HKSample <HDCoding, HKMedicalRecordCodings, NSCopying, NSSecureCoding> {
    HKFHIRIdentifier * _FHIRIdentifier;
    bool  _enteredInError;
    long long  _extractionVersion;
    NSDate * _modifiedDate;
    NSString * _note;
    HKSemanticDate * _sortDate;
}

@property (nonatomic, readonly, copy) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (nonatomic, readonly) bool enteredInError;
@property (nonatomic, readonly) long long extractionVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexKeywords;
@property (nonatomic, readonly) NSArray *medicalRecordCodings;
@property (nonatomic, readonly) NSArray *medicalRecordPreferredSystems;
@property (nonatomic, readonly, copy) NSDate *modifiedDate;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) HKSemanticDate *sortDate;
@property (readonly) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 config:(id /* block */)arg10;
+ (id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3;
+ (id)defaultDisplayString;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRIdentifier;
- (id)_redactedCopyForEnteredInError;
- (id)_redactedCopyForEnteredInErrorWithConfig:(id /* block */)arg1;
- (void)_setEnteredInError:(bool)arg1;
- (void)_setExtractionVersion:(long long)arg1;
- (void)_setFHIRIdentifier:(id)arg1;
- (void)_setModifiedDate:(id)arg1;
- (void)_setNote:(id)arg1;
- (void)_setSortDate:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)enteredInError;
- (long long)extractionVersion;
- (id)fallbackDisplayString;
- (id)indexKeywords;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)modifiedDate;
- (id)note;
- (id)sortDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateDisplayStringWithPreferredForm:(long long)arg1;
- (id)sortDateDisplayStringWithPreferredForm:(long long)arg1 showTime:(bool)arg2;
- (id)sortDateTitle;
- (id)viewControllerTitleDisplayStringWithDateCache:(id)arg1;

@end
