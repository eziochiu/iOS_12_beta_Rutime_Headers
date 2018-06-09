/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSync2Policy : NSObject {
    unsigned long long  _maxBatchesPerSync;
    unsigned long long  _maxSyncDownIntervalInDays;
    unsigned long long  _maxSyncPeriodInDays;
    unsigned long long  _maxSyncsPerDay;
    unsigned long long  _minSyncIntervalInSeconds;
    unsigned long long  _minSyncWindowInSeconds;
    unsigned long long  _minSyncsPerDay;
    NSString * _name;
    unsigned long long  _numChangesTriggeringSync;
    unsigned long long  _policyDownloadIntervalInDays;
    bool  _pushTriggersSync;
    bool  _requireCharging;
    unsigned long long  _singleDeviceSyncIntervalInDays;
    NSArray * _streamNamesToAlwaysSync;
    NSDictionary * _streamNamesToSync;
    NSArray * _streamNamesWithAdditionsTriggeringSync;
    NSArray * _streamNamesWithDeletionsTriggeringSync;
    unsigned long long  _syncBatchSizeInEvents;
    bool  _syncDisabled;
    unsigned long long  _syncTimeoutInSeconds;
    unsigned long long  _triggeredSyncDelayInSeconds;
}

@property (nonatomic) unsigned long long maxBatchesPerSync;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long maxSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncWindowInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) bool pushTriggersSync;
@property (nonatomic) bool requireCharging;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (nonatomic, retain) NSArray *streamNamesToAlwaysSync;
@property (nonatomic, retain) NSDictionary *streamNamesToSync;
@property (nonatomic, retain) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (nonatomic, retain) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) bool syncDisabled;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;

+ (bool)cloudSyncDisabled;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)disabledFeatures;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)policyForSyncTransportType:(long long)arg1;
+ (id)policyFromDictionary:(id)arg1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (bool)rapportSyncDisabled;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (id)userDefaults;

- (void).cxx_destruct;
- (id)_streamNamesToSyncExceptDisabledFeatures:(id)arg1;
- (bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(bool)arg4 isCharging:(bool)arg5;
- (id)description;
- (bool)highPriorityForSyncType:(id)arg1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1 urgency:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maxBatchesPerSync;
- (unsigned long long)maxSyncDownIntervalInDays;
- (unsigned long long)maxSyncPeriodInDays;
- (unsigned long long)maxSyncsPerDay;
- (unsigned long long)minSyncIntervalInSeconds;
- (unsigned long long)minSyncWindowInSeconds;
- (unsigned long long)minSyncsPerDay;
- (id)name;
- (unsigned long long)numChangesTriggeringSync;
- (unsigned long long)policyDownloadIntervalInDays;
- (bool)pushTriggersSync;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(bool)arg4;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isSingleDevice:(bool)arg4 previousHighWaterMark:(id)arg5;
- (bool)requireCharging;
- (void)setMaxBatchesPerSync:(unsigned long long)arg1;
- (void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1;
- (void)setMaxSyncPeriodInDays:(unsigned long long)arg1;
- (void)setMaxSyncsPerDay:(unsigned long long)arg1;
- (void)setMinSyncIntervalInSeconds:(unsigned long long)arg1;
- (void)setMinSyncWindowInSeconds:(unsigned long long)arg1;
- (void)setMinSyncsPerDay:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNumChangesTriggeringSync:(unsigned long long)arg1;
- (void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1;
- (void)setPushTriggersSync:(bool)arg1;
- (void)setRequireCharging:(bool)arg1;
- (void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1;
- (void)setStreamNamesToAlwaysSync:(id)arg1;
- (void)setStreamNamesToSync:(id)arg1;
- (void)setStreamNamesWithAdditionsTriggeringSync:(id)arg1;
- (void)setStreamNamesWithDeletionsTriggeringSync:(id)arg1;
- (void)setSyncBatchSizeInEvents:(unsigned long long)arg1;
- (void)setSyncDisabled:(bool)arg1;
- (void)setSyncTimeoutInSeconds:(unsigned long long)arg1;
- (void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1;
- (unsigned long long)singleDeviceSyncIntervalInDays;
- (id)streamNamesToAlwaysSync;
- (id)streamNamesToSync;
- (id)streamNamesToSyncWithSyncType:(id)arg1;
- (id)streamNamesWithAdditionsTriggeringSync;
- (id)streamNamesWithDeletionsTriggeringSync;
- (unsigned long long)syncBatchSizeInEvents;
- (bool)syncDisabled;
- (unsigned long long)syncTimeoutInSeconds;
- (unsigned long long)triggeredSyncDelayInSeconds;

@end
