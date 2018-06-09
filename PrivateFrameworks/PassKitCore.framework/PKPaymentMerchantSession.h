/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMerchantSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _domain;
    unsigned long long  _epochTimestamp;
    unsigned long long  _expiresAt;
    NSString * _initiative;
    NSString * _initiativeContext;
    NSString * _merchantIdentifier;
    NSString * _merchantSessionIdentifier;
    NSString * _nonce;
    NSString * _retryNonce;
    NSData * _signature;
    NSArray * _signedFields;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) unsigned long long epochTimestamp;
@property (nonatomic, readonly) unsigned long long expiresAt;
@property (nonatomic, readonly) NSString *initiative;
@property (nonatomic, readonly) NSString *initiativeContext;
@property (nonatomic, readonly) NSString *merchantIdentifier;
@property (nonatomic, readonly) NSString *merchantSessionIdentifier;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSArray *signedFields;

+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (bool)_isModern;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)epochTimestamp;
- (unsigned long long)expiresAt;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 signature:(id)arg8;
- (id)initiative;
- (id)initiativeContext;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentMerchantSession:(id)arg1;
- (id)merchantIdentifier;
- (id)merchantSessionIdentifier;
- (id)nonce;
- (id)protobuf;
- (id)retryNonce;
- (void)setRetryNonce:(id)arg1;
- (id)signature;
- (id)signedData;
- (id)signedFields;
- (bool)supportsURL:(id)arg1;

@end
