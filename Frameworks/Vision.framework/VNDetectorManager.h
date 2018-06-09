/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectorManager : NSObject {
    NSMutableDictionary * _activeDetectorsCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDetectorsCacheLock;
    NSMutableDictionary * _detectorTypeToSynchronizationQueueLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _detectorTypeToSynchronizationQueueLookupLock;
}

+ (id)manager;

- (void).cxx_destruct;
- (Class)_detectorClassForDetectorType:(id)arg1;
- (Class)_detectorClassForDetectorType:(id)arg1 options:(id)arg2 detectorCreationOptions:(id*)arg3;
- (id)_detectorOfClass:(Class)arg1 type:(id)arg2 configuredWithOptions:(id)arg3 error:(id*)arg4;
- (void)_forcedCleanupFacePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupJunkPipelineWithLevel:(id)arg1;
- (void)_forcedCleanupScenePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupSmartCamPipelineWithLevel:(id)arg1;
- (void)_removeCachedDetectorClasses:(id)arg1;
- (void)_removeCachedDetectorTypes:(id)arg1;
- (id)_specialCaseLookUpOfExistingDetectorType:(id)arg1 configuredWithOptions:(id)arg2;
- (id)_synchronizationQueueForDetectorType:(id)arg1;
- (Class)detectorClassForDetectorType:(id)arg1 options:(id)arg2;
- (id)detectorOfType:(id)arg1 backingStore:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)detectorOfType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)forcedCleanup;
- (void)forcedCleanupWithOptions:(id)arg1;
- (id)init;

@end
