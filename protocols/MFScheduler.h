/* made by EzioChiu.
 */

@protocol MFScheduler <NSObject>

@required

- (<MFCancelable> *)afterDelay:(void *)arg1 performBlock:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<MFCancelable> *)performCancelableBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MFCancelationToken *, void*
- (void)performSyncBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
