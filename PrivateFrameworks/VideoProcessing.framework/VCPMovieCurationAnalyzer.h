/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieCurationAnalyzer : NSObject {
    NSArray * _actionResults;
    NSArray * _descriptorResults;
    NSDictionary * _faceRanges;
    NSArray * _faceResults;
    VCPMovieHighlightAnalyzer * _highlightAnalyzer;
    NSArray * _junkResults;
    VCPVideoKeyFrameAnalyzer * _keyFrameAnalyzer;
    NSArray * _qualityResuls;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    NSArray * _voiceResults;
}

- (void).cxx_destruct;
- (void)addHighlight:(id)arg1 to:(id)arg2;
- (void)addSummary:(id)arg1 to:(id)arg2;
- (int)analyzeKeyFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)generateMovieCurations;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 isLivePhoto:(bool)arg4 frameStats:(id)arg5;
- (void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 andFaceRanges:(id)arg3;
- (int)postProcessKeyFrames;
- (id)results;

@end
