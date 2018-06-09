/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipants;
    bool  _audioEnabled;
    long long  _avcSessionToken;
    NSUUID * _groupUUID;
    TUHandle * _initiator;
    bool  _locallyCreated;
    NSUUID * _messagesGroupUUID;
    NSSet * _participantHandles;
    NSSet * _remoteMembers;
    long long  _state;
    bool  _videoEnabled;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipants;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) long long avcSessionToken;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (nonatomic, retain) TUHandle *initiator;
@property (getter=isLocallyCreated, nonatomic) bool locallyCreated;
@property (nonatomic, retain) NSUUID *messagesGroupUUID;
@property (nonatomic, copy) NSSet *participantHandles;
@property (nonatomic, copy) NSSet *remoteMembers;
@property (nonatomic) long long state;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (id)emptyConversationWithGroupUUID:(id)arg1;
+ (id)numberFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipants;
- (long long)avcSessionToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;
- (id)initiator;
- (bool)isAudioEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversation:(id)arg1;
- (bool)isLocallyCreated;
- (bool)isRepresentedByRemoteMembers:(id)arg1;
- (bool)isVideoEnabled;
- (id)messagesGroupUUID;
- (id)participantHandles;
- (id)remoteMembers;
- (void)setActiveRemoteParticipants:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAvcSessionToken:(long long)arg1;
- (void)setInitiator:(id)arg1;
- (void)setLocallyCreated:(bool)arg1;
- (void)setMessagesGroupUUID:(id)arg1;
- (void)setParticipantHandles:(id)arg1;
- (void)setRemoteMembers:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (long long)state;

@end
