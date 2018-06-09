/* made by EzioChiu.
 */

@protocol CRCameraReaderDelegate <NSObject>

@required

- (void)cameraReader:(CRCameraReader *)arg1 didFailWithError:(NSError *)arg2;
- (void)cameraReaderDidCancel:(CRCameraReader *)arg1;
- (void)cameraReaderDidEnd:(CRCameraReader *)arg1;

@optional

- (void)cameraReader:(CRCameraReader *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraReader:(CRCameraReader *)arg1 didRecognizedNewObjects:(NSArray *)arg2;
- (bool)cameraReader:(CRCameraReader *)arg1 shouldReturnQRCode:(NSString *)arg2;
- (void)cameraReaderDidDisplayMessage:(CRCameraReader *)arg1;
- (void)cameraReaderDidFindTarget:(CRCameraReader *)arg1;
- (void)cameraReaderDidFindTarget:(CRCameraReader *)arg1 withCorners:(NSArray *)arg2;

@end
