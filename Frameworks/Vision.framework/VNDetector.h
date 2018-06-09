/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetector : NSObject <VNDetectorKeyProviding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    unsigned long long  _backingStore;
    NSDictionary * _configurationOptions;
    VNMetalContext * _metalContext;
    NSObject<OS_dispatch_queue> * _processingQueue;
    unsigned long long  _requestRevision;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}

@property (nonatomic, readonly) unsigned long long backingStore;
@property (nonatomic, readonly, copy) NSDictionary *configurationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VNMetalContext *metalContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synchronizationQueue;

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1;
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;
+ (id)detectorName;
+ (id)detectorWithConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)backingStore;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)configurationOptions;
- (bool)currentQueueIsSynchronizationQueue;
- (bool)getOptionalCanceller:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
- (id)initWithConfigurationOptions:(id)arg1;
- (id)metalContext;
- (bool)needsMetalContext;
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (id)processingQueue;
- (unsigned long long)requestRevision;
- (id)requiredCancellerInOptions:(id)arg1 error:(id*)arg2;
- (void)setSynchronizationQueue:(id)arg1;
- (bool)supportsProcessingDevice:(id)arg1;
- (id)synchronizationQueue;
- (bool)useGPU;
- (bool)validateImageBuffer:(id)arg1 error:(id*)arg2;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id*)arg2;
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id*)arg2;

@end
