/* made by EzioChiu.
 */

@protocol PSUICellularBarcodeScannerCaptureDelegate <AVCaptureMetadataOutputObjectsDelegate>

@optional

- (void)captureSession:(PSUICellularBarcodeScannerView *)arg1 isRunning:(bool)arg2;

@end
