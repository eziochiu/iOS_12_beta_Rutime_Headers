/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineJobGeneratorInfo : NSObject {
    id /* block */  _generator;
    PFPipeline * _pipeline;
    unsigned int  _qos;
}

@property (readonly) PFPipeline *pipeline;
@property (readonly) unsigned int qos;

- (void).cxx_destruct;
- (bool)hasMoreJobs;
- (id)initWithPipeline:(id)arg1 qos:(unsigned int)arg2 generator:(id /* block */)arg3;
- (id)nextJob;
- (id)pipeline;
- (unsigned int)qos;

@end
