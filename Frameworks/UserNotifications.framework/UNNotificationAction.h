/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _options;
    NSString * _textInputButtonTitle;
    NSString * _textInputPlaceholder;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *textInputButtonTitle;
@property (nonatomic, readonly, copy) NSString *textInputPlaceholder;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (id)textInputButtonTitle;
- (id)textInputPlaceholder;
- (id)title;
- (id)url;

@end