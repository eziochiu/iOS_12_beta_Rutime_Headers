/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteUserSession : NSObject {
    unsigned long long  _currentBatch;
    CNAutocompleteFetchRequest * _currentRequest;
    <CNFuture> * _duetResultsFuture;
    _CNAutocompleteUserSessionDisplayedResults * _lastDisplayedResults;
    <CNAutocompleteProbeProvider> * _probeProvider;
    NSDate * _requestStartTime;
    NSObject<OS_dispatch_queue> * _syncQueue;
    CNAutocompleteUsageMonitor * _usageMonitor;
}

@property (nonatomic) unsigned long long currentBatch;
@property (nonatomic, retain) CNAutocompleteFetchRequest *currentRequest;
@property (nonatomic, retain) <CNFuture> *duetResultsFuture;
@property (nonatomic, retain) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults;
@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;
@property (nonatomic, retain) NSDate *requestStartTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) CNAutocompleteUsageMonitor *usageMonitor;

- (void).cxx_destruct;
- (void)_resetState;
- (unsigned long long)currentBatch;
- (id)currentRequest;
- (void)didReceiveResults:(id)arg1 forRequest:(id)arg2;
- (void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (id)duetResultsFuture;
- (id)initWithProbeProvider:(id)arg1;
- (id)lastDisplayedResults;
- (id)probeProvider;
- (id)requestStartTime;
- (void)setCurrentBatch:(unsigned long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDuetResultsFuture:(id)arg1;
- (void)setLastDisplayedResults:(id)arg1;
- (void)setRequestStartTime:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setUsageMonitor:(id)arg1;
- (id)syncQueue;
- (id)usageMonitor;
- (void)willStartDuetRequestWithMatchingResultsFuture:(id)arg1;
- (void)willStartExecutingRequest:(id)arg1;

@end
