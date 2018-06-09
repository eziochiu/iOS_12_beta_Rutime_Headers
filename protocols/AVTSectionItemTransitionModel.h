/* made by EzioChiu.
 */

@protocol AVTSectionItemTransitionModel <AVTTransitionModel>

@required

- (void)cleanupAfterTransition;
- (UIView *)fromView;
- (void)prepareForTransitionToImage:(UIImage *)arg1;
- (UIView *)toView;

@end
