/* made by EzioChiu.
 */

@protocol FigCaptureDisplayLayoutObserver <NSObject>

@required

- (void)layoutMonitor:(FigCaptureDisplayLayoutMonitor *)arg1 didUpdateLayoutWithForegroundApps:(NSArray *)arg2 layoutState:(int)arg3;

@end
