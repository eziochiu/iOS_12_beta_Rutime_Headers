/* made by EzioChiu.
 */

@protocol PFDispatchQueueExtending <NSObject>

@required

- (void)installOnQueue:(PFExtendedDispatchQueue *)arg1;
- (void)queue:(void *)arg1 didDequeue:(void *)arg2 skipExecution:(void *)arg3; // needs 3 arg types, found 7: PFExtendedDispatchQueue *, NSObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue:(PFExtendedDispatchQueue *)arg1 didExecute:(NSObject *)arg2;
- (NSObject *)queue:(void *)arg1 receivedDispatchAfter:(void *)arg2; // needs 2 arg types, found 6: PFExtendedDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchAsync:(void *)arg2; // needs 2 arg types, found 6: PFExtendedDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchBarrierAsync:(void *)arg2; // needs 2 arg types, found 6: PFExtendedDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchBarrierSync:(void *)arg2; // needs 2 arg types, found 6: PFExtendedDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchGroup:(void *)arg2 async:(void *)arg3; // needs 3 arg types, found 7: PFExtendedDispatchQueue *, NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchGroup:(void *)arg2 notify:(void *)arg3; // needs 3 arg types, found 7: PFExtendedDispatchQueue *, NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSObject *)queue:(void *)arg1 receivedDispatchSync:(void *)arg2; // needs 2 arg types, found 6: PFExtendedDispatchQueue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)queue:(PFExtendedDispatchQueue *)arg1 skippedExecuting:(NSObject *)arg2;
- (void)queue:(void *)arg1 willEnqueueAsync:(void *)arg2 when:(void *)arg3; // needs 3 arg types, found 7: PFExtendedDispatchQueue *, NSObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSObject<OS_dispatch_group> *, id /* block */, void*
- (void)queue:(PFExtendedDispatchQueue *)arg1 willEnqueueSync:(NSObject *)arg2;
- (void)queue:(PFExtendedDispatchQueue *)arg1 willExecute:(NSObject *)arg2;
- (<PFDispatchQueueExtending> *)queue:(PFExtendedDispatchQueue *)arg1 willTargetQueue:(PFDispatchQueue *)arg2;
- (void)queueDidSuspend:(PFExtendedDispatchQueue *)arg1;
- (void)queueWillResume:(PFExtendedDispatchQueue *)arg1;

@end
