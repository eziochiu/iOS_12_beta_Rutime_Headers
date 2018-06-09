/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _fromRequest;
    NSString * _idsIdentifier;
    NSDictionary * _idsOptions;
    unsigned short  _messageID;
    bool  _processAcked;
    bool  _sendAcked;
    NSSet * _targetDeviceIDs;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSDate *date;
@property (getter=isFromRequest, nonatomic) bool fromRequest;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) NSDictionary *idsOptions;
@property (nonatomic) unsigned short messageID;
@property (nonatomic) bool processAcked;
@property (nonatomic) bool sendAcked;
@property (nonatomic, copy) NSSet *targetDeviceIDs;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)idsOptions;
- (id)initWithCoder:(id)arg1;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (bool)processAcked;
- (bool)sendAcked;
- (void)setDate:(id)arg1;
- (void)setFromRequest:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setIdsOptions:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setProcessAcked:(bool)arg1;
- (void)setSendAcked:(bool)arg1;
- (void)setTargetDeviceIDs:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)targetDeviceIDs;
- (id)userInfo;

@end
