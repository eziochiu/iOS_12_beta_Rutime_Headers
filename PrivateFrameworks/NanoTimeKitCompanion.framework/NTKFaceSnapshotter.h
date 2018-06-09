/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceSnapshotter : NSObject {
    NTKDelayedBlock * _hideSnapshotWindowBlock;
    NTKFaceSnapshottingWindow * _snapshotWindow;
}

- (void).cxx_destruct;
- (void)_hideSnapshotWindow;
- (id)_mainQueue_renderSnapshot;
- (void)_mainQueue_takeSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_showSnapshotWindowForDevice:(id)arg1;
- (void)provideSnapshotOfFace:(id)arg1 completion:(id /* block */)arg2;
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)viewControllerForFace:(id)arg1 withOptions:(id)arg2;

@end
