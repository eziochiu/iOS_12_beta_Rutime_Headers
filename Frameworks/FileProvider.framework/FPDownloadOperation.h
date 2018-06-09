/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPDownloadOperation : FPActionOperation {
    id /* block */  _downloadCompletionBlock;
    NSFileCoordinator * _fileCoordinator;
    NSArray * _items;
    NSMutableSet * _itemsPendingCoordination;
    NSObject<OS_dispatch_source> * _stitchingTimer;
}

@property (nonatomic, copy) id /* block */ downloadCompletionBlock;

- (void).cxx_destruct;
- (oneway void)cancel;
- (id /* block */)downloadCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)main;
- (void)presendNotifications;
- (void)setDownloadCompletionBlock:(id /* block */)arg1;
- (void)showItemsAsDownloadingEvenIfDownloaded:(bool)arg1;

@end
