/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating> {
    bool  _analysisJobCancelled;
    NSOperationQueue * _assetAnalysisOperationQueue;
    NSMutableDictionary * _coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary * _coalescedJobResultsByAssetLocalIdentifier;
    NSObject<OS_dispatch_queue> * _commandDispatchQueue;
    NSMapTable * _jobToAssetsAnalyzingOperationMapTable;
    unsigned long long  _lastPerformedJobScenario;
    NSNumber * _lastRecordedDarkWakeState;
    unsigned int  _visionAlgorithmUmbrellaVersion;
}

@property bool analysisJobCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int visionAlgorithmUmbrellaVersion;

+ (id /* block */)assetResourceLargestToSmallestComparator;
+ (id /* block */)assetResourceSmallestToLargestComparator;
+ (id)defaultImageCreationOptions;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_checkForDarkWakeStateTransition;
- (struct CGImage { }*)_createCGImageFromImageSource:(struct CGImageSource { }*)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)analysisJobCancelled;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(id /* block */)arg3 error:(id*)arg4;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 workerJob:(id)arg2 error:(id*)arg3;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long*)arg2 count:(unsigned long long)arg3;
- (id)assetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (Class)assetsAnalyzingOperationClass;
- (bool)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)coalesceJobResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (struct CGImage { }*)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4;
- (struct CGImage { }*)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long*)arg3 error:(id*)arg4;
- (void)didPerformJob:(id)arg1;
- (bool)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3;
- (id)imageDataForAssetResource:(id)arg1 error:(id*)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (bool)isExecutingDuringDarkWake;
- (unsigned long long)lastPerformedJobScenario;
- (id)localFileURLForAssetResource:(id)arg1 error:(id*)arg2;
- (void)performVisionForcedCleanup;
- (void)performVisionForcedCleanupWithOptions:(id)arg1;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (bool)processAsset:(id)arg1 error:(id*)arg2;
- (void)setAnalysisJobCancelled:(bool)arg1;
- (void)setVisionAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (void)shutdown;
- (bool)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startup;
- (bool)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (bool)supportsCoalescingResults;
- (unsigned int)visionAlgorithmUmbrellaVersion;
- (void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(bool)arg2;
- (void)willCompleteJob:(id)arg1;
- (void)willPerformJob:(id)arg1;

@end
