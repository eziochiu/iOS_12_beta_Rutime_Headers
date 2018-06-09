/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineStage : NSObject {
    unsigned long long  _averageExecutionTime;
    NSMutableArray * _backlog;
    unsigned long long  _concurrentJobLimit;
    unsigned long long  _executingJobCount;
    bool  _isSuspended;
    PFPipeline * _pipeline;
    bool  _previousStageSuspended;
    unsigned long long  _recomputeAverageExecutionTime;
    unsigned long long  _recomputeTargetConcurrency;
    unsigned long long  _stageIndex;
    unsigned long long  _targetJobConcurrency;
}

@property unsigned long long concurrentJobLimit;
@property PFPipeline *pipeline;
@property unsigned long long stageIndex;

+ (unsigned long long)maximumConcurrency;

- (void).cxx_destruct;
- (unsigned long long)averageExecutionTime;
- (unsigned long long)concurrentJobLimit;
- (id)description;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)endJob:(id)arg1;
- (void)invokeWorkForJob:(id)arg1 completion:(id /* block */)arg2;
- (bool)isSuspended;
- (void)noteExecutionTime:(unsigned long long)arg1;
- (id)pipeline;
- (void)processJob:(id)arg1;
- (void)runQueuedJobs;
- (void)setConcurrentJobLimit:(unsigned long long)arg1;
- (void)setIsSuspended:(bool)arg1;
- (void)setPipeline:(id)arg1;
- (void)setStageIndex:(unsigned long long)arg1;
- (void)setTargetConcurrency:(unsigned long long)arg1;
- (unsigned long long)stageIndex;
- (void)startJob:(id)arg1;
- (unsigned long long)targetConcurrency;

@end
