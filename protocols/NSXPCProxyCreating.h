/* made by EzioChiu.
 */

@protocol NSXPCProxyCreating

@required

- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (id)synchronousRemoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
