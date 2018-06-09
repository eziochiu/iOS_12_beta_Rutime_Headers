/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineIndeterminiteJobGeneratorInfo : PFPipelineJobGeneratorInfo

- (bool)hasMoreJobs;
- (bool)isDeterminite;
- (id)nextJob;
- (unsigned long long)remainingJobCount;

@end
