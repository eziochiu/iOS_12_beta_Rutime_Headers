/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _subscriptions;
    NSArray * _subscriptionsInUse;
}

@property (nonatomic, retain) NSArray *subscriptions;
@property (nonatomic, retain) NSArray *subscriptionsInUse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSubscriptionsInUse:(id)arg1;
- (id)subscriptions;
- (id)subscriptionsInUse;

@end
