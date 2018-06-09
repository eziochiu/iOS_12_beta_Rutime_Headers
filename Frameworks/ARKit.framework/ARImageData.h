/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageData : NSObject <ARSensorData, NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    long long  _cameraPosition;
    NSDate * _captureDate;
    long long  _captureFramesPerSecond;
    AVDepthData * _depthData;
    double  _depthDataTimestamp;
    double  _exposureDuration;
    float  _exposureTargetOffset;
    ARFaceData * _faceData;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    unsigned long long  _lensType;
    bool  _mirrored;
    struct __CVBuffer { } * _pixelBuffer;
    void _radialDistortion;
    void _tangentialDistortion;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, copy) NSDate *captureDate;
@property (nonatomic) long long captureFramesPerSecond;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) AVDepthData *depthData;
@property (nonatomic) double depthDataTimestamp;
@property (readonly, copy) NSString *description;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic, retain) ARFaceData *faceData;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) unsigned long long lensType;
@property (getter=isMirrored, nonatomic) bool mirrored;
@property (nonatomic, readonly) ARImageData *originalImage;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) void radialDistortion;
@property (readonly) Class superclass;
@property (nonatomic) void tangentialDistortion;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

+ (id)captureDateFromPresentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 session:(id)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsicsFromDeviceFormat:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (long long)cameraPosition;
- (id)captureDate;
- (long long)captureFramesPerSecond;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)depthData;
- (double)depthDataTimestamp;
- (void)encodeWithCoder:(id)arg1;
- (double)exposureDuration;
- (float)exposureTargetOffset;
- (id)faceData;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMirrored;
- (unsigned long long)lensType;
- (id)originalImage;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)radialDistortion;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureDate:(id)arg1;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setDepthData:(id)arg1;
- (void)setDepthDataTimestamp:(double)arg1;
- (void)setExposureDuration:(double)arg1;
- (void)setExposureTargetOffset:(float)arg1;
- (void)setFaceData:(id)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setLensType:(unsigned long long)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setRadialDistortion;
- (void)setTangentialDistortion;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)tangentialDistortion;
- (float)temperature;
- (double)timestamp;

@end
