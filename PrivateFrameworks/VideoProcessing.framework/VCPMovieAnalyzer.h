/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    VCPAsset * _asset;
    NSMutableDictionary * _privateResults;
    unsigned long long  _requestedAnalyses;
    long long  _status;
    bool  _supportConditionalAnalysis;
    bool  _supportMovieCuration;
}

@property (readonly) long long status;

+ (id)analyzerWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;
+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (int)analyzeVideoSegment:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 cancel:(id /* block */)arg3;
- (int)analyzeVideoTrack:(id)arg1 start:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cancel:(id /* block */)arg3;
- (id)createDecoderForTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2;
- (id)initWithPHAsset:(id)arg1 existingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (id)initWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;
- (int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(id /* block */)arg2;
- (long long)status;

@end
