/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationInAppContextDelegate <NSObject>

@optional

- (void)contextDidDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidEndPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextDidPresentLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillBeginPresentingSecondaryUI:(AKAppleIDAuthenticationInAppContext *)arg1;
- (void)contextWillDismissLoginAlertController:(AKAppleIDAuthenticationInAppContext *)arg1;

@end
