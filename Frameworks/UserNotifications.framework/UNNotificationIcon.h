/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _name;
    NSString * _path;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *path;

+ (id)iconAtPath:(id)arg1;
+ (id)iconForApplicationIdentifier:(id)arg1;
+ (id)iconNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)path;

@end
