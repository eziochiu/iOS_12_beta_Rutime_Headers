/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@interface MadGate : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)copyActivationRecord:(id*)arg1;
- (id)copyPCRTToken:(id*)arg1;
- (id)createActivationInfo:(id*)arg1;
- (id)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)createTunnel1SessionInfo:(id*)arg1;
- (bool)deactivateDevice:(id*)arg1;
- (void)dealloc;
- (id)getActivationBuild:(id*)arg1;
- (id)getActivationState:(id*)arg1;
- (bool)handleActivationInfo:(id)arg1 withError:(id*)arg2;
- (bool)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)isDeviceABrick:(id*)arg1;
- (bool)isInFieldCollected:(id*)arg1;
- (bool)isUCRTAvailable:(id*)arg1;
- (id)issueClientCertificateLegacy:(id)arg1 error:(id*)arg2;
- (bool)reactivateDevice:(id*)arg1;
- (bool)recertifyDeviceWithError:(id*)arg1;
- (bool)unbrickDevice:(id*)arg1;

@end
