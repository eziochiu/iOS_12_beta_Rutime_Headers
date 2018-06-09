/* made by EzioChiu.
 */

@protocol CAMStillImageCaptureDelegate <NSObject>

@optional

- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteStillImageCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)stillImageRequest:(CAMStillImageCaptureRequest *)arg1 didCompleteVideoCaptureWithResult:(CAMVideoCaptureResult *)arg2;
- (void)stillImageRequestDidCompleteCapture:(CAMStillImageCaptureRequest *)arg1 error:(NSError *)arg2;
- (void)stillImageRequestDidStartCapturing:(CAMStillImageCaptureRequest *)arg1 resolvedSettings:(CAMStillImageCaptureResolvedSettings *)arg2;
- (void)stillImageRequestDidStopCapturing:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestDidStopCapturingVideo:(CAMStillImageCaptureRequest *)arg1;
- (void)stillImageRequestWillStartCapturingVideo:(CAMStillImageCaptureRequest *)arg1;

@end
