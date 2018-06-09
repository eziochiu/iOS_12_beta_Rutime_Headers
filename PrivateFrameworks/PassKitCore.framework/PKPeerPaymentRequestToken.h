/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRequestToken : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _deviceScoreIdentifier;
    NSString * _requestToken;
}

@property (nonatomic, readonly, copy) NSUUID *deviceScoreIdentifier;
@property (nonatomic, readonly, copy) NSString *requestToken;

+ (id)informalRequestToken;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceScoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentRequestToken:(id)arg1;
- (bool)isInformalRequestToken;
- (id)requestToken;

@end