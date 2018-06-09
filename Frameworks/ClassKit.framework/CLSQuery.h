/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSQuery : CLSDataObserver <CLSQuery, NSLocking> {
    id /* block */  _completion;
    bool  _executing;
    long long  _fetchLimit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _results;
    bool  _shouldAddResultsToDataStore;
    bool  _shouldFaultResults;
    NSDate * _startDate;
    unsigned long long  _state;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting) bool executing;
@property (nonatomic) long long fetchLimit;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAddResultsToDataStore;
@property (nonatomic) bool shouldFaultResults;
@property (retain) NSDate *startDate;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2;
+ (id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_faultResultsAndComplete;
- (void)_notifyOfCompletionWithError:(id)arg1;
- (void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;
- (oneway void)clientRemote_invalidate;
- (id /* block */)completion;
- (id)description;
- (long long)fetchLimit;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4;
- (bool)isExecuting;
- (void)lock;
- (void)reset;
- (void)setCompletion:(id /* block */)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFetchLimit:(long long)arg1;
- (void)setShouldAddResultsToDataStore:(bool)arg1;
- (void)setShouldFaultResults:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldAddResultsToDataStore;
- (bool)shouldFaultResults;
- (id)startDate;
- (unsigned long long)state;
- (void)unlock;

@end
