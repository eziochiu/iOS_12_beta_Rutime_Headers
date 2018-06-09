/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSAccountIdentity : NSObject <ENAccountKey> {
    IDSMPFullAccountIdentityCluster * _identityCluster;
}

@property (nonatomic, readonly) IDSMPFullAccountIdentity *accountIdentity;
@property (nonatomic, readonly) IDSPublicAccountIdentity *accountPublicKey;
@property (nonatomic, readonly) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSMPFullAccountIdentityCluster *identityCluster;
@property (nonatomic, readonly) IDSMPFullServiceIdentitySigning *signingIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)accountPublicKey;
- (id)adminIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityCluster;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullCluster:(id)arg1;
- (id)signingIdentity;

@end