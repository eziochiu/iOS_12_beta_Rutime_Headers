/* made by EzioChiu.
 */

@protocol _UIVisualEffectSubviewSource <NSObject>

@required

- (_UIVisualEffectBackdropView *)asBackdropView;
- (UIImageView *)asImageView;
- (CALayer *)asLayer;
- (UIView *)asView;
- (_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;

@end
