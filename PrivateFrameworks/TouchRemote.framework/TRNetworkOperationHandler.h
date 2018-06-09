/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNetworkOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _joinNetworkHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ joinNetworkHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)initWithJoinNetworkHandler:(id /* block */)arg1;
- (id /* block */)joinNetworkHandler;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setJoinNetworkHandler:(id /* block */)arg1;

@end
