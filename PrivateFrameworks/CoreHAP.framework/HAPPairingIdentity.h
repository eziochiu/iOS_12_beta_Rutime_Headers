/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingIdentity : HMFPairingIdentity {
    unsigned long long  _permissions;
}

@property (nonatomic, readonly) unsigned long long permissions;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (unsigned long long)permissions;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmd_pairingIdentityWithDictionary:(id)arg1;

- (id)hmd_dictionaryEncoding;

@end
