/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderOpenAndCloseTransition : NSObject {
    CAMSnapshotView * __snapshotView;
    CAMViewfinderView * __viewfinderView;
    bool  _didEnterBackground;
}

@property (setter=_setSnapshotView:, nonatomic, retain) CAMSnapshotView *_snapshotView;
@property (nonatomic, readonly) CAMViewfinderView *_viewfinderView;
@property (nonatomic) bool didEnterBackground;

- (void).cxx_destruct;
- (void)_closeViewfinder:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(bool)arg1 removedOnCompletion:(bool)arg2;
- (void)_setSnapshotView:(id)arg1;
- (id)_snapshotView;
- (id)_viewfinderView;
- (void)closeAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)closeWithoutBlurring;
- (bool)didEnterBackground;
- (id)initWithViewfinderView:(id)arg1;
- (void)openAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDidEnterBackground:(bool)arg1;

@end
