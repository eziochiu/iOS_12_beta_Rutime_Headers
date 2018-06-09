/* made by EzioChiu.
 */

@protocol ISAnimatedImagePlayerDestination <NSObject>

@required

- (void)frameDidChange;
- (bool)isReadyToDisplay;

@optional

- (void)didBeginAnimating;
- (void)didEndAnimating;

@end
