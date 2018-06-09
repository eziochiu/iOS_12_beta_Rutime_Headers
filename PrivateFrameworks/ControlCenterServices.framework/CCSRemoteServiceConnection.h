/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSRemoteServiceConnection : NSObject <CCSRemoteServiceServerProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
