/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable> {
    CNCancelationToken * _cancelationToken;
    <CNAutocompleteFetchDelegate> * _delegate;
    CNAutocompleteFetchRequest * _fetchRequest;
    unsigned long long  _openNetworkActivityCalls;
    CNAutocompleteQueryResponsePreparer * _responsePreparer;
    <CNScheduler> * _scheduler;
    CNAutocompleteUserSession * _userSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long openNetworkActivityCalls;
@property (readonly) Class superclass;

+ (id)responseScheduler;

- (void).cxx_destruct;
- (id)addDiagnosticLog:(id /* block */)arg1;
- (id)askDelegateToAdjustResults;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)cancel;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4;
- (unsigned long long)openNetworkActivityCalls;
- (void)queueDidEndNetworkActivityMessageForFetch:(id)arg1;
- (void)queueMessageToDelegate:(id /* block */)arg1;
- (void)queueUncancelableMessageToDelegate:(id /* block */)arg1;
- (void)setDuetResultsFuture:(id)arg1;
- (void)setOpenNetworkActivityCalls:(unsigned long long)arg1;
- (id)sortResults;
- (id)suppressResultsWithAddresses:(id)arg1;

@end
