/* made by EzioChiu.
 */

@protocol NRMutableStateObserverProtocol

@required

- (id)addObserverQueue:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NRDiffProtocol> *, id
- (void)invalidate;
- (void)removeObserver:(id)arg1;

@end
