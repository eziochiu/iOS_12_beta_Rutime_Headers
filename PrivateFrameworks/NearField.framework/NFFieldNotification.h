/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFFieldNotification : NSObject <NSSecureCoding> {
    unsigned long long  _notificationType;
    unsigned int  _rfTechnology;
    unsigned short  _typeFSystemCode;
}

@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (id)notificationWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)notificationType;
- (unsigned int)rfTechnology;
- (void)setNotificationType:(unsigned long long)arg1;
- (unsigned short)typeFSystemCode;

@end
