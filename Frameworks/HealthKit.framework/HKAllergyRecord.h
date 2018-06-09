/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAllergyRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _allergyCodings;
    NSString * _asserter;
    HKMedicalCoding * _criticalityCoding;
    HKMedicalDate * _lastOccurenceDate;
    HKMedicalDate * _onsetDate;
    NSArray * _reactions;
    HKMedicalDate * _recordedDate;
}

@property (readonly, copy) NSArray *allergyCodings;
@property (readonly, copy) HKAllergyRecordType *allergyRecordType;
@property (readonly, copy) NSString *asserter;
@property (readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKMedicalDate *lastOccurenceDate;
@property (readonly, copy) HKMedicalDate *onsetDate;
@property (readonly, copy) NSArray *reactions;
@property (readonly, copy) HKMedicalDate *recordedDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)allergyCodingsPreferredSystems;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 allergyCodings:(id)arg9 onsetDate:(id)arg10 asserter:(id)arg11 reactions:(id)arg12 criticalityCoding:(id)arg13 lastOccurenceDate:(id)arg14 recordedDate:(id)arg15;
+ (id)allergyRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 allergyCodings:(id)arg10 onsetDate:(id)arg11 asserter:(id)arg12 reactions:(id)arg13 criticalityCoding:(id)arg14 lastOccurenceDate:(id)arg15 recordedDate:(id)arg16;
+ (id)criticalityCodingPreferredSystems;
+ (id)defaultDisplayString;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAllergyCodings:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setCriticalityCoding:(id)arg1;
- (void)_setLastOccurenceDate:(id)arg1;
- (void)_setOnsetDate:(id)arg1;
- (void)_setReactions:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (id)_validateConfiguration;
- (id)allergyCodings;
- (id)allergyCodingsTasks;
- (id)allergyRecordType;
- (id)asserter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticalityCoding;
- (id)criticalityCodingTasks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)lastOccurenceDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)onsetDate;
- (id)reactions;
- (id)recordedDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
