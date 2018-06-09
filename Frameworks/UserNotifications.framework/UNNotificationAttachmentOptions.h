/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>

+ (Class)optionsClassForFamily:(unsigned long long)arg1;
+ (id)optionsClasses;
+ (id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2;
+ (id)optionsFromOptionsDictionary:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })santizedClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
