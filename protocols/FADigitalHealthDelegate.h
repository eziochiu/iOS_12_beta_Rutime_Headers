/* made by EzioChiu.
 */

@protocol FADigitalHealthDelegate <NSObject>

@optional

- (void)lockOutViewControllerDidFinishDismissing:(FALockOutViewController *)arg1;
- (bool)sender:(id)arg1 requestsAction:(long long)arg2 withParameters:(NSDictionary *)arg3;

@end
