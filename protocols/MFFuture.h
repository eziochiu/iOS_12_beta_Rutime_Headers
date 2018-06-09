/* made by EzioChiu.
 */

@protocol MFFuture <MFCancelable>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (bool)isCancelled;
- (bool)isFinished;
- (<MFFuture> *)map:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, id
- (void)onScheduler:(void *)arg1 addFailureBlock:(void *)arg2; // needs 2 arg types, found 7: <MFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onScheduler:(void *)arg1 addSuccessBlock:(void *)arg2; // needs 2 arg types, found 6: <MFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (<MFFuture> *)onScheduler:(void *)arg1 map:(void *)arg2; // needs 2 arg types, found 6: <MFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, id
- (<MFFuture> *)onScheduler:(void *)arg1 recover:(void *)arg2; // needs 2 arg types, found 7: <MFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <MFFuture> *, id /* block */, NSError *, void*
- (<MFFuture> *)onScheduler:(void *)arg1 then:(void *)arg2; // needs 2 arg types, found 6: <MFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <MFFuture> *, id /* block */, id
- (<MFFuture> *)recover:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <MFFuture> *, id /* block */, NSError *, void*
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (<MFFuture> *)then:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <MFFuture> *, id /* block */, id
- (bool)tryCancel;

@end
