/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHandleStatusBarTapAction : BSAction

@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) int statusBarStyleOverride;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithStatusBarStyle:(long long)arg1;
- (id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(int)arg2;
- (id)initWithStatusBarStyleOverride:(int)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)statusBarStyle;
- (int)statusBarStyleOverride;

@end
