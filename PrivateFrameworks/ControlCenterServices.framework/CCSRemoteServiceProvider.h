/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSRemoteServiceProvider : NSObject <CCSRemoteServiceServerProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    CCSModuleRepository * _moduleRepository;
    CCSModuleSettingsProvider * _settingsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resume;

@end
