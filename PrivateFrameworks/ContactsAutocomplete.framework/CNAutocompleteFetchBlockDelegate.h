/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate> {
    id /* block */  _adjustmentHandler;
    id /* block */  _beganNetworkActivityHandler;
    id /* block */  _comparatorHandler;
    id /* block */  _endedNetworkActivityHandler;
    id /* block */  _errorHandler;
    id /* block */  _finishHandler;
    id /* block */  _resultHandler;
    id /* block */  _supplementalResultHandler;
    id /* block */  _willSortHandler;
}

@property (copy) id /* block */ adjustmentHandler;
@property (copy) id /* block */ beganNetworkActivityHandler;
@property (copy) id /* block */ comparatorHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ endedNetworkActivityHandler;
@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ finishHandler;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ resultHandler;
@property (readonly) Class superclass;
@property (copy) id /* block */ supplementalResultHandler;
@property (copy) id /* block */ willSortHandler;

- (void).cxx_destruct;
- (id /* block */)adjustmentHandler;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id /* block */)beganNetworkActivityHandler;
- (id /* block */)comparatorHandler;
- (id /* block */)endedNetworkActivityHandler;
- (id /* block */)errorHandler;
- (id /* block */)finishHandler;
- (bool)respondsToSelector:(SEL)arg1;
- (id /* block */)resultComparatorForAutocompleteFetch:(id)arg1;
- (id /* block */)resultHandler;
- (void)setAdjustmentHandler:(id /* block */)arg1;
- (void)setBeganNetworkActivityHandler:(id /* block */)arg1;
- (void)setComparatorHandler:(id /* block */)arg1;
- (void)setEndedNetworkActivityHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishHandler:(id /* block */)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setSupplementalResultHandler:(id /* block */)arg1;
- (void)setWillSortHandler:(id /* block */)arg1;
- (id /* block */)supplementalResultHandler;
- (id /* block */)willSortHandler;

@end
