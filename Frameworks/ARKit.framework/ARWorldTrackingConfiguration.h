/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingConfiguration : ARConfiguration {
    bool  _deliverRawSceneUnderstandingResults;
    NSSet * _detectionImages;
    NSSet * _detectionObjects;
    long long  _environmentTexturing;
    ARWorldMap * _initialWorldMap;
    long long  _maximumNumberOfTrackedImages;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
    bool  _relocalizationEnabled;
    NSString * _slamConfiguration;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (nonatomic, copy) NSSet *detectionImages;
@property (nonatomic, copy) NSSet *detectionObjects;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (getter=isMLModelEnabled, nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic, copy) NSString *slamConfiguration;

+ (bool)isObjectDetectionSupported;
+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (id)description;
- (id)detectionImages;
- (id)detectionObjects;
- (long long)environmentTexturing;
- (id)imageSensorSettings;
- (id)init;
- (id)initialWorldMap;
- (bool)isEqual:(id)arg1;
- (bool)isMLModelEnabled;
- (long long)maximumNumberOfTrackedImages;
- (unsigned long long)planeDetection;
- (bool)relocalizationEnabled;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setDetectionImages:(id)arg1;
- (void)setDetectionObjects:(id)arg1;
- (void)setEnvironmentTexturing:(long long)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (id)slamConfiguration;
- (id)techniques;

@end
