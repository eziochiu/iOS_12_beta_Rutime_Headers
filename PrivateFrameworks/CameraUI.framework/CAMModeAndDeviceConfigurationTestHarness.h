/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness {
    NSMutableArray * __modeChangeListeners;
}

@property (nonatomic, readonly) NSMutableArray *_modeChangeListeners;

- (void).cxx_destruct;
- (id)_modeChangeListeners;
- (void)handleChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)handleDidCloseViewfinderForReason:(long long)arg1;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (void)handleWillCloseViewfinderForReason:(long long)arg1;
- (void)handleWillOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1;
- (void)registerHandler:(id /* block */)arg1 forChangeToMode:(long long)arg2 devicePosition:(long long)arg3;

@end
