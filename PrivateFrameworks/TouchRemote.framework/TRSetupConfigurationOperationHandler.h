/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupConfigurationOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _configurationHandler;
}

@property (nonatomic, copy) id /* block */ configurationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)configurationHandler;
- (id)initWithConfigurationHandler:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setConfigurationHandler:(id /* block */)arg1;

@end
