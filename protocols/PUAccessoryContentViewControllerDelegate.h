/* made by EzioChiu.
 */

@protocol PUAccessoryContentViewControllerDelegate <NSObject>

@required

- (void)accessoryContentViewControllerContentBoundsDidChange:(id <PUAccessoryContentViewController>)arg1;
- (UIView *)accessoryContentViewControllerViewHostingGestureRecognizers:(id <PUAccessoryContentViewController>)arg1;

@end
