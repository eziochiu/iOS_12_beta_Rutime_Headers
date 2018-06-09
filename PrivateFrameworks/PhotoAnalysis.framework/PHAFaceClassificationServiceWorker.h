/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating> {
    PVVisionAnalyzer * _analyzer;
    PVContext * _context;
    PHAAnalysisWorkerJob * _currentJob;
    NSMutableSet * _outstandingImageRequests;
    NSMutableArray * _pendingAssetIdentifiers;
    VNPersonsModel * _personsModel;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (retain) PVVisionAnalyzer *analyzer;
@property (retain) PVContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableSet *outstandingImageRequests;
@property (retain) VNPersonsModel *personsModel;
@property (readonly) Class superclass;

+ (long long)applicationDataFolderIdentifier;
+ (bool)persistsState;
+ (short)workerType;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)analyzeImageData:(id)arg1 forAsset:(id)arg2;
- (id)analyzer;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (id)context;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)loadPersonsModel;
- (id)outstandingImageRequests;
- (id)personsModel;
- (void)processAsset:(id)arg1;
- (void)processPendingAssetIdentifiers;
- (void)setAnalyzer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setOutstandingImageRequests:(id)arg1;
- (void)setPersonsModel:(id)arg1;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)warmup;

@end
