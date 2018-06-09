/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {
    HMCameraSnapshot * _cameraSnapshot;
    NSURL * _demoSnapshotURL;
}

@property (nonatomic, readonly) HMCameraSnapshot *cameraSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURL *demoSnapshotURL;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)cameraSnapshot;
- (id)demoSnapshotURL;
- (id)initWithSourceFrameInPresentingView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraSnapshot:(id)arg2;
- (id)initWithSourceFrameInPresentingView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3;
- (void)setDemoSnapshotURL:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
