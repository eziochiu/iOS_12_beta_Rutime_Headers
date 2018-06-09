/* made by EzioChiu.
 */

@protocol FigCameraViewfinderDelegate <NSObject>

@required

- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidBegin:(FigCameraViewfinderSession *)arg2;
- (void)cameraViewfinder:(FigCameraViewfinder *)arg1 viewfinderSessionDidEnd:(FigCameraViewfinderSession *)arg2;

@end
