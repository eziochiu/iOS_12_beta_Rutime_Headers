/* made by EzioChiu.
 */

@protocol PUUserTransformViewDelegate <NSObject>

@required

- (void)userTransformView:(PUUserTransformView *)arg1 didChangeUserAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isUserInteracting:(bool)arg3;

@optional

- (void)userTransformView:(PUUserTransformView *)arg1 didChangeIsUserInteracting:(bool)arg2;
- (bool)userTransformView:(PUUserTransformView *)arg1 shouldReceiveTouchAtPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
