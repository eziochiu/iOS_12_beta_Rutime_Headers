/* made by EzioChiu.
 */

@protocol CPLNetworkWatcherDelegate <NSObject>

@required

- (void)networkStateDidChangeForNetworkWatcher:(CPLNetworkWatcher *)arg1;

@end
