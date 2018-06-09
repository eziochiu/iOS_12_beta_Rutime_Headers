/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {
    unsigned long long  _currentStep;
    <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> * _delegate;
    NSArray * _faceCrops;
    PHAVisionServiceFaceProcessingWorker * _faceProcessingWorker;
    unsigned long long  _totalSteps;
}

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2;
- (void)main;
- (float)percentComplete;
- (void)setDelegate:(id)arg1;

@end
