/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    NSManagedObjectID * _backingObjectID;
    long long  _changeID;
    long long  _changeType;
    NSManagedObjectID * _changedObjectID;
    NSData * _columns;
    NSSQLEntity * _sqlEntity;
    NSDictionary * _tombstone;
    NSPersistentHistoryTransaction * _transaction;
}

+ (id)_dataMaskForEntity:(id)arg1 andDeltaMask:(struct __CFBitVector { }*)arg2;
+ (id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2;
+ (id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2;
+ (id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)_backingObjectID;
- (void)_setTransaction:(id)arg1;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChangeID:(long long)arg1 transaction:(id)arg2 type:(long long)arg3 tombstone:(id)arg4 columns:(id)arg5 entity:(id)arg6 objectID:(id)arg7;
- (id)initWithChangeID:(long long)arg1 transaction:(id)arg2 type:(long long)arg3 tombstone:(id)arg4 columns:(id)arg5 entity:(id)arg6 objectID:(id)arg7 backingObjectID:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

@end
