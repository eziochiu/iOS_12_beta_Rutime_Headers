/* made by EzioChiu.
 */

@protocol AVTFaceTrackerDelegate <NSObject>

@required

- (void)faceTrackerDidUpdate:(AVTFaceTracker *)arg1 trackingInfo:(AVTFaceTrackingInfo *)arg2;

@optional

- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didFailWithError:(NSError *)arg3;
- (void)faceTracker:(AVTFaceTracker *)arg1 session:(ARSession *)arg2 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionInterruptionEnded:(ARSession *)arg2;
- (void)faceTracker:(AVTFaceTracker *)arg1 sessionWasInterrupted:(ARSession *)arg2;
- (void)faceTrackerDidLostTrackingWhileRecording:(AVTFaceTracker *)arg1;

@end
