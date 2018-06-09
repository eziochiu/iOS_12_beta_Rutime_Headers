/* made by EzioChiu.
 */

@protocol FCAppActivityObserving <NSObject>

@optional

- (void)activityObservingApplicationDidBecomeActive;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationDidFinishLaunching;

@end
