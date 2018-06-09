/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationResponse : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    unsigned long long  _actionOptions;
    UNNotification * _notification;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) unsigned long long actionOptions;
@property (nonatomic, readonly, copy) UNNotification *notification;

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;
- (id)actionIdentifier;
- (unsigned long long)actionOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)notification;

@end
