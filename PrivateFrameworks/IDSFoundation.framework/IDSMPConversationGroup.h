/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPConversationGroup : NSObject {
    NSData * _applicationData;
    NSData * _forwardingTicket;
    unsigned long long  _generation;
    ENGroupID * _groupID;
    NSDictionary * _groupMembers;
    NSData * _publicKeyData;
    NSString * _sponsorAlias;
}

@property (nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) NSData *forwardingTicket;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, readonly) NSDictionary *groupMembers;
@property (nonatomic, readonly) NSData *publicKeyData;
@property (nonatomic, readonly) NSString *sponsorAlias;

+ (id)conversationGroupWithConversationKey:(id)arg1 fromPublicData:(id)arg2 publicKey:(id)arg3 signature:(id)arg4 groupID:(id)arg5 parent:(id)arg6 parentPublicKey:(id)arg7 forwardingTicket:(id)arg8 sponsor:(id)arg9 error:(id*)arg10;
+ (id)conversationGroupWithParent:(id)arg1 members:(id)arg2 sponsor:(id)arg3 applicationData:(id)arg4 error:(id*)arg5;
+ (id)conversationGroupWithParent:(id)arg1 members:(id)arg2 sponsorAlias:(id)arg3 sponsor:(id)arg4 applicationData:(id)arg5 error:(id*)arg6;
+ (id)conversationGroupWithParent:(id)arg1 sponsor:(id)arg2 deviceIdentity:(id)arg3 groupID:(id)arg4 publicKeyData:(id)arg5 publicData:(id)arg6 signature:(id)arg7 error:(id*)arg8;
+ (id)conversationGroupWithPrivateDataRepresentation:(id)arg1;
+ (id)conversationSponsorPairFromPublicData:(id)arg1 publicKey:(id)arg2 signature:(id)arg3 groupID:(id)arg4 parent:(id)arg5 parentPublicKey:(id)arg6 forwardingTicket:(id)arg7 fullDeviceIdentity:(id)arg8 error:(id*)arg9;

- (void).cxx_destruct;
- (id)applicationData;
- (id)conversationGroupWithUpdatedGroupID:(id)arg1 error:(id*)arg2;
- (id)forwardingTicket;
- (unsigned long long)generation;
- (id)groupID;
- (id)groupMembers;
- (bool)isParentOfGroup:(id)arg1;
- (id)privateDataRepresentationWithError:(id*)arg1;
- (id)publicDataRepresentationWithSponsor:(id)arg1 error:(id*)arg2;
- (id)publicKeyData;
- (id)signAndProtectData:(id)arg1 senderSigningIdentity:(id)arg2 members:(id)arg3 error:(id*)arg4;
- (id)signData:(id)arg1 error:(id*)arg2;
- (id)sponsorAlias;
- (id)verifyAndExposeData:(id)arg1 senderSigningIdentity:(id)arg2 members:(id)arg3 error:(id*)arg4;

@end
