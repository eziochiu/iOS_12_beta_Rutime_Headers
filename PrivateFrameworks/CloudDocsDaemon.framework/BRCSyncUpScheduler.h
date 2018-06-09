/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpScheduler : BRCFSSchedulerBase

- (void)_scheduleSyncUpJob:(id)arg1;
- (void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2;
- (void)deleteSyncUpJobsForItem:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2;
- (unsigned long long)inFlightDiffsForItem:(id)arg1;
- (unsigned long long)inFlightDiffsForItem:(id)arg1 zone:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (bool)isItemInSyncUpAndInFlight:(id)arg1;
- (bool)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2;
- (bool)isItemPendingSyncUp:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2;
- (void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3;
- (void)schedule;

@end
