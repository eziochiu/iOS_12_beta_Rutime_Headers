/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {
    bool  _connected;
    <SUSUICommandLineToolClientDelegate> * _delegate;
    NSXPCConnection * _serverConnection;
    bool  _serverIsExiting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUSUICommandLineToolClientDelegate> *delegate;
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
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)reboot:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(id /* block */)arg2;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(id /* block */)arg2;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(bool)arg2;
- (void)simulateComingFromOTAUpdate;
- (void)toggleSettingsBadge:(bool)arg1;

@end
