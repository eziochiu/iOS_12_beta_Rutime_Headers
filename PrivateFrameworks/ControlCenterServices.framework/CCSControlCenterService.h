/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection * _connection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
