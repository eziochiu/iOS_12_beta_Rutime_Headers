/* made by EzioChiu.
 */

@protocol SBFObservable <NSObject>

@required

- (<SBFObservable> *)generate:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, void*
- (<SBFObservable> *)map:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, id
- (<SBFObservable> *)observeOn:(id <SBFScheduler>)arg1;
- (<SBFCancelable> *)subscribe:(id <SBFObserver>)arg1;
- (<SBFObservable> *)subscribeOn:(id <SBFScheduler>)arg1;
- (<SBFCancelable> *)subscribeWithResultBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (<SBFCancelable> *)subscribeWithResultBlock:(void *)arg1 completionBlock:(void *)arg2 failureBlock:(void *)arg3; // needs 3 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (<SBFObservable> *)throttle:(double)arg1 onScheduler:(id <SBFScheduler>)arg2;

@end
