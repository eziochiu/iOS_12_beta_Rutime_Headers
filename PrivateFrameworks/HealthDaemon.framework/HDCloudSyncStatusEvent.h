/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStatusEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {
    NSNumber * _baseLineEpoch;
    NSNumber * _emptyZoneCount;
    NSNumber * _hasEncounteredGapInCurrentEpoch;
    NSNumber * _timeSinceDownloadSuccess;
    NSNumber * _timeSinceLastUploadForwardProgress;
    NSNumber * _timeSinceUploadSuccess;
    NSNumber * _timeUntilRebaseRequired;
}

@property (nonatomic, readonly, copy) NSNumber *baseLineEpoch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *emptyZoneCount;
@property (nonatomic, readonly, copy) NSNumber *hasEncounteredGapInCurrentEpoch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *timeSinceDownloadSuccess;
@property (nonatomic, readonly, copy) NSNumber *timeSinceLastUploadForwardProgress;
@property (nonatomic, readonly, copy) NSNumber *timeSinceUploadSuccess;
@property (nonatomic, readonly, copy) NSNumber *timeUntilRebaseRequired;

+ (id)_lastSuccessfulPullDateForConfiguration:(id)arg1;
+ (id)_persistedSyncStateForConfiguration:(id)arg1;
+ (id)statusEventWithConfiguration:(id)arg1 cloudKitIdentifier:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)AWDMetricID;
- (id)baseLineEpoch;
- (id)codableRepresentationForAWDSubmission;
- (id)description;
- (id)emptyZoneCount;
- (id)hasEncounteredGapInCurrentEpoch;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 syncState:(id)arg10 lastSuccessfulPullDate:(id)arg11 lastPushForwardProgressDate:(id)arg12 cloudKitManateeEnabled:(bool)arg13 internalSettingManateeEnabled:(bool)arg14;
- (id)timeSinceDownloadSuccess;
- (id)timeSinceLastUploadForwardProgress;
- (id)timeSinceUploadSuccess;
- (id)timeUntilRebaseRequired;

@end
