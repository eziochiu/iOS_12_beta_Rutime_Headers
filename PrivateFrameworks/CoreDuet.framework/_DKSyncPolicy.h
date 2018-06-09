/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncPolicy : NSObject {
    bool  _alwaysSyncUpAndDown;
    unsigned long long  _assetThresholdInBytes;
    unsigned long long  _firstSyncPeriodInDays;
    bool  _forceSync;
    unsigned long long  _maxSyncDownIntervalInDays;
    unsigned long long  _maxSyncsPerDay;
    unsigned long long  _minSyncIntervalInSeconds;
    unsigned long long  _minSyncsPerDay;
    unsigned long long  _numChangesTriggeringSync;
    unsigned long long  _policyDownloadIntervalInDays;
    bool  _pushTriggersSync;
    unsigned long long  _singleDeviceSyncIntervalInDays;
    NSArray * _streamNamesWithAdditionsTriggeringSync;
    NSArray * _streamNamesWithDeletionsTriggeringSync;
    bool  _syncDisabled;
    unsigned long long  _syncTimeoutInSeconds;
    unsigned long long  _triggeredSyncDelayInSeconds;
}

@property (nonatomic) bool alwaysSyncUpAndDown;
@property (nonatomic) unsigned long long assetThresholdInBytes;
@property (nonatomic) unsigned long long firstSyncPeriodInDays;
@property (nonatomic) bool forceSync;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) bool pushTriggersSync;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (nonatomic, retain) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (nonatomic, retain) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) bool syncDisabled;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;

+ (id)configurationPlist;
+ (id)forceSyncPolicy;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)policy;
+ (id)policyFromDictionary:(id)arg1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)syncPolicyConfigPath;
+ (id)userDefaults;

- (void).cxx_destruct;
- (bool)alwaysSyncUpAndDown;
- (unsigned long long)assetThresholdInBytes;
- (id)description;
- (unsigned long long)firstSyncPeriodInDays;
- (bool)forceSync;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1;
- (id)initWithSyncDisabled:(id)arg1 alwaysSyncUpAndDown:(id)arg2 assetThresholdInBytes:(id)arg3 firstSyncPeriodInDays:(id)arg4 maxSyncDownIntervalInDays:(id)arg5 minSyncIntervalInSeconds:(id)arg6 minSyncsPerDay:(id)arg7 maxSyncsPerDay:(id)arg8 numChangesTriggeringSync:(id)arg9 policyDownloadIntervalInDays:(id)arg10 pushTriggersSync:(id)arg11 singleDeviceSyncIntervalInDays:(id)arg12 streamNamesWithAdditionsTriggeringSync:(id)arg13 streamNamesWithDeletionsTriggeringSync:(id)arg14 syncTimeoutInSeconds:(id)arg15 triggeredSyncDelayInSeconds:(id)arg16;
- (unsigned long long)maxSyncDownIntervalInDays;
- (unsigned long long)maxSyncsPerDay;
- (unsigned long long)minSyncIntervalInSeconds;
- (unsigned long long)minSyncsPerDay;
- (unsigned long long)numChangesTriggeringSync;
- (unsigned long long)policyDownloadIntervalInDays;
- (bool)pushTriggersSync;
- (id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(bool)arg3 isTriggeredSync:(bool)arg4;
- (void)setAlwaysSyncUpAndDown:(bool)arg1;
- (void)setAssetThresholdInBytes:(unsigned long long)arg1;
- (void)setFirstSyncPeriodInDays:(unsigned long long)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1;
- (void)setMaxSyncsPerDay:(unsigned long long)arg1;
- (void)setMinSyncIntervalInSeconds:(unsigned long long)arg1;
- (void)setMinSyncsPerDay:(unsigned long long)arg1;
- (void)setNumChangesTriggeringSync:(unsigned long long)arg1;
- (void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1;
- (void)setPushTriggersSync:(bool)arg1;
- (void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1;
- (void)setStreamNamesWithAdditionsTriggeringSync:(id)arg1;
- (void)setStreamNamesWithDeletionsTriggeringSync:(id)arg1;
- (void)setSyncDisabled:(bool)arg1;
- (void)setSyncTimeoutInSeconds:(unsigned long long)arg1;
- (void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1;
- (unsigned long long)singleDeviceSyncIntervalInDays;
- (id)streamNamesWithAdditionsTriggeringSync;
- (id)streamNamesWithDeletionsTriggeringSync;
- (bool)syncDisabled;
- (unsigned long long)syncTimeoutInSeconds;
- (unsigned long long)triggeredSyncDelayInSeconds;

@end
