/* made by EzioChiu.
 */

@protocol WGWidgetViewControllerDelegate <NSObject>

@optional

- (void)remoteViewControllerDidConnectForWidgetViewController:(WGWidgetViewController *)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(WGWidgetViewController *)arg1;

@end
