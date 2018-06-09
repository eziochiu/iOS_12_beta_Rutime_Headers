/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic, readonly) bool allowWideColor;
@property (nonatomic, readonly) NSDictionary *cleanApertureDictionary;
@property (nonatomic, readonly) bool dimensionsAreBoundingBox;
@property (nonatomic, readonly) NSString *frameRateConversionAlgorithm;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumFrameDuration;
@property (nonatomic, readonly) NSDictionary *pixelAspectRatioDictionary;
@property (nonatomic, readonly) NSDictionary *pixelTransferProperties;
@property (nonatomic, readonly) NSDictionary *videoScalingProperties;
@property (nonatomic, readonly) NSDictionary *videoSettingsDictionary;
@property (nonatomic, readonly) int width;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3;
+ (id)_validValuesForScalingMode;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)defaultVideoOutputSettings;
+ (id)registeredOutputSettingsClasses;
+ (id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;

- (bool)allowWideColor;
- (id)cleanApertureDictionary;
- (void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id*)arg2 transferFunction:(id*)arg3 ycbcrMatrix:(id*)arg4;
- (id)compatibleMediaTypes;
- (bool)dimensionsAreBoundingBox;
- (id)frameRateConversionAlgorithm;
- (int)height;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDuration;
- (id)pixelAspectRatioDictionary;
- (id)pixelTransferProperties;
- (bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (id)videoScalingProperties;
- (id)videoSettingsDictionary;
- (int)width;

@end
