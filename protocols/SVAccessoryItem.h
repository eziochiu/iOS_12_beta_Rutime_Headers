/* made by EzioChiu.
 */

@protocol SVAccessoryItem <NSObject>

@required

- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (UIView *)view;

@optional

- (void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id <SVVideoAccessoryItemDisplayModeTransitioning>)arg2;

@end
