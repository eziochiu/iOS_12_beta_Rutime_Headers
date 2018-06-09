/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate> {
    NSArray * __internalTechniques;
    bool  _parallelExecution;
    ARTechniqueParallelGatherContext * _previousContext;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) NSArray *_internalTechniques;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSArray *techniques;

+ (id)techinqueInArray:(id)arg1 passingTest:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_internalTechniques;
- (void)_submitResultsForTimestamp:(double)arg1 context:(id)arg2;
- (id)description;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)prepare;
- (id)processData:(id)arg1;
- (void)replaceTechniques:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setBonusLatency:(double)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setTechniques:(id)arg1;
- (void)set_internalTechniques:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (id)techniqueOfClass:(Class)arg1;
- (id)techniques;

@end
