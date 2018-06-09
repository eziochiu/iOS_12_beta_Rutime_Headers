/* made by EzioChiu.
 */

@protocol CPSNavigationAlertQueueDelegate <NSObject>

@required

- (void)navigationAlertQueue:(CPSNavigationAlertQueue *)arg1 shouldDisplayAlertView:(CPSNavigationAlertView *)arg2 animated:(bool)arg3;
- (void)navigationAlertQueue:(CPSNavigationAlertQueue *)arg1 shouldRemoveAlertView:(CPSNavigationAlertView *)arg2 animated:(bool)arg3 dismissalContext:(unsigned long long)arg4;

@end
