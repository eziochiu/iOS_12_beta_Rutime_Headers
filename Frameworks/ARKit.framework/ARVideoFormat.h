/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARVideoFormat : NSObject <NSCopying> {
    AVCaptureDeviceFormat * _depthDataFormat;
    AVCaptureDevice * _device;
    AVCaptureDeviceFormat * _deviceFormat;
    NSArray * _frameRatesByPowerUsage;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
}

@property (nonatomic, retain) AVCaptureDeviceFormat *depthDataFormat;
@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) AVCaptureDeviceFormat *deviceFormat;
@property (nonatomic, retain) NSArray *frameRatesByPowerUsage;
@property (nonatomic, readonly) long long framesPerSecond;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;

+ (id)bestDepthFormatForDeviceFormat:(id)arg1;
+ (id)bestVideoFormatForDevicePosition:(long long)arg1 deviceType:(id)arg2 resolution:(struct { int x1; int x2; })arg3 frameRate:(double)arg4 videoBinned:(bool)arg5;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)depthDataFormat;
- (id)description;
- (id)device;
- (id)deviceFormat;
- (id)frameRatesByPowerUsage;
- (long long)framesPerSecond;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCaptureDevice:(id)arg1 format:(id)arg2;
- (id)initWithImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setDepthDataFormat:(id)arg1;
- (void)setFrameRatesByPowerUsage:(id)arg1;

@end
