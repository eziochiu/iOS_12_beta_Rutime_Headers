/* made by EzioChiu.
 */

@protocol _TVRAlertViewDelegate <NSObject>

@required

- (void)alertView:(_TVRAlertView *)arg1 didUpdateText:(NSString *)arg2;
- (void)alertViewDidCancel:(_TVRAlertView *)arg1;

@end
