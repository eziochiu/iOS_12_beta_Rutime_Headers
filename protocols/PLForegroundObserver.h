/* made by EzioChiu.
 */

@protocol PLForegroundObserver <NSObject>

@required

- (void)foregroundMonitor:(PLForegroundMonitor *)arg1 changedStateToForeground:(bool)arg2 forBundleIdentifier:(NSString *)arg3 context:(id)arg4;

@end
