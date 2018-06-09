/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity {
    struct __SecKey { } * _publicKey;
}

@property (nonatomic, readonly) NSData *forwardingTicket;
@property (nonatomic, readonly) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (nonatomic, readonly) NSArray *fullServiceIdentitiesAdmin;
@property (nonatomic, readonly) NSArray *fullServiceIdentitiesSigning;
@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, readonly) struct __SecKey { }*publicKey;

+ (id)clusterWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)clusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4;

- (id)adminServiceIdentityWithType:(long long)arg1;
- (id)clusterByUpdatingGroupID:(id)arg1 error:(id*)arg2;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)forwardingTicket;
- (id)fullAccountIdentity;
- (id)fullServiceIdentitiesAdmin;
- (id)fullServiceIdentitiesSigning;
- (id)groupID;
- (bool)isParentOfCluster:(id)arg1;
- (id)publicAccountClusterWithError:(id*)arg1;
- (struct __SecKey { }*)publicKey;
- (id)rolledClusterWithFullAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id*)arg4;
- (id)signData:(id)arg1 withError:(id*)arg2;
- (id)signingServiceIdentityWithType:(long long)arg1;

@end
