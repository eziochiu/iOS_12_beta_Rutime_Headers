/* made by EzioChiu.
 */

@protocol WGWidgetDiscoveryObserving <NSObject>

@optional

- (void)orderOfVisibleWidgetsDidChange:(WGWidgetDiscoveryController *)arg1;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeHiddenInGroup:(NSString *)arg3;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeVisibleInGroup:(NSString *)arg3;

@end
