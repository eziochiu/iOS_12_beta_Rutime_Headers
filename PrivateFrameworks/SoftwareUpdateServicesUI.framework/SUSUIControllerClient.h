/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {
    bool  _connected;
    NSXPCConnection * _serverConnection;
    bool  _serverIsExiting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectToServerIfNecessary;
- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (void)_noteServerExiting;
- (id)_remoteInterface;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (bool)createKeybagWithSecret:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
