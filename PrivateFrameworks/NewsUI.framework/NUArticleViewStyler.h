/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {
    UIColor * _backgroundColor;
    long long  _statusBarStyle;
    UIColor * _tabBarTintColor;
    UIColor * _toolbarTintColor;
    long long  _topBackgroundStatusBarStyle;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, retain) UIColor *tabBarTintColor;
@property (nonatomic, retain) UIColor *toolbarTintColor;
@property (nonatomic, readonly) long long topBackgroundStatusBarStyle;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2;
- (void)setTabBarTintColor:(id)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (long long)statusBarStyle;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tabBarTintColor;
- (id)toolbarTintColor;
- (long long)topBackgroundStatusBarStyle;
- (void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
- (void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;

@end
