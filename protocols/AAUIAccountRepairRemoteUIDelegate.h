/* made by EzioChiu.
 */

@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>

@required

- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 account:(ACAccount *)arg2 didFinishWithSuccess:(bool)arg3;

@optional

- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 didReceiveObjectModel:(RUIObjectModel *)arg2;
- (NSDictionary *)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 headersForRequest:(NSURLRequest *)arg2;
- (void)accountRepairRemoteUI:(AAUIAccountRepairRemoteUI *)arg1 willPresentModalNavigationController:(UINavigationController *)arg2;
- (void)accountRepairRemoteUIWillAppear:(AAUIAccountRepairRemoteUI *)arg1;
- (void)accountRepairRemoteUIWillDismiss:(AAUIAccountRepairRemoteUI *)arg1;

@end
