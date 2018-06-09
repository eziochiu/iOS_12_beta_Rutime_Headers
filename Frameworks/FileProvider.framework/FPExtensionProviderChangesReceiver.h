/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionProviderChangesReceiver : NSObject <FPItemCollectionDelegate> {
    NSMutableSet * _changesHandlers;
    FPItemCollection * _localStorageCollection;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    NSDictionary * _providersByID;
    int  _settingsChangedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedChangesReceiver;

- (void).cxx_destruct;
- (id)_init;
- (void)_signalLocalStorageUpdate;
- (void)addChangesHandler:(id /* block */)arg1;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* block */)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)providersInfoHasChanged:(id)arg1 error:(id)arg2;
- (void)removeChangesHandler:(id /* block */)arg1;
- (void)updateProviderInfoWithAttemptCount:(unsigned long long)arg1;

@end
