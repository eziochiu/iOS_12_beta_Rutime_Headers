/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRow : NSPersistentCacheRow {
    _CDSnapshot * _snapshot;
}

+ (id)allocForSQLEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id*)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(struct _NSScalarObjectID {}**)arg4 andTimestamp:(double)arg5;

- (id)_snapshot_;
- (void)_validateToOnes;
- (unsigned int)_versionNumber;
- (id)attributeValueForSlot:(unsigned int)arg1;
- (id)copy;
- (void)dealloc;
- (id)description;
- (unsigned int)foreignEntityKeyForSlot:(unsigned int)arg1;
- (long long)foreignKeyForSlot:(unsigned int)arg1;
- (unsigned int)foreignOrderKeyForSlot:(unsigned int)arg1;
- (id)initWithSQLEntity:(id)arg1 objectID:(struct _NSScalarObjectID { Class x1; }*)arg2;
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(struct _NSScalarObjectID { Class x1; }*)arg2 andTimestamp:(double)arg3;
- (bool)isEqual:(id)arg1;
- (const id*)knownKeyValuesPointer;
- (struct __CFBitVector { }*)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForToOne:(id)arg1;
- (struct __CFBitVector { }*)newUpdateMaskForConstrainedValues;
- (struct __CFBitVector { }*)newUpdateMaskFrom:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)objectID;
- (long long)optLock;
- (long long)pk64;
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;
- (void)setObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (void)setOptLock:(long long)arg1;
- (id)sqlEntity;
- (unsigned int)sqlEntityID;
- (id)valueForKey:(id)arg1;
- (long long)version;

@end
