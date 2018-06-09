/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>

@property (readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NUJSCGImageMetadata *depthMetaData;
@property (readonly) <NUDepthProperties> *depthProperties;

- (id)cameraCalibrationData;
- (id)depthMetaData;
- (id)depthProperties;
- (id)initWithDepthProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end
