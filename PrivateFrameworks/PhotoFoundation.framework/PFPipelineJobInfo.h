/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPipelineJobInfo : NSObject {
    unsigned long long  _currentStage;
    unsigned long long  _endTime;
    id  _job;
    PFPipeline * _pipeline;
    unsigned int  _qos;
    unsigned long long  _startTime;
}

@property unsigned long long currentStage;
@property (retain) id job;
@property (readonly) PFPipeline *pipeline;
@property unsigned int qos;

- (void).cxx_destruct;
- (unsigned long long)currentStage;
- (void)end;
- (unsigned long long)executionTime;
- (id)initWithPipeline:(id)arg1;
- (id)job;
- (id)pipeline;
- (unsigned int)qos;
- (void)setCurrentStage:(unsigned long long)arg1;
- (void)setJob:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)start;

@end
