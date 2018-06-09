/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPrivacyConsentVoucher : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appAdamID;
    NSString * _providerID;
}

@property (nonatomic, readonly, copy) NSString *appAdamID;
@property (nonatomic, readonly, copy) NSString *providerID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAppAdamID:(id)arg1 providerID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)providerID;

@end
