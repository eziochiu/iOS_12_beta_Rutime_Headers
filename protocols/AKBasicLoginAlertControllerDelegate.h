/* made by EzioChiu.
 */

@protocol AKBasicLoginAlertControllerDelegate <NSObject>

@required

- (void)basicLoginAlertControllerDidDismiss:(AKBasicLoginAlertController *)arg1;
- (void)basicLoginAlertControllerDidPresent:(AKBasicLoginAlertController *)arg1;
- (void)basicLoginAlertControllerWillDismiss:(AKBasicLoginAlertController *)arg1;

@end
