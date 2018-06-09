/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorker : NSObject <PHAServiceOperationHandling, PHAWorkerConfiguration> {
    PHAServiceCancelableOperation * _currentOperation;
    <PHAAssetResourceDataLoading> * _dataLoader;
    PHAManager * _photoAnalysisManager;
    bool  _shutdownHasBeenCalled;
    PFSerialQueue * _userInitiatedRequestQueue;
    bool  _warmedUp;
}

@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (nonatomic, retain) <PHAAssetResourceDataLoading> *dataLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEnabled;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;
@property (readonly) Class superclass;
@property (getter=isWarmedUp, nonatomic) bool warmedUp;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (bool)persistsState;
+ (bool)runsExclusively;
+ (short)workerType;

- (void).cxx_destruct;
- (void)assertUserInitiatedRequestQueue;
- (void)cooldown;
- (id)currentOperation;
- (id)dataLoader;
- (bool)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (bool)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)arg1;
- (void)handleOperation:(id)arg1;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)init;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (bool)isEnabled;
- (bool)isQuiescent;
- (bool)isWarmedUp;
- (id)libraryScopedWorkerPreferences;
- (id)libraryScopedWorkerPreferencesURL;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (id)persistentStorageDirectoryURL;
- (id)photoAnalysisManager;
- (id)photoLibrary;
- (void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)setCurrentOperation:(id)arg1;
- (void)setDataLoader:(id)arg1;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)setWarmedUp:(bool)arg1;
- (void)shutdown;
- (bool)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startup;
- (id)statusAsDictionary;
- (bool)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (void)warmup;

@end
