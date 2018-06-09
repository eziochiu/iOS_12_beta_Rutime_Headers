/* made by EzioChiu.
 */

@protocol CAMIrisVideoControllerDelegate <NSObject>

@required

- (void)irisVideoController:(CAMIrisVideoController *)arg1 didPersistVideoCaptureResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 request:(CAMStillImageCaptureRequest *)arg4;
- (double)irisVideoController:(CAMIrisVideoController *)arg1 willPersistVideoCaptureResult:(CAMVideoCaptureResult *)arg2 forRequest:(CAMStillImageCaptureRequest *)arg3;

@end
