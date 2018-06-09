/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    bool  _freeValueOnDealloc;
    id  _generationIdentifier;
    bool  _isCompound;
    bool  _isSingleton;
    bool  _isUnmoored;
    id  _store;
    NSString * _storeIdentifier;
}

+ (bool)identifierIsForNonGenerationalStore:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_expectedStores;
- (id)_generationalComponentForStore:(id)arg1;
- (id)_initWithValue:(id)arg1 singleton:(bool)arg2;
- (void)_makeConcrete:(bool)arg1;
- (bool)_moor:(id)arg1 error:(id*)arg2;
- (id)_retainedPersistentStore;
- (void)_setFreeValue:(bool)arg1;
- (void)_setIsUnmoored:(bool)arg1;
- (void)_setPersistentStoreReference:(id)arg1;
- (id)_storeIdentifier;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2;
- (id)_token;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForNonGenerationalStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundValue:(id)arg1;
- (id)initWithValue:(id)arg1 store:(id)arg2;
- (id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUnmoored;
- (id)persistentStoreCoordinator;
- (oneway void)release;
- (id)retain;

@end
