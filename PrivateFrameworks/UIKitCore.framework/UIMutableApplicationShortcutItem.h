/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMutableApplicationShortcutItem : UIApplicationShortcutItem

@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, copy) UIApplicationShortcutIcon *icon;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
