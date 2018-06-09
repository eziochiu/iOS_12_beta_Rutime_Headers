/* made by EzioChiu.
 */

@protocol FCPrivateDataSyncManager <NSObject>

@required

- (void)fetchChangesWithContext:(void *)arg1 qualityOfService:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 15: <FCPrivateDataContextInternal> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, id /* block */, void*, void, id /* block */, void*, NSError *, void*
- (bool)isAwaitingFirstSync;
- (bool)isDirty;
- (void)markAsDirty;
- (void)notifyObservers;

@end
