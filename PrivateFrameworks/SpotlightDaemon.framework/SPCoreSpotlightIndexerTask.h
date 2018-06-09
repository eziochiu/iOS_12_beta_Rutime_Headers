/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SPCoreSpotlightIndexerTask : NSObject {
    NSArray * _bundleIDs;
    NSArray * _completedBundleIDs;
    unsigned long long  _dataMigrationStage;
    NSArray * _indexers;
    CSIndexJob * _job;
    bool  _shouldResumeOnFailure;
}

@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSArray *completedBundleIDs;
@property (nonatomic) unsigned long long dataMigrationStage;
@property (nonatomic, readonly) NSArray *indexers;
@property (nonatomic, readonly) CSIndexJob *job;
@property (nonatomic) bool shouldResumeOnFailure;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)completedBundleIDs;
- (unsigned long long)dataMigrationStage;
- (id)indexers;
- (id)initWithIndexJob:(id)arg1 indexers:(id)arg2;
- (id)job;
- (void)setBundleIDs:(id)arg1;
- (void)setCompletedBundleIDs:(id)arg1;
- (void)setDataMigrationStage:(unsigned long long)arg1;
- (void)setShouldResumeOnFailure:(bool)arg1;
- (bool)shouldResumeOnFailure;

@end
