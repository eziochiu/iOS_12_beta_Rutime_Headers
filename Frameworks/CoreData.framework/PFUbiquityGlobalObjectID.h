/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {
    NSString * _entityName;
    unsigned long long  _hash;
    NSManagedObjectID * _managedObjectID;
    NSString * _owningPeerID;
    NSString * _primaryKey;
    unsigned long long  _primaryKeyInteger;
    NSString * _storeName;
}

@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectID *managedObjectID;
@property (nonatomic, readonly) NSString *owningPeerID;
@property (nonatomic, readonly) NSString *primaryKey;
@property (nonatomic, readonly) unsigned long long primaryKeyInteger;
@property (nonatomic, readonly) NSString *storeName;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createCompressedStringWithEntityNameToIndex:(id)arg1 primaryKeyToIndex:(id)arg2 peerIDToIndex:(id)arg3;
- (id)createGlobalIDString;
- (void)dealloc;
- (id)description;
- (id)entityName;
- (unsigned long long)hash;
- (id)init;
- (id)initFromCopyWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 peerID:(id)arg4 andHash:(unsigned long long)arg5 managedObjectID:(id)arg6 primaryKeyInteger:(unsigned long long)arg7;
- (id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4;
- (id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)managedObjectID;
- (id)owningPeerID;
- (id)primaryKey;
- (unsigned long long)primaryKeyInteger;
- (void)setManagedObjectID:(id)arg1;
- (id)storeName;
- (void)updateHash;

@end
