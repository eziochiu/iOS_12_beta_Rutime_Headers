/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _proxyAuthHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ proxyAuthHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)initWithProxyAuthHandler:(id /* block */)arg1;
- (id /* block */)proxyAuthHandler;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setProxyAuthHandler:(id /* block */)arg1;

@end
