/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineDeterminiteJobGeneratorInfo : PFPipelineJobGeneratorInfo {
    unsigned long long  _remainingJobCount;
}

@property (readonly) unsigned long long remainingJobCount;

- (bool)hasMoreJobs;
- (id)initWithPipeline:(id)arg1 jobCount:(unsigned long long)arg2 qos:(unsigned int)arg3 generator:(id /* block */)arg4;
- (bool)isDeterminite;
- (id)nextJob;
- (unsigned long long)remainingJobCount;

@end
