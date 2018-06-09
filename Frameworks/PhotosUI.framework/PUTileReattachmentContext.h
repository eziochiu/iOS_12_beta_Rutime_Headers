/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileReattachmentContext : NSObject {
    NSMapTable * __tileControllerVelocities;
    bool  _isTransitioningOverOneUp;
    bool  _isZoomingIn;
}

@property (nonatomic, readonly) NSMapTable *_tileControllerVelocities;
@property (setter=setTransitioningOverOneUp:, nonatomic) bool isTransitioningOverOneUp;
@property (setter=setZoomingIn:, nonatomic) bool isZoomingIn;

- (void).cxx_destruct;
- (id)_tileControllerVelocities;
- (bool)isTransitioningOverOneUp;
- (bool)isZoomingIn;
- (void)setTransitioningOverOneUp:(bool)arg1;
- (void)setVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg1 forTileController:(id)arg2;
- (void)setZoomingIn:(bool)arg1;
- (struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })velocityForTileController:(id)arg1;

@end
