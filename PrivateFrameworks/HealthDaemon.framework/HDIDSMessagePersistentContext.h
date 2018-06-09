/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSString * _deviceIdentifier;
    bool  _fromRequest;
    NSString * _idsIdentifier;
    unsigned short  _messageID;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (getter=isFromRequest, nonatomic) bool fromRequest;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (void)setDate:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setFromRequest:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
