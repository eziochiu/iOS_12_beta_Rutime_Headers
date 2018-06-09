/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (void)_release_1;
+ (id)_retain_1;
+ (void)_setStoreInfo1:(id)arg1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (char *)generatedNameSuffix;
+ (void)initialize;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
+ (void)release;
+ (id)retain;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (long long)version;

- (id)URIRepresentation;
- (bool)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)entity;
- (id)entityName;
- (void)finalize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTemporaryID;
- (id)persistentStore;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
