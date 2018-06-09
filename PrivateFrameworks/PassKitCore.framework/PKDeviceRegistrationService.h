/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceRegistrationService : NSObject {
    bool  _isRegistering;
    PKXPCService * _remoteService;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performDeviceRegistrationForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)arg1;

@end
