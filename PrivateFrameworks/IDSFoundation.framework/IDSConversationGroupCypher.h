/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSConversationGroupCypher : NSObject <ENCypher> {
    IDSMPConversationGroup * _conversationGroup;
    IDSDeviceIdentity * _deviceIdentity;
    NSArray * _participants;
}

@property (nonatomic, retain) IDSMPConversationGroup *conversationGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IDSDeviceIdentity *deviceIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSArray *participants;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_memberList;
- (id)conversationGroup;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5;
- (id)deviceIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationGroup:(id)arg1 deviceIdentity:(id)arg2 participants:(id)arg3;
- (id)participants;
- (void)setConversationGroup:(id)arg1;
- (void)setParticipants:(id)arg1;

@end
