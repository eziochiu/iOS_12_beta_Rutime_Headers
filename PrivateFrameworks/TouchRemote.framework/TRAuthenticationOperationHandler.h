/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler> {
    TRCompanionAuthOperationHandler * _companionAuthHandler;
    TRProxyAuthOperationHandler * _proxyAuthHandler;
}

@property (nonatomic, retain) TRCompanionAuthOperationHandler *companionAuthHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TRProxyAuthOperationHandler *proxyAuthHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)companionAuthHandler;
- (id)initWithCompanionAuthHandler:(id /* block */)arg1 proxyAuthHandler:(id /* block */)arg2;
- (id)proxyAuthHandler;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setCompanionAuthHandler:(id)arg1;
- (void)setProxyAuthHandler:(id)arg1;

@end
