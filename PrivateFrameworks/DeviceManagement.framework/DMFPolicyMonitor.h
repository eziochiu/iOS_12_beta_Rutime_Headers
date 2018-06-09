/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFPolicyMonitor : NSObject {
    NSMutableDictionary * _notificationTokensByRegistrationIdentifier;
    NSObject<OS_dispatch_queue> * _registrationCallbackQueue;
    NSMutableDictionary * _registrationsByIdentifier;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSMutableDictionary *notificationTokensByRegistrationIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (nonatomic, readonly) NSMutableDictionary *registrationsByIdentifier;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)policyMonitor;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_proxyWithRetryCount:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addRegistration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (id)notificationTokensByRegistrationIdentifier;
- (id)registrationCallbackQueue;
- (id)registrationsByIdentifier;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
