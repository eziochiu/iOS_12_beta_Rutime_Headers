/* made by EzioChiu.
 */

@protocol HKBundleLoadObserverDelegate <NSObject>

@required

- (void)bundleLoadObserver:(HKBundleLoadObserver *)arg1 loadedClass:(Class)arg2 bundle:(NSBundle *)arg3;

@end
