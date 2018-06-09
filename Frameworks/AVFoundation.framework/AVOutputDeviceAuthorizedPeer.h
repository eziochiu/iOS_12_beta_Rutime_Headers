/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceAuthorizedPeer : NSObject {
    AVOutputDeviceAuthorizedPeerInternal * _ivars;
}

@property (nonatomic, readonly) bool hasAdministratorPrivileges;
@property (readonly, copy) HAPPairingIdentity *hmd_pairingIdentity;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) NSData *publicKey;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (void)dealloc;
- (bool)hasAdministratorPrivileges;
- (unsigned long long)hash;
- (id)init;
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)peerID;
- (id)publicKey;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_pairingIdentity;

@end
