/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNTextInputNotificationResponse : UNNotificationResponse {
    NSString * _userText;
}

@property (nonatomic, readonly, copy) NSString *userText;

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)userText;

@end
