/* made by EzioChiu.
 */

@protocol SVPlaybackTransitionContext <NSObject>

@required

- (void)completeTransition:(bool)arg1;
- (<SVVideo> *)fromVideo;
- (<SVVideo> *)toVideo;

@end
