/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineStage0 : PFPipelineStage {
    PFSerialQueue * _generatorQueue;
    NSMutableArray * _jobGenerators;
}

- (void).cxx_destruct;
- (void)addJobs:(unsigned long long)arg1 withQOS:(unsigned int)arg2 generator:(id /* block */)arg3 pipeline:(id)arg4;
- (id)description;
- (void)generateNextJob:(unsigned int)arg1;
- (unsigned long long)indexOfMaxQOSAvailableGenerator;
- (id)init;
- (void)runQueuedJobs;
- (void)setConcurrentJobLimit:(unsigned long long)arg1;

@end
