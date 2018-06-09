/* made by EzioChiu.
 */

@protocol TSUResourceRequest <NSProgressReporting>

@required

- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (unsigned long long)estimatedDownloadSize;
- (void)performResourceAccessAsynchronouslyUsingQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 12: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, id /* block */, void*, void, id /* block */, void*, void*
- (void)performResourceAccessUsingQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSSet *)tags;

@end
