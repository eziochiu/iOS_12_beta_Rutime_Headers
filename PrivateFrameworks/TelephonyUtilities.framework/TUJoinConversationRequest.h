/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUJoinConversationRequest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _messagesGroupUUID;
    NSSet * _remoteMembers;
    bool  _shouldSuppressInCallUI;
    bool  _videoEnabled;
    bool  _wantsStagingArea;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, copy) NSUUID *messagesGroupUUID;
@property (nonatomic, readonly, copy) NSSet *remoteMembers;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic) bool wantsStagingArea;

+ (id)messagesGroupUUIDFromURLComponents:(id)arg1;
+ (id)remoteMembersFromURLComponents:(id)arg1;
+ (bool)shouldSuppressInCallUIFromURLComponents:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)videoEnabledFromURLComponents:(id)arg1;
+ (bool)wantsStagingAreaFromURLComponents:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;
- (id)initWithRemoteMembers:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isVideoEnabled;
- (id)messagesGroupUUID;
- (id)messagesGroupUUIDQueryItem;
- (id)queryItems;
- (id)remoteMembers;
- (id)remoteMembersQueryItem;
- (void)setMessagesGroupUUID:(id)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setWantsStagingArea:(bool)arg1;
- (bool)shouldSuppressInCallUI;
- (id)shouldSuppressInCallUIQueryItem;
- (id)videoEnabledQueryItem;
- (bool)wantsStagingArea;
- (id)wantsStagingAreaQueryItem;

@end
