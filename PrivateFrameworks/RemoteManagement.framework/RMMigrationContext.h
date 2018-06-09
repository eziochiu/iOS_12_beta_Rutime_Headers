/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMMigrationContext : NSObject {
    NSMutableSet * _deletedCloudObjectIDs;
    NSMutableDictionary * _uniqueIdentifierToCloudObjectID;
    NSMutableDictionary * _uniqueIdentifierToLocalObjectID;
}

- (void).cxx_destruct;
- (bool)applyDeletesToManagedObjectContext:(id)arg1 error:(id*)arg2;
- (id)cloudObjectMatchingLocalObject:(id)arg1 error:(id*)arg2;
- (id)createCloudObjectForLocalObject:(id)arg1;
- (bool)fillCloudObject:(id)arg1 fromLocalObject:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id*)arg4;
- (void)noteDeleteForLocalObjectWithUniqueIdentifier:(id)arg1;

@end
