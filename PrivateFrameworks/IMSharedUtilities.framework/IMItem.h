/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMItem : NSObject <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSString * _account;
    NSString * _accountID;
    NSString * _balloonBundleID;
    NSDate * _clientSendTime;
    NSString * _cloudKitRecordChangeTag;
    NSString * _cloudKitRecordID;
    NSData * _cloudKitServerChangeTokenBlob;
    long long  _cloudKitSyncState;
    id  _context;
    NSString * _countryCode;
    NSString * _destinationCallerID;
    NSString * _guid;
    NSString * _handle;
    long long  _messageID;
    NSString * _parentChatID;
    NSString * _personCentric;
    NSString * _roomName;
    NSDictionary * _senderInfo;
    NSString * _service;
    unsigned long long  _sortID;
    NSString * _srCloudKitRecordChangeTag;
    NSString * _srCloudKitRecordID;
    long long  _srCloudKitSyncState;
    NSDate * _time;
    long long  _type;
    NSString * _unformattedID;
}

@property (nonatomic, retain) NSString *account;
@property (nonatomic, retain) NSString *accountID;
@property (nonatomic, retain) NSString *balloonBundleID;
@property (nonatomic, retain) NSDate *clientSendTime;
@property (nonatomic, copy) NSString *cloudKitRecordChangeTag;
@property (nonatomic, copy) NSString *cloudKitRecordID;
@property (nonatomic, copy) NSData *cloudKitServerChangeTokenBlob;
@property (nonatomic) long long cloudKitSyncState;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *destinationCallerID;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool isFirstMessageCandidate;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) bool isLastMessageCandidate;
@property (setter=_setMessageID:, nonatomic) long long messageID;
@property (nonatomic, copy) NSString *parentChatID;
@property (nonatomic, retain) NSString *personCentric;
@property (nonatomic, retain) NSString *personCentricID;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) NSString *sender;
@property (nonatomic, retain) NSDictionary *senderInfo;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long sortID;
@property (nonatomic, copy) NSString *srCloudKitRecordChangeTag;
@property (nonatomic, copy) NSString *srCloudKitRecordID;
@property (nonatomic) long long srCloudKitSyncState;
@property (nonatomic, retain) NSDate *time;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSString *unformattedID;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (Class)classForIMItemType:(long long)arg1;
+ (Class)classForMessageItemDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_setMessageID:(long long)arg1;
- (id)account;
- (id)accountID;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)balloonBundleID;
- (id)clientSendTime;
- (id)cloudKitRecordChangeTag;
- (id)cloudKitRecordID;
- (id)cloudKitServerChangeTokenBlob;
- (long long)cloudKitSyncState;
- (id)consumedSessionPayloads;
- (id)context;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)destinationCallerID;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)guid;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12;
- (bool)isAssociatedMessageItem;
- (bool)isBreadcrumb;
- (bool)isEqual:(id)arg1;
- (bool)isFirstMessageCandidate;
- (bool)isFromMe;
- (bool)isLastMessageCandidate;
- (bool)isMessageAcknowledgment;
- (bool)isMessageEdit;
- (bool)isOlderThanItem:(id)arg1;
- (bool)isSticker;
- (long long)messageID;
- (id)parentChatID;
- (id)personCentric;
- (id)personCentricID;
- (id)pluginSessionGUID;
- (id)roomName;
- (id)sender;
- (id)senderInfo;
- (id)service;
- (void)setAccount:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setBalloonBundleID:(id)arg1;
- (void)setClientSendTime:(id)arg1;
- (void)setCloudKitRecordChangeTag:(id)arg1;
- (void)setCloudKitRecordID:(id)arg1;
- (void)setCloudKitServerChangeTokenBlob:(id)arg1;
- (void)setCloudKitSyncState:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDestinationCallerID:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setParentChatID:(id)arg1;
- (void)setPersonCentric:(id)arg1;
- (void)setPersonCentricID:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSortID:(unsigned long long)arg1;
- (void)setSrCloudKitRecordChangeTag:(id)arg1;
- (void)setSrCloudKitRecordID:(id)arg1;
- (void)setSrCloudKitSyncState:(long long)arg1;
- (void)setTime:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedID:(id)arg1;
- (unsigned long long)sortID;
- (id)srCloudKitRecordChangeTag;
- (id)srCloudKitRecordID;
- (long long)srCloudKitSyncState;
- (id)time;
- (long long)type;
- (id)unformattedID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (Class)contextClass;

- (id)_copy;
- (bool)_hasMessageChatItem;
- (bool)_isInvitation;
- (id)_newChatItems;
- (id)_otherHandle;
- (id)_senderHandle;
- (id)_service;
- (id)_serviceHandle;
- (void)_setInvitation:(bool)arg1;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (bool)isIncomingTypingOrCancelTypingMessage;
- (bool)isTypingOrCancelTypingMessage;
- (id)message;
- (bool)shouldGenerateTopLevelChatItem;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

+ (id)createItemWithCKRecord:(id)arg1;
+ (id)groupActionProtobufForCompressedData:(id)arg1;
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;
+ (id)participantChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMMessageItemWithProtoBufFields:(id)arg1 withProtbufData:(id)arg2;
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)protobufForCompressedData:(id)arg1;
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;

- (id)_accountControllerSharedInstance;
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;
- (void)_populateCKRecordWithIMItemFields:(id)arg1;
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;
- (id)_recordFromServerChangeToken;
- (id)_recordIDUsingName:(id)arg1 zoneID:(id)arg2;
- (id)_recordNameUsingSalt:(id)arg1;
- (id)_recordType;
- (bool)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;
- (bool)_usingStingRay;
- (id)compressedProtobufDataForGroupActionItem;
- (id)compressedProtobufDataForGroupTitleChangeItem;
- (id)compressedProtobufDataForLocationShareStatusChangeItem;
- (id)compressedProtobufDataForMessage;
- (id)compressedProtobufDataForMessageActionItem;
- (id)compressedProtobufDataForParticipantChangeItem;
- (id)compressedProtobufDataWithPadding:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (bool)shouldStoreMessage;

@end
