/* made by EzioChiu.
 */

@protocol GEODataSession <NSObject>

@required

- (<GEODataSessionTask> *)taskWithRequest:(GEODataRequest *)arg1 rules:(id <GEODataSessionTaskRules>)arg2 delegate:(id <GEODataSessionTaskDelegate>)arg3 delegateQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (<GEODataSessionTask> *)taskWithRequest:(GEODataRequest *)arg1 rules:(id <GEODataSessionTaskRules>)arg2 priority:(float)arg3 delegate:(id <GEODataSessionTaskDelegate>)arg4 delegateQueue:(NSObject<OS_dispatch_queue> *)arg5;

@end
