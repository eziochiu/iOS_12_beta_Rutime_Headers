/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {
    <CPLEngineTransportFetchTransportScopeTask> * _fetchTransportScope;
    NSData * _fetchedTransportScope;
    <CPLEngineTransportGetLibraryInfoTask> * _getLibraryInfo;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_fetchTransportScope;
- (void)_getLibraryInfo;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4;
- (void)launch;
- (id)taskIdentifier;

@end
