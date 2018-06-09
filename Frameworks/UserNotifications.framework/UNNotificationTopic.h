/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;

+ (bool)supportsSecureCoding;
+ (id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;

@end
