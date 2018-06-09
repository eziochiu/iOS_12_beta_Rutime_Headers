/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> {
    NSOperationQueue * _operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation * _processingOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3;
- (void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3;
- (bool)startJob:(id*)arg1;
- (bool)stopJob:(id*)arg1;

@end
