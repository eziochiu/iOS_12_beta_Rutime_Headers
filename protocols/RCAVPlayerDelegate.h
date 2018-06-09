/* made by EzioChiu.
 */

@protocol RCAVPlayerDelegate <NSObject>

@required

- (void)playerCurrentItemDidBecomeReadyToPlay:(RCAVPlayer *)arg1;
- (void)playerCurrentRateDidChange:(RCAVPlayer *)arg1;
- (void)playerCurrentTimeDidChange:(RCAVPlayer *)arg1;
- (void)playerDidBecomeInvalid:(RCAVPlayer *)arg1;

@end
