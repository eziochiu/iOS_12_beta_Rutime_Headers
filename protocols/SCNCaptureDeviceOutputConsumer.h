/* made by EzioChiu.
 */

@protocol SCNCaptureDeviceOutputConsumer <NSObject>

@required

- (AVCaptureDevice *)captureDevice;
- (void)setCaptureDevice:(AVCaptureDevice *)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
