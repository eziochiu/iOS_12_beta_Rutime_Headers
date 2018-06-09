/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder> {
    <CNAutocompleteObservableBuilderBatchingHelper> * _batchingHelper;
    id /* block */  _networkActivityDidStartHandler;
    id /* block */  _networkActivityDidStopHandler;
    double  _networkActivityStartDelay;
    <CNAutocompleteProbeProvider> * _probeProvider;
    <CNScheduler> * _scheduler;
    bool  _supplementalResultsUseNetwork;
}

@property (nonatomic, readonly) <CNAutocompleteObservableBuilderBatchingHelper> *batchingHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ networkActivityDidStartHandler;
@property (nonatomic, copy) id /* block */ networkActivityDidStopHandler;
@property (nonatomic) double networkActivityStartDelay;
@property (nonatomic, readonly) <CNAutocompleteProbeProvider> *probeProvider;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;
@property (nonatomic) bool supplementalResultsUseNetwork;

+ (id)builderWithSearchType:(unsigned long long)arg1 scheduler:(id)arg2 probeProvider:(id)arg3;
+ (bool)supplementalResultsUseNetwork:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addCalendarServerObservable:(id)arg1;
- (void)addContactsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1 doOnTimeout:(id /* block */)arg2;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (id)batchingHelper;
- (id)combineObservablesInBatch:(id)arg1 scheduler:(id)arg2;
- (id)initWithBatchingHelper:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3;
- (id)makeObservable;
- (id /* block */)networkActivityDidStartHandler;
- (id /* block */)networkActivityDidStopHandler;
- (double)networkActivityStartDelay;
- (id)probeObservable:(id)arg1 forPerformanceWithBlock:(id /* block */)arg2;
- (id)probeProvider;
- (id)scheduler;
- (void)setNetworkActivityDidStartHandler:(id /* block */)arg1;
- (void)setNetworkActivityDidStopHandler:(id /* block */)arg1;
- (void)setNetworkActivityStartDelay:(double)arg1;
- (void)setSupplementalResultsUseNetwork:(bool)arg1;
- (bool)supplementalResultsUseNetwork;

@end
