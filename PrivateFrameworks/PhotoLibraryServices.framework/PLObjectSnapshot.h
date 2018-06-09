/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLObjectSnapshot : NSObject {
    struct __CFDictionary { } * _indexMaps;
    PLManagedObject * _managedObject;
    NSKnownKeysDictionary * _snapshotValues;
}

@property (nonatomic, readonly, retain) PLManagedObject *managedObject;

+ (struct __CFDictionary { }*)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2;
+ (id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(bool)arg3;

- (id)_allSnapshotValuesDescription;
- (id)_snapshotValueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)filteredIndexesForFilter:(id)arg1;
- (bool)hasSnapshotValueForProperty:(id)arg1;
- (id)indexMapStateForDerivedObject:(id)arg1;
- (id)init;
- (id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(struct __CFDictionary { }*)arg4 useCommitedValues:(bool)arg5;
- (id)managedObject;
- (void)setAssetsSnapshot:(id)arg1;
- (id)snapshotValueForProperty:(id)arg1;

@end
