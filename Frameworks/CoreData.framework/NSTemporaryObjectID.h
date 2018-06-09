/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSTemporaryObjectID : NSManagedObjectID {
    int  _cd_rc;
    int  _counter;
    NSEntityDescription * _entity;
}

+ (void)_release_1;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)classForStore:(id)arg1;
+ (id)initWithEntity:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)initialize;
+ (void)release;
+ (id)retain;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (long long)version;

- (id)URIRepresentation;
- (bool)_isPersistentStoreAlive;
- (id)_referenceData;
- (id)_retainedURIString;
- (void)_setPersistentStore:(id)arg1;
- (id)_storeIdentifier;
- (void)dealloc;
- (id)entity;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTemporaryID;
- (id)persistentStore;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
