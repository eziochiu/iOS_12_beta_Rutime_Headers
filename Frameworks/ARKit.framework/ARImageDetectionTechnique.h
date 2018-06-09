/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageDetectionTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    bool  _finishedLoadingImages;
    NSObject<OS_dispatch_semaphore> * _loadingSemaphore;
    bool  _needsWorldTrackingPoseData;
    ARODTHandleManager * _odtTHandleManger;
    NSObject<OS_dispatch_queue> * _processDataQueue;
    ARImageDetectionResultData * _referenceImageData;
    NSDictionary * _referenceImageMap;
    NSArray * _referenceImages;
    bool  _tracking;
}

@property (nonatomic, readonly) bool finishedLoadingImages;
@property (readonly) ARODTHandleManager *odtTHandleManger;
@property (readonly) NSDictionary *referenceImageMap;

+ (bool)_redetectionRequiredForContext:(id)arg1;

- (void).cxx_destruct;
- (id)_addReferenceImagesAppleCV3D;
- (void)_enqueueImageForTrackingNonBlocking:(id)arg1;
- (void)_enqueueImageForTrackingSynced:(id)arg1;
- (void)_loadReferenceImages;
- (id)_trackImagesWithContext:(id)arg1 timeBudget:(double)arg2;
- (long long)captureBehavior;
- (bool)finishedLoadingImages;
- (id)initWithReferenceImages:(id)arg1;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(bool)arg3 deterministicMode:(bool)arg4 processingQueue:(id)arg5;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)odtTHandleManger;
- (void)prepare;
- (id)referenceImageMap;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (bool)syncWithProcessedImage;

@end
