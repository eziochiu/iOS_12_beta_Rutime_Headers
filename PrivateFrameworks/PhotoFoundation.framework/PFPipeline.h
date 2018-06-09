/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipeline : NSObject {
    unsigned long long  _concurrentJobLimit;
    <PFPipelineDelegate> * _delegate;
    unsigned long long  _jobsInFlight;
    NSString * _label;
    unsigned long long  _recomputeAllocatedThreads;
    NSArray * _stages;
}

@property (readonly) <PFPipelineDelegate> *delegate;
@property (readonly) NSArray *stages;

+ (void)concurrencyRecomputeNeeded;
+ (void)initialize;
+ (unsigned long long)maximumConcurrency;
+ (id)pipelineWithLabel:(id)arg1 stageCount:(unsigned long long)arg2 selectors:(SEL*)arg3 concurrentJobLimit:(unsigned long long)arg4 delegate:(id)arg5;
+ (void)recomputeConcurrency:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)addJob:(id)arg1;
- (void)addJobs:(id)arg1;
- (void)addJobs:(unsigned long long)arg1 withQOS:(unsigned int)arg2 generator:(id /* block */)arg3;
- (void)deactivate;
- (id)delegate;
- (id)description;
- (void)finishedAJob:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 stages:(id)arg2 concurrentJobLimit:(unsigned long long)arg3 delegate:(id)arg4;
- (void)invokeStage:(id)arg1;
- (void)jobCompletedStage:(id)arg1;
- (void)pausePreviousStage:(unsigned long long)arg1;
- (void)resumePreviousStage:(unsigned long long)arg1;
- (void)stage0GeneratedJob:(id)arg1;
- (id)stages;

@end
