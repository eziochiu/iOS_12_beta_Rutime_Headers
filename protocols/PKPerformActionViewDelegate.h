/* made by EzioChiu.
 */

@protocol PKPerformActionViewDelegate <NSObject>

@required

- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)shakeCard;

@optional

- (void)performActionView:(UIView<PKPerformActionView> *)arg1 requestsPresentViewController:(UIViewController *)arg2;

@end
