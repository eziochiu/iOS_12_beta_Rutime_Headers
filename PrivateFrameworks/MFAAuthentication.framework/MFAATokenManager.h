/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
 */

@interface MFAATokenManager : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
