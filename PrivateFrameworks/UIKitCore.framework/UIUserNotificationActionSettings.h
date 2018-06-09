/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _actionsByContext;
    NSString * _category;
}

@property (nonatomic, copy) NSDictionary *actionsByContext;
@property (nonatomic, copy) NSString *category;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)actions;
- (id)actionsByContext;
- (id)actionsForContext:(unsigned long long)arg1;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCategory:(id)arg1 actionsByContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActionsByContext:(id)arg1;
- (void)setCategory:(id)arg1;
- (id)validatedSettings;

@end
