/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFrameAnalysisStats : NSObject {
    float  _cameraMotionScore;
    float  _colorfulnessScore;
    NSMutableArray * _detectedFaces;
    float  _exposureScore;
    bool  _frameProcessedByFaceDetector;
    bool  _frameProcessedByVideoAnalyzer;
    float  _interestingnessScore;
    float  _obstructionScore;
    bool  _subMbMotionAvailable;
    float  _subjectActionScore;
    VCPVideoActivityDescriptor * _videoActivityDescriptor;
}

@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic, retain) NSMutableArray *detectedFaces;
@property (nonatomic) float exposureScore;
@property (nonatomic) bool frameProcessedByFaceDetector;
@property (nonatomic) bool frameProcessedByVideoAnalyzer;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) float obstructionScore;
@property (nonatomic) bool subMbMotionAvailable;
@property (nonatomic) float subjectActionScore;
@property (nonatomic, retain) VCPVideoActivityDescriptor *videoActivityDescriptor;

- (void).cxx_destruct;
- (float)cameraMotionScore;
- (float)colorfulnessScore;
- (id)detectedFaces;
- (float)exposureScore;
- (bool)frameProcessedByFaceDetector;
- (bool)frameProcessedByVideoAnalyzer;
- (id)init;
- (float)interestingnessScore;
- (float)obstructionScore;
- (void)reset;
- (void)setCameraMotionScore:(float)arg1;
- (void)setColorfulnessScore:(float)arg1;
- (void)setDetectedFaces:(id)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setFrameProcessedByFaceDetector:(bool)arg1;
- (void)setFrameProcessedByVideoAnalyzer:(bool)arg1;
- (void)setInterestingnessScore:(float)arg1;
- (void)setObstructionScore:(float)arg1;
- (void)setSubMbMotionAvailable:(bool)arg1;
- (void)setSubjectActionScore:(float)arg1;
- (void)setVideoActivityDescriptor:(id)arg1;
- (bool)subMbMotionAvailable;
- (float)subjectActionScore;
- (id)videoActivityDescriptor;

@end
