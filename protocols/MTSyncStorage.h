/* made by EzioChiu.
 */

@protocol MTSyncStorage

@required

- (void)loadPendingChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)savePendingChanges:(NSArray *)arg1;

@end
