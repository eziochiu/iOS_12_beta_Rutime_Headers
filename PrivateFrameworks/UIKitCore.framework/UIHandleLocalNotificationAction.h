/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHandleLocalNotificationAction : BSAction

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) UILocalNotification *notification;
@property (nonatomic, readonly, copy) NSDictionary *userResponse;

- (long long)UIActionType;
- (id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(id /* block */)arg5;
- (id)action;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithNotification:(id)arg1;
- (id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(id /* block */)arg3;
- (id)initWithNotification:(id)arg1 withHandler:(id /* block */)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notification;
- (id)userResponse;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
