/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieHighlightAnalyzer : NSObject {
    NSArray * _actionResults;
    NSArray * _faceResults;
    NSArray * _featureResults;
    NSMutableArray * _internalConstraintResults;
    NSMutableArray * _internalResults;
    bool  _isLivePhoto;
    NSArray * _junkResults;
    NSArray * _keyFrameResults;
    NSArray * _qualityResults;
    bool  _verbose;
    NSArray * _voiceResults;
}

- (void).cxx_destruct;
- (void)SetKeyFramesForSegments:(id)arg1;
- (bool)addSegment:(id)arg1;
- (float)computeActionScoreInTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)computeExpressionScoreInTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)computeHighlightScoreOfSegment:(id)arg1;
- (int)computeHighlightScoreWithConstraint;
- (float)computeVoiceScoreInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (int)evaluateSegment:(id)arg1;
- (int)generateHighlights;
- (int)generateInitialSegments;
- (id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(bool)arg2;
- (void)mergeShortSegments;
- (void)mergeSimilarSegments;
- (id)movieSummary;
- (int)pickHighlightsFrom:(id)arg1;
- (id)pickKeyFramesInRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 actionResult:(id)arg5 voiceResult:(id)arg6 keyFrameResult:(id)arg7;
- (id)results;
- (void)searchFeatureVectorOfSegment:(id)arg1;

@end
