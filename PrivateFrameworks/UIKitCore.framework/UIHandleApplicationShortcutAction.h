/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic, readonly, copy) SBSApplicationShortcutItem *sbsShortcutItem;
@property (nonatomic, readonly, copy) UIApplicationShortcutItem *uiShortcutItem;

- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)sbsShortcutItem;
- (id)uiShortcutItem;

@end
