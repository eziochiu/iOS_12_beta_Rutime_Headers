/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {
    PLManagedObject * _backingManagedObject;
    NSMutableOrderedSet * _ignoredKeys;
    NSMutableDictionary * _modifiedKeyValues;
}

@property (nonatomic, readonly) PLManagedObject *backingManagedObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *ignoredKeys;
@property (nonatomic, retain) NSMutableDictionary *modifiedKeyValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingManagedObject;
- (id)ignoredKeys;
- (id)initWithPLManagedObject:(id)arg1;
- (id)modifiedKeyValues;
- (id)mutableAccessingCopy;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectWithPropertySets:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setIgnoredKeys:(id)arg1;
- (void)setModifiedKeyValues:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
