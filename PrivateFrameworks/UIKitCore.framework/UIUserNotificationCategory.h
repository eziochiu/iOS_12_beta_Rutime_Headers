/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _actionsByContext;
    NSString * _identifier;
}

@property (nonatomic, copy) NSDictionary *actionsByContext;
@property (nonatomic, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)actions;
- (id)actionsByContext;
- (id)actionsForContext:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionsByContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActionsByContext:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)validatedCategory;

@end
