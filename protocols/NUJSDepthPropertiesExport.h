/* made by EzioChiu.
 */

@protocol NUJSDepthPropertiesExport <JSExport>

@required

- (NUJSAVCameraCalibrationData *)cameraCalibrationData;
- (NUJSCGImageMetadata *)depthMetaData;

@end
