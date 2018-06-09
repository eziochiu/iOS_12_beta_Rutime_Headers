/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer {
    VCPVideoActivityDescriptor * _activityDescriptor;
    NSMutableArray * _activityScores;
    NSMutableArray * _classificationResults;
    NSMutableArray * _faceResults;
    NSMutableArray * _fineActionResults;
    VCPFrameAnalysisStats * _frameStats;
    VCPCNNData * _input;
    NSMutableArray * _interestingnessResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastProcessTime;
    VCPCNNModel * _model;
    long long  _numOfFrames;
    NSMutableArray * _obstructionResults;
    float  _overallActivityLevel;
    NSMutableArray * _qualityResults;
    NSMutableArray * _results;
    float  _sceneSwitchFrequency;
    NSNumber * _sportsSceneId;
    NSMutableArray * _validActivityScores;
}

- (void).cxx_destruct;
- (float)actionScoreInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)addSceneClassificationContributionToActivityLevel:(float*)arg1;
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float*)arg1;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)computeActivityScoreAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2;
- (int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2;
- (int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)generateActivityDescriptor;
- (id)initWithFrameStats:(id)arg1;
- (void)normalizeActivityDescriptor;
- (int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7;
- (int)prepareActivityStats;
- (void)resetActivityStatsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)results;
- (float)scaleBasedOnFaceForTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)validateActivityScores;
- (float)validationScoreOfTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 fromResult:(id)arg2 startIdx:(int*)arg3;

@end
