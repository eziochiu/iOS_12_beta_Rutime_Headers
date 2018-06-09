/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEndpoint : NSObject <NSSecureCoding> {
    IDSURI * _URI;
    IDSAccountKeyHistory * _accountKeyHistory;
    NSString * _anonymizedSenderID;
    IDSEndpointCapabilities * _capabilities;
    NSDictionary * _clientData;
    IDSPublicDeviceIdentity * _devicePublicIdentity;
    NSDate * _expireDate;
    IDSMPPublicLegacyIdentity * _publicMessageProtectionIdentity;
    NSData * _pushToken;
    NSDate * _refreshDate;
    NSString * _senderCorrelationIdentifier;
    NSData * _sessionToken;
    bool  _verifiedBusiness;
}

@property (nonatomic, readonly, retain) IDSURI *URI;
@property (nonatomic, readonly) IDSAccountKeyHistory *accountKeyHistory;
@property (nonatomic, readonly) NSString *anonymizedSenderID;
@property (nonatomic, readonly, retain) IDSEndpointCapabilities *capabilities;
@property (nonatomic, readonly) NSDictionary *clientData;
@property (nonatomic, readonly, retain) IDSPublicDeviceIdentity *devicePublicIdentity;
@property (nonatomic, readonly) NSDate *expireDate;
@property (nonatomic, readonly, retain) IDSMPPublicLegacyIdentity *publicMessageProtectionIdentity;
@property (nonatomic, readonly, retain) NSData *pushToken;
@property (nonatomic, readonly) NSDate *refreshDate;
@property (nonatomic, readonly) NSString *senderCorrelationIdentifier;
@property (nonatomic, readonly) NSData *sessionToken;
@property (nonatomic, readonly) bool verifiedBusiness;

+ (id)publicAccountIdentityFromKeyHistory:(id)arg1;
+ (id)publicDeviceIdentityFromClientData:(id)arg1 accountPublicIdentity:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URI;
- (id)accountKeyHistory;
- (id)anonymizedSenderID;
- (id)capabilities;
- (id)clientData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePublicIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)expireDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(bool)arg9 senderCorrelationIdentifier:(id)arg10;
- (id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(bool)arg9 serializedPublicMessageProtectionIdentity:(id)arg10 senderCorrelationIdentifier:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(id)arg1;
- (id)publicMessageProtectionIdentity;
- (id)pushToken;
- (id)refreshDate;
- (id)senderCorrelationIdentifier;
- (id)sessionToken;
- (bool)verifiedBusiness;

@end
