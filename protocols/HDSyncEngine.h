/* made by EzioChiu.
 */

@protocol HDSyncEngine <NSObject>

@required

- (NSArray *)allOrderedSyncEntities;
- (NSDictionary *)allSyncEntitiesByIdentifier;
- (bool)applyAcknowledgedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 error:(id*)arg5;
- (bool)applySyncChange:(id <HDSyncChange>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (bool)getReceivedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (bool)performSyncSession:(HDSyncSession *)arg1 error:(id*)arg2;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id <HDSyncStore>)arg2;
- (void)resetStore:(id <HDSyncStore>)arg1;
- (void)setUnitTest_didCompleteReadTransaction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)unitTest_didCompleteReadTransaction:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
