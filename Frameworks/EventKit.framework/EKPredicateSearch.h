/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id /* block */  _callback;
    id  _cancellationToken;
    Class  _entityClass;
    bool  _finished;
    bool  _isCancelled;
    NSPredicate * _predicate;
    int  _retryCount;
    EKEventStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

- (void).cxx_destruct;
- (id)_createOSActivity;
- (void)_fetchObjectIDsActualWithCompletion:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_startActivityWithCompletion:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_startActualWithCompletion:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_startFetchObjectIDsActivityWithCompletion:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_startProcessingWithCompletion:(id /* block */)arg1 synchronous:(bool)arg2 processor:(id /* block */)arg3;
- (void)cancel;
- (void)disconnect;
- (id)fetchObjectIDs;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)runSynchronously;
- (id)startWithCompletion:(id /* block */)arg1;
- (void)terminate;

@end
