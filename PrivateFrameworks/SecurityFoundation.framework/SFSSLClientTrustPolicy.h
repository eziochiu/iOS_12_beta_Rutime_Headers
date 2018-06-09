/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id  _sslClientTrustPolicyInternal;
}

@property (nonatomic, copy) NSString *clientName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClientName:(id)arg1;

@end
