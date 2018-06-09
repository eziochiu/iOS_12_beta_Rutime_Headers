/* made by EzioChiu.
 */

@protocol CMKStillImageCaptureRequestDelegate <NSObject>

@optional

- (void)captureController:(CMKCaptureController *)arg1 didCaptureStillImageForRequest:(CMKStillImageCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didCompleteResponse:(CMKStillImageCaptureResponse *)arg2 forStillImageRequest:(CMKStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CMKCaptureController *)arg1 didFinishWriteForResponse:(CMKStillImageCaptureResponse *)arg2 forStillImageRequest:(CMKStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CMKCaptureController *)arg1 didGenerateResponse:(CMKStillImageCaptureResponse *)arg2 forStillImageRequest:(CMKStillImageCaptureRequest *)arg3 error:(NSError *)arg4;
- (void)captureController:(CMKCaptureController *)arg1 willCaptureStillImageForRequest:(CMKStillImageCaptureRequest *)arg2;

@end
