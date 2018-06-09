/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _cameraIntrinsicMatrixDeliveryEnabled;
    bool  _mirroringEnabled;
    int  _orientation;
    int  _outputFormat;
    int  _outputHeight;
    int  _outputWidth;
    int  _retainedBufferCount;
    int  _videoStabilizationMethod;
}

@property (nonatomic) bool cameraIntrinsicMatrixDeliveryEnabled;
@property (readonly) bool irisFrameHarvestingEnabled;
@property (readonly) bool irisSDOFEnabled;
@property (readonly) bool irisVISEnabled;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputHeight;
@property (nonatomic) int outputWidth;
@property (readonly) bool previewDepthDataDeliveryEnabled;
@property (readonly) bool previewDepthFilterRenderingEnabled;
@property (readonly) bool previewFilterRenderingEnabled;
@property (nonatomic) int retainedBufferCount;
@property (readonly) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } transform;
@property (nonatomic) int videoStabilizationMethod;

+ (bool)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(bool)arg2;
+ (int)videoStabilizationMethod:(id)arg1;

- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })_transformWithSourceDimensions:(struct { int x1; int x2; })arg1 forceSourceDimensions:(bool)arg2;
- (bool)cameraIntrinsicMatrixDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransform;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransformWithSourceDimensions;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)irisFrameHarvestingEnabled;
- (bool)irisSDOFEnabled;
- (bool)irisVISEnabled;
- (bool)isEqual:(id)arg1;
- (bool)mirroringEnabled;
- (int)orientation;
- (int)outputFormat;
- (int)outputHeight;
- (int)outputWidth;
- (bool)previewDepthDataDeliveryEnabled;
- (bool)previewDepthFilterRenderingEnabled;
- (bool)previewFilterRenderingEnabled;
- (bool)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg1 nodeName:(id)arg2;
- (int)retainedBufferCount;
- (void)setCameraIntrinsicMatrixDeliveryEnabled:(bool)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })transform;
- (int)videoStabilizationMethod;

@end
