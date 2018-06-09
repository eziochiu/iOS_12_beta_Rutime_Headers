/* made by EzioChiu.
 */

@protocol _UIVisualEffectViewSubviewMonitoring <NSObject>

@required

- (void)_view:(UIView *)arg1 willGainDescendent:(UIView *)arg2;
- (void)_view:(UIView *)arg1 willLoseDescendent:(UIView *)arg2;
- (void)_view:(UIView *)arg1 willMoveToWindow:(UIWindow *)arg2;

@end
