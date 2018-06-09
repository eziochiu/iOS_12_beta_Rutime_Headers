/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingOptions : NSObject <NSCopying> {
    bool  _deterministicMode;
    NSString * _deviceModel;
    ARImageSensorSettings * _imageSensorSettings;
    ARWorldMap * _initialWorldMap;
    bool  _relocalizationEnabled;
    NSString * _slamConfiguration;
}

@property (nonatomic) bool deterministicMode;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic, copy) ARWorldMap *initialWorldMap;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic, copy) NSString *slamConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deterministicMode;
- (id)deviceModel;
- (id)imageSensorSettings;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (bool)relocalizationEnabled;
- (void)setDeterministicMode:(bool)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setImageSensorSettings:(id)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (id)slamConfiguration;

@end
