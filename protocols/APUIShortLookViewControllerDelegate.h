/* made by EzioChiu.
 */

@protocol APUIShortLookViewControllerDelegate <NSObject>

@optional

- (void)shortLookViewController:(APUIShortLookViewController *)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(bool)arg3 shouldClearAction:(bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(bool)arg3 shouldClearAction:(bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDisplayLongLookWithReason:(long long)arg2;

@end
