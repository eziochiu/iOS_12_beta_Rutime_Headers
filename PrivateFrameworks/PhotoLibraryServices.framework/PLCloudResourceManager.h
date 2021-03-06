/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourceManager : NSObject {
    bool  _enqueuedOperation;
    NSDate * _lastOperationDate;
    PLCloudResourcePrefetchManager * _prefetchManager;
    PLCloudResourcePruneManager * _pruneManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(bool)arg1;
- (void)startAutomaticPruneIfNecessary;
- (id)statusForDebug:(bool)arg1;
- (void)stop;

@end
