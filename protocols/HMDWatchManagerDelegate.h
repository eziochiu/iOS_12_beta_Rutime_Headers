/* made by EzioChiu.
 */

@protocol HMDWatchManagerDelegate <NSObject>

@optional

- (void)watchManager:(HMDWatchManager *)arg1 didAddConnectedWatch:(HMDDevice *)arg2;
- (void)watchManager:(HMDWatchManager *)arg1 didRemoveConnectedWatch:(HMDDevice *)arg2;

@end
