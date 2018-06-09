/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNEspressoModelFileBasedDetector : VNDetector {
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    unsigned long long  _networkRequiredInputImageHeight;
    unsigned long long  _networkRequiredInputImageWidth;
}

@property (nonatomic, readonly) void*espressoContext;
@property (nonatomic, readonly) struct { void *x1; int x2; } espressoNetwork;
@property (nonatomic, readonly) void*espressoPlan;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageHeight;
@property (nonatomic, readonly) unsigned long long networkRequiredInputImageWidth;

+ (id)configurationOptionKeysForDetectorKey;

- (bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (void)dealloc;
- (void*)espressoContext;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (struct { void *x1; int x2; })espressoNetwork;
- (void*)espressoPlan;
- (bool)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4;
- (unsigned long long)networkRequiredInputImageHeight;
- (unsigned long long)networkRequiredInputImageWidth;
- (bool)supportsProcessingDevice:(id)arg1;

@end
