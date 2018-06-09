/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    long long  _cacheLifetimeHint;
    <FCContentContext> * _context;
    NSArray * _resourceIDs;
    NSArray * _resources;
    bool  _shouldDownloadAssets;
}

@property (nonatomic) long long cacheLifetimeHint;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, readonly) NSArray *resourceIDs;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic) bool shouldDownloadAssets;

- (void).cxx_destruct;
- (bool)_shoudUsePermanentURLForResourceID:(id)arg1;
- (long long)cacheLifetimeHint;
- (id)completeFetchOperation;
- (id)context;
- (id)downloadAssetsWithCompletion:(id /* block */)arg1;
- (id)fetchResourcesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2;
- (id)resourceIDs;
- (id)resources;
- (void)setCacheLifetimeHint:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setShouldDownloadAssets:(bool)arg1;
- (bool)shouldDownloadAssets;

@end
