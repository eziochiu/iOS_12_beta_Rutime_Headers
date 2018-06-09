/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule, BRCSuspendable> {
    bool  _applyCountReachedMax;
    NSMutableSet * _clientZonesWatchingFaults;
    BRCCountedSet * _coordinatedWriters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_fixupCZMAliasTargetWithAlias:(id)arg1 target:(id)arg2;
- (void)_handleWatchingFaults;
- (void)_rescheduleRank:(long long)arg1 inState:(int)arg2 forZone:(id)arg3;
- (void)_scheduleApplyJobWithID:(id)arg1 zone:(id)arg2 applyKind:(unsigned int)arg3;
- (void)_setState:(int)arg1 andApplyKind:(unsigned int)arg2 forJobID:(id)arg3;
- (unsigned long long)_writeCoordinationCount;
- (bool)canScheduleMoreJobs;
- (void)createApplyJobFromServerItem:(id)arg1 localItem:(id)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (void)deleteExpiredJobs;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (id)descriptionForRejectedItem:(id)arg1 context:(id)arg2;
- (id)descriptionForServerItem:(id)arg1 context:(id)arg2;
- (void)didCompleteCrossZoneMigrationForAppLibrary:(id)arg1;
- (void)didCreateMissingParentID:(id)arg1 zone:(id)arg2;
- (void)didMarkSyncIdleForServerRank:(long long)arg1 zone:(id)arg2;
- (void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3;
- (void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(bool)arg4;
- (void)endWriteCoordinationInAppLibrary:(id)arg1 rowID:(long long)arg2;
- (id)initWithAccountSession:(id)arg1;
- (void)monitorFaultingForZone:(id)arg1;
- (void)repopulateJobsForZone:(id)arg1;
- (void)rescheduleMissingTargetAliasesWithTarget:(id)arg1;
- (void)resetBackoffForServerItem:(id)arg1;
- (void)schedule;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forRank:(long long)arg3 zone:(id)arg4;
- (void)setState:(int)arg1 andApplyKind:(unsigned int)arg2 forServerItem:(id)arg3 localItem:(id)arg4;
- (void)setState:(int)arg1 forRank:(long long)arg2 zone:(id)arg3;
- (void)setState:(int)arg1 forServerItem:(id)arg2 localItem:(id)arg3;
- (bool)startWriteCoordinationInAppLibrary:(id)arg1;
- (void)stopMonitoringFaultingForZone:(id)arg1;

@end
