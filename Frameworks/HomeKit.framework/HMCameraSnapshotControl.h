/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate> {
    <HMCameraSnapshotControlDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    _HMCameraSnapshotControl * _snapshotControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMCameraSnapshotControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMCameraSnapshot *mostRecentSnapshot;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) _HMCameraSnapshotControl *snapshotControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (id)delegate;
- (void)fetchCameraSnapshotForBulletinContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSnapshotControl:(id)arg1;
- (id)mostRecentSnapshot;
- (id)propertyQueue;
- (void)setDelegate:(id)arg1;
- (void)setSnapshotControl:(id)arg1;
- (id)snapshotControl;
- (void)takeSnapshot;

@end
