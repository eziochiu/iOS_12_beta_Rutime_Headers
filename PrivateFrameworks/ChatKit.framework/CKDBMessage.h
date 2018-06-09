/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDBMessage : NSObject {
    NSString * _address;
    NSDate * _date;
    NSString * _displayName;
    NSString * _groupID;
    NSString * _guid;
    bool  _hasBeenRead;
    long long  _identifier;
    bool  _isAudioMessage;
    bool  _isMadrid;
    bool  _isOutgoing;
    bool  _isVisibleByDefault;
    NSString * _madridAccountGUID;
    NSString * _madridAccountLogin;
    NSAttributedString * _madridAttributedBody;
    NSString * _madridChatGUID;
    NSString * _madridChatIdentifier;
    NSString * _madridRoomname;
    NSString * _madridService;
    long long  _madridType;
    NSMutableArray * _mediaObjects;
    NSString * _plainBody;
    NSArray * _recipients;
    NSString * _subject;
    NSString * _text;
    NSString * _voicemailString;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly, copy) NSString *attachmentText;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool hasAttachments;
@property (nonatomic, readonly) bool hasBeenRead;
@property (nonatomic) long long identifier;
@property (nonatomic, readonly) bool isAudioMessage;
@property (nonatomic, readonly) bool isMadrid;
@property (nonatomic, readonly) bool isOutgoing;
@property (nonatomic, readonly) bool isVisibleByDefault;
@property (nonatomic, readonly) NSString *madridAccountGUID;
@property (nonatomic, readonly) NSString *madridAccountLogin;
@property (nonatomic, readonly) NSAttributedString *madridAttributedBody;
@property (nonatomic, readonly, copy) NSString *madridChatGUID;
@property (nonatomic, readonly) NSString *madridChatIdentifier;
@property (nonatomic, readonly) NSString *madridRoomname;
@property (nonatomic, readonly) NSString *madridService;
@property (nonatomic, readonly) long long madridType;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSString *plainBody;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)address;
- (id)alertImage;
- (id)attachmentText;
- (id)attachmentText:(bool)arg1;
- (id)date;
- (id)description;
- (id)displayName;
- (id)formattedAddress;
- (id)groupID;
- (id)guid;
- (bool)hasAttachments;
- (bool)hasBeenRead;
- (long long)identifier;
- (id)initWithMadridMessageGUID:(id)arg1;
- (id)initWithRecordID:(long long)arg1;
- (bool)isAudioMessage;
- (bool)isMadrid;
- (bool)isOutgoing;
- (bool)isVisibleByDefault;
- (id)madridAccountGUID;
- (id)madridAccountLogin;
- (id)madridAttributedBody;
- (id)madridChatGUID;
- (id)madridChatIdentifier;
- (id)madridRoomname;
- (id)madridService;
- (long long)madridType;
- (id)mediaObjects;
- (id)plainBody;
- (id)previewText;
- (id)recipients;
- (bool)senderIsVoicemail;
- (void)setIdentifier:(long long)arg1;
- (id)subject;
- (id)text;
- (id)voicemailString;

@end
