/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCXPCService : NSObject {
    SBCXPCServiceInterface * _XPCServiceInterface;
    SBCClientConfiguration * _clientConfiguration;
    bool  _connectionConfigured;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly) SBCXPCServiceInterface *XPCServiceInterface;
@property (readonly) SBCClientConfiguration *clientConfiguration;
@property (getter=isConnectionConfigured) bool connectionConfigured;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;

- (void).cxx_destruct;
- (id)XPCServiceInterface;
- (void)_openServiceConnection;
- (void)_serverDidLaunch;
- (id)clientConfiguration;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (bool)isConnectionConfigured;
- (id)newServiceConnection;
- (id)queue;
- (void)setClientConfiguration:(id)arg1;
- (void)setConnectionConfigured:(bool)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
