/* made by EzioChiu.
 */

@protocol _UINavigationBarTitleViewDataSource <NSObject>

@required

- (void)titleView:(UIView<_UINavigationBarAugmentedTitleView> *)arg1 needsUpdatedContentOverlayRects:(_UINavigationBarTitleViewOverlayRects *)arg2;
- (void)titleViewChangedHeight:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedPreferredDisplaySize:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedStandardDisplayItems:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedUnderlayContent:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;

@end
