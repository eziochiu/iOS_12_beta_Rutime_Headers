/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFForkJoinObservable : SBFObservable {
    NSArray * _observables;
    NSMutableArray * _results;
    unsigned long long  _uncompletedObservableCount;
}

- (void).cxx_destruct;
- (void)_observableFinishedForObserver:(id)arg1;
- (void)_setResult:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithWithObservables:(id)arg1;
- (id)subscribe:(id)arg1;

@end
