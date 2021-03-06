/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {
    PDDeviceRegistrationServiceCoordinator * _deviceRegistrationServiceCoordinator;
    PKEntitlementWhitelist * _whitelist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceRegistrationServiceCoordinator;
- (id)initWithConnection:(id)arg1;
- (void)performDeviceRegistrationForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)setDeviceRegistrationServiceCoordinator:(id)arg1;

@end
