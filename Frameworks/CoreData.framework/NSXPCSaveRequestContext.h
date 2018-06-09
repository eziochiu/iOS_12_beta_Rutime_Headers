/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCSaveRequestContext : NSObject {
    NSMutableDictionary * _changeCache;
    NSManagedObjectContext * _context;
    bool  _forceUpdates;
    unsigned long long  _interrupts;
    NSDictionary * _metadata;
    NSSaveChangesRequest * _request;
    NSXPCStore * _store;
}

@property (nonatomic, readonly) NSDictionary *changeCache;
@property (nonatomic, readonly) bool forceUpdates;
@property (nonatomic) unsigned long long interrupts;
@property (nonatomic, readonly) NSSet *rowsToDelete;

- (void)_addRowForInsertOrUpdate:(id)arg1;
- (id)_cacheNodePropertiesFromObject:(id)arg1;
- (id)_encodeObjectValues:(id)arg1 options:(unsigned long long)arg2;
- (id)_encodeObjectsForSave:(id)arg1 forDelete:(bool)arg2;
- (void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3;
- (id)changeCache;
- (void)dealloc;
- (bool)forceUpdates;
- (id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(bool)arg4 context:(id)arg5;
- (unsigned long long)interrupts;
- (id)managedObjectContext;
- (id)newEncodedSaveRequest;
- (id)request;
- (id)rowForID:(id)arg1;
- (id)rowsToDelete;
- (void)setInterrupts:(unsigned long long)arg1;

@end
