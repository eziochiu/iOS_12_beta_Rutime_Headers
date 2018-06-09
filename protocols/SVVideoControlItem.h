/* made by EzioChiu.
 */

@protocol SVVideoControlItem <NSObject>

@required

- (void)hide:(bool)arg1 withAnimationCoordinator:(id <SVVideoControlItemAnimating>)arg2;
- (bool)hideable;
- (bool)isVisible;
- (bool)supportsAutoAppearance;

@end
