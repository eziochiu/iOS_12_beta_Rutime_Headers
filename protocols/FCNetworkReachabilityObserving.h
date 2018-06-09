/* made by EzioChiu.
 */

@protocol FCNetworkReachabilityObserving <NSObject>

@optional

- (void)networkInterfaceDidChange:(FCNetworkReachability *)arg1;
- (void)networkReachabilityDidChange:(FCNetworkReachability *)arg1;
- (void)wifiReachabilityDidChange:(FCNetworkReachability *)arg1;

@end
