/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFThrottledObservable : SBFObservable {
    <SBFCancelable> * _delayToken;
    bool  _hasResult;
    double  _interval;
    <SBFObservable> * _observable;
    id  _result;
    unsigned long long  _resultCounter;
    <SBFScheduler> * _scheduler;
}

- (void).cxx_destruct;
- (void)_cancel;
- (void)_clearResult;
- (void)_sendCompletionToObsever:(id)arg1;
- (void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (void)_setDelayToken:(id)arg1;
- (unsigned long long)_setResult:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3;
- (id)subscribe:(id)arg1;

@end
