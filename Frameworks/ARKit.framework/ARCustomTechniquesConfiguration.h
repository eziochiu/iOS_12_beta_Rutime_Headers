/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCustomTechniquesConfiguration : ARConfiguration {
    NSArray * _techniques;
    ARConfiguration * _templateConfiguration;
}

@property (nonatomic, readonly) ARWorldMap *initialWorldMap;
@property (nonatomic, copy) NSArray *techniques;
@property (nonatomic, copy) ARConfiguration *templateConfiguration;

+ (id)new;
+ (id)supportedVideoFormats;

- (void).cxx_destruct;
- (void)_updateCaptureSettings;
- (void)configureRecordingTechnique;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (bool)isLightEstimationEnabled;
- (void)setCameraPosition:(long long)arg1;
- (void)setCustomSensors:(id)arg1;
- (void)setProvidesAudioData:(bool)arg1;
- (void)setTechniques:(id)arg1;
- (void)setTemplateConfiguration:(id)arg1;
- (void)setVideoFormat:(id)arg1;
- (id)techniques;
- (id)templateConfiguration;
- (long long)worldAlignment;

@end
