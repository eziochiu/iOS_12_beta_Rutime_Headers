/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _kind;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long kind;

+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(long long)arg1;

@end
