/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob {
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive * _keepAlive;
}

- (void).cxx_destruct;
- (void)_handleClusteringCompletion;
- (void)_startJobKeepAlive;
- (void)_stopJobKeepAlive;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (bool)startJob:(id*)arg1;
- (bool)stopJob:(id*)arg1;

@end
