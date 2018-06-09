/* made by EzioChiu.
 */

@protocol FigCameraViewfinderSessionDelegate <NSObject>

@optional

- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(NSData *)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(FigCameraViewfinderSession *)arg1;

@end
