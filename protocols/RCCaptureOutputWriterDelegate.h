/* made by EzioChiu.
 */

@protocol RCCaptureOutputWriterDelegate <NSObject>

@required

- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 captureSessionDidTerminateWithError:(NSError *)arg2;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 didFinishWritingToOutputFileAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 didPauseWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 didResumeWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 didStartWritingToOutputFileAtURL:(NSURL *)arg2;
- (void)captureOutputWriter:(RCCaptureOutputWriter *)arg1 willFinishWritingToOutputFileAtURL:(NSURL *)arg2 error:(NSError *)arg3;

@end
