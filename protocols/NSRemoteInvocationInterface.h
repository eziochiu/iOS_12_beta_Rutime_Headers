/* made by EzioChiu.
 */

@protocol NSRemoteInvocationInterface

@required

- (void)remoteInvocation:(void *)arg1 sessionManager:(void *)arg2 invocationHandler:(void *)arg3; // needs 3 arg types, found 8: NSObject<OS_xpc_object> *, ROCKSessionManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
