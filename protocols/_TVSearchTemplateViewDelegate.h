/* made by EzioChiu.
 */

@protocol _TVSearchTemplateViewDelegate <NSObject>

@required

- (<UIFocusEnvironment> *)searchTemplateView:(_TVSearchTemplateView *)arg1 preferredFocusEnvironmentForKeyboard:(UIView *)arg2;

@optional

- (void)searchTemplateView:(_TVSearchTemplateView *)arg1 didAddKeyboard:(UIView *)arg2;
- (void)searchTemplateView:(_TVSearchTemplateView *)arg1 didOffsetOriginForCollectionView:(UICollectionView *)arg2;
- (void)searchTemplateView:(_TVSearchTemplateView *)arg1 didRemoveKeyboard:(UIView *)arg2;
- (void)searchTemplateView:(_TVSearchTemplateView *)arg1 willAddKeyboard:(UIView *)arg2;
- (void)searchTemplateView:(_TVSearchTemplateView *)arg1 willRemoveKeyboard:(UIView *)arg2;

@end
