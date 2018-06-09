/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIConfigurationPreloader : NSObject {
    NSMutableArray * _completionBlocks;
    NSString * _configurationCachePath;
    NSDictionary * _loadedConfiguration;
    SKUIReloadConfigurationOperation * _pendingReloadOperation;
    NSOperationQueue * _workQueue;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, readonly, copy) NSString *configurationCachePath;
@property (readonly) bool hasExistingConfigurationCache;
@property (nonatomic, retain) NSDictionary *loadedConfiguration;
@property (nonatomic, retain) SKUIReloadConfigurationOperation *pendingReloadOperation;
@property (nonatomic, readonly) NSOperationQueue *workQueue;

- (void).cxx_destruct;
- (id)completionBlocks;
- (id)configurationCachePath;
- (void)finishPreloadingConfiguration:(id)arg1 error:(id)arg2;
- (bool)hasExistingConfigurationCache;
- (id)init;
- (id)initWithConfigurationCachePath:(id)arg1;
- (id)loadedConfiguration;
- (id)newReloadConfigurationOperation;
- (id)pendingReloadOperation;
- (void)preloadConfigurationForPurpose:(long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setLoadedConfiguration:(id)arg1;
- (void)setPendingReloadOperation:(id)arg1;
- (id)workQueue;

@end
