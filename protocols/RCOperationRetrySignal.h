/* made by EzioChiu.
 */

@protocol RCOperationRetrySignal <NSObject>

@required

- (void)onQueue:(void *)arg1 signal:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
