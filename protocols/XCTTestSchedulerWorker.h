/* made by EzioChiu.
 */

@protocol XCTTestSchedulerWorker <NSObject>

@required

- (void)executeTestIdentifiers:(void *)arg1 skippingTestIdentifiers:(void *)arg2 completionHandler:(void *)arg3 completionQueue:(void *)arg4; // needs 4 arg types, found 9: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, NSObject<OS_dispatch_queue> *
- (void)shutdown;

@end
