/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    NSMutableSet * _changedKeysSet;
    NSMutableDictionary * _originalValues;
    CKRecord * _record;
    bool  _trackChanges;
    NSMutableDictionary * _values;
}

@property (nonatomic, retain) NSMutableSet *changedKeysSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *originalValues;
@property (nonatomic) CKRecord *record;
@property (readonly) Class superclass;
@property (nonatomic) bool trackChanges;
@property (nonatomic, retain) NSMutableDictionary *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_sanitizeRecordValue:(id)arg1;
- (void)_validateKeyUniquenessForKey:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (id)allKeys;
- (id)changedKeys;
- (id)changedKeysSet;
- (bool)checkProperties:(bool)arg1 withValueCheckBlock:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)record;
- (id)recordID;
- (void)resetChangedKeys;
- (void)setChangedKeysSet:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setTrackChanges:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (bool)trackChanges;
- (id)valueForKey:(id)arg1;
- (id)values;

@end
