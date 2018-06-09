/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobGenerator : NSObject {
    NSMutableDictionary * _countOfJobsGeneratedByWorkerType;
    long long  _generatedJobCountGoal;
    PHAWorkerHealthMonitor * _healthMonitor;
    PHPhotoLibrary * _library;
    bool  _skippedSomeWorker;
    NSMutableDictionary * _workInfoReadersByMode;
    NSDictionary * _workersByType;
}

@property (nonatomic, readonly) NSMutableDictionary *countOfJobsGeneratedByWorkerType;
@property (nonatomic) long long generatedJobCountGoal;
@property (nonatomic, readonly) PHAWorkerHealthMonitor *healthMonitor;
@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (nonatomic, readonly) NSMutableDictionary *workInfoReadersByMode;
@property (nonatomic, readonly) NSDictionary *workersByType;

+ (long long)maxBatchSize;

- (void).cxx_destruct;
- (bool)_anyWorkerIsLoadBalanceSkipping;
- (void)_increaseGoalLevelIfNeeeded;
- (void)_incrementGeneratedJobCountForWorkerType:(short)arg1;
- (void)_jumpToGoalJobCountForWorkerType:(short)arg1;
- (id)_produceAcknowledgeDeletesJobForWorkerType:(short)arg1 scenario:(unsigned long long)arg2 defaultsDisabledKey:(id)arg3 failureReason:(id*)arg4;
- (id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(short)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(bool)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(bool)arg6 canUseNetwork:(bool)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id*)arg9;
- (bool)_shouldLoadBalanceSkipForWorkerType:(short)arg1;
- (id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1;
- (id)_workerTypesEligibleForLoadBalanceSkipping;
- (bool)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id*)arg3;
- (id)countOfJobsGeneratedByWorkerType;
- (id)generateJobWithCurrentConstraints:(id)arg1;
- (long long)generatedJobCountGoal;
- (id)healthMonitor;
- (id)initWithHealthMonitor:(id)arg1 library:(id)arg2 workersByType:(id)arg3;
- (id)library;
- (void)setGeneratedJobCountGoal:(long long)arg1;
- (id)workInfoReadersByMode;
- (id)workersByType;

@end
