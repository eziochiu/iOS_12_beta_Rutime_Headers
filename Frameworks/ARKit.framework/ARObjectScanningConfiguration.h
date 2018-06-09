/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARObjectScanningConfiguration : ARConfiguration {
    bool  _deliverRawSceneUnderstandingResults;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (getter=isMLModelEnabled, nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (id)description;
- (id)imageSensorSettings;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isMLModelEnabled;
- (unsigned long long)planeDetection;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (id)techniques;

@end
