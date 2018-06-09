/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoKeyFrame : NSObject {
    float  _cameraMotion;
    float  _colorfulness;
    NSMutableArray * _detectedFaces;
    float  _exposureScore;
    float  _faceSharpness;
    float  _interestingness;
    bool  _isHeadingFrame;
    float  _obstruction;
    float  _score;
    float  _sharpness;
    unsigned long long  _statsFlags;
    bool  _subMb;
    float  _subjectAction;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *detectedFaces;
@property (nonatomic) float exposureScore;
@property (nonatomic) float faceSharpness;
@property (nonatomic) bool isHeadingFrame;
@property (nonatomic) float score;
@property (nonatomic) float sharpness;
@property (nonatomic) unsigned long long statsFlags;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (void).cxx_destruct;
- (float)computeContentScore;
- (void)computeCurationScore;
- (float)computeExpressionScore;
- (float)computeGlobalQuality;
- (float)computePenaltyScore;
- (float)computeScoreFromAction;
- (float)computeScoreFromColorfulness;
- (float)computeScoreFromExposure;
- (float)computeVisualPleasingScore;
- (id)detectedFaces;
- (float)exposureScore;
- (float)faceSharpness;
- (bool)hasGoodSubjectAction;
- (id)init;
- (bool)isHeadingFrame;
- (void)printStats;
- (void)resetStatsFlag;
- (float)score;
- (void)setDetectedFaces:(id)arg1;
- (void)setExposure:(float)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setFaceSharpness:(float)arg1;
- (void)setFaceStatsFlag:(bool)arg1 detectedFaces:(id)arg2;
- (void)setIsHeadingFrame:(bool)arg1;
- (void)setMotionStatsFlag:(bool)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 subMb:(bool)arg7;
- (void)setScore:(float)arg1;
- (void)setSharpness:(float)arg1;
- (void)setStatsFlags:(unsigned long long)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)sharpness;
- (unsigned long long)statsFlags;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
