/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoSceneClassifier : VCPVideoAnalyzer {
    NSMutableDictionary * _existingScenes;
    NSMutableDictionary * _internalFrameScenes;
    NSMutableArray * _results;
    NSArray * _sceneResults;
    VCPSceneTaxonomy * _sceneTaxomy;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _start;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
}

@property (readonly) NSDictionary *frameScenes;
@property (retain) NSArray *sceneResults;

- (void).cxx_destruct;
- (void)addAggregatedScenes:(id)arg1 timerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)addResult:(id)arg1 start:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 keyIsName:(bool)arg4;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (bool)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)frameScenes;
- (id)init;
- (id)results;
- (id)sceneResults;
- (void)setSceneResults:(id)arg1;

@end
