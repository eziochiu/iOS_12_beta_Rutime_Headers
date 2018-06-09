/* made by EzioChiu.
 */

@protocol HFCameraObserver <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate>

@optional

- (void)cameraStream:(HMCameraStream *)arg1 didUpdateAudioStreamSettingWithError:(NSError *)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(HMCameraStreamControl *)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(HMCameraStreamControl *)arg1;

@end
