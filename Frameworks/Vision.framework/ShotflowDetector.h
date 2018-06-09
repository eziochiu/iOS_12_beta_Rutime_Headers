/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ShotflowDetector : NSObject {
    float  _filterThreshold;
    ShotflowNetwork * _network;
    float  _nmsThreshold;
    int  _olmcsMergeCountDelta;
    float  _olmcsThreshold;
    float  _osfsSizeRatio;
    float  _osfsThreshold;
    float  _overlap_threshold;
    float  _smartDistanceFactor;
    float  _smartThreshold;
}

@property (nonatomic) float filterThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float overlap_threshold;
@property (nonatomic) float smartDistanceFactor;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float threshold;

+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThreshold:(float)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6;

- (void).cxx_destruct;
- (id)detect:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 inputIsBGR:(bool)arg2;
- (id)filterBoxes:(id)arg1;
- (float)filterThreshold;
- (id)initWithNetwork:(id)arg1 filterThreshold:(float)arg2;
- (id)mergeBoxes:(id)arg1;
- (id)nmsBoxes:(id)arg1;
- (float)nmsThreshold;
- (int)olmcsMergeCountDelta;
- (float)olmcsThreshold;
- (float)osfsSizeRatio;
- (float)osfsThreshold;
- (float)overlap_threshold;
- (id)overlappingLowMergeCountSuppression:(id)arg1;
- (id)overlappingSmallFacesSuppression:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (void)setFilterThreshold:(float)arg1;
- (void)setNmsThreshold:(float)arg1;
- (void)setOlmcsMergeCountDelta:(int)arg1;
- (void)setOlmcsThreshold:(float)arg1;
- (void)setOsfsSizeRatio:(float)arg1;
- (void)setOsfsThreshold:(float)arg1;
- (void)setOverlap_threshold:(float)arg1;
- (void)setSmartDistanceFactor:(float)arg1;
- (void)setSmartThreshold:(float)arg1;
- (void)setThreshold:(float)arg1;
- (float)smartDistanceFactor;
- (id)smartMergeBoxes:(id)arg1;
- (float)smartThreshold;
- (float)threshold;

@end
