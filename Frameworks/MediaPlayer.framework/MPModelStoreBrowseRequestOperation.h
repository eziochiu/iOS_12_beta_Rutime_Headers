/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {
    bool  _didInitializeTimeoutIntervalAdditions;
    bool  _errorReportingDisabled;
    NSOperation * _individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> * _nestedRequestOperationsGroup;
    NSOperationQueue * _nestedRequestsOperationQueue;
    unsigned long long  _requestType;
    NSMapTable * _sectionsToPendingNestedRequestOperations;
    double  _timeoutIntervalAdditions;
}

- (void).cxx_destruct;
- (id)_nestedRequestsOperationQueue;
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(id /* block */)arg2;
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(id /* block */)arg4;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)cancel;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2;
- (void)execute;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
