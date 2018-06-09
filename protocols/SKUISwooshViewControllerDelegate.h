/* made by EzioChiu.
 */

@protocol SKUISwooshViewControllerDelegate <NSObject>

@optional

- (void)swoosh:(UIViewController *)arg1 didDoubleTapCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 didEndDisplayingCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 didSelectCellAtIndex:(long long)arg2;
- (UIImage *)swoosh:(UIViewController *)arg1 imageForCellAtIndex:(long long)arg2;
- (UIImage *)swoosh:(UIViewController *)arg1 videoThumbnailForCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(UIViewController *)arg1;

@end
