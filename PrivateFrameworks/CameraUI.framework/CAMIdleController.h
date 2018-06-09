/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIdleController : NSObject <CAMPanoramaCaptureRequestDelegate, CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate> {
    NSTimer * _enableIdleTimer;
    bool  _updatingIdleTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_enableIdleTimer, setter=_setEnableIdleTimer:, nonatomic, retain) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (getter=_isIdleTimerIndefinitelyDisabled, nonatomic, readonly) bool idleTimerIndefinitelyDisabled;
@property (readonly) Class superclass;
@property (getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:, nonatomic) bool updatingIdleTimer;

- (void).cxx_destruct;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1;
- (id)_enableIdleTimer;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (bool)_isIdleTimerIndefinitelyDisabled;
- (void)_setEnableIdleTimer:(id)arg1;
- (void)_setUpdatingIdleTimer:(bool)arg1;
- (void)_teardownEnableIdleTimer;
- (void)dealloc;
- (id)init;
- (bool)isUpdatingIdleTimer;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1;
- (void)startUpdatingIdleTimer;
- (void)stillImageRequestDidStopCapturing:(id)arg1;
- (void)stopUpdatingIdleTimer;
- (void)timelapseRequestDidResumeCapturing;
- (void)timelapseRequestDidStartCapturing;
- (void)timelapseRequestDidStopCapturing;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;

@end
