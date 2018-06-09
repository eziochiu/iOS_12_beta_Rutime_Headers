/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKEnableStudentCloudSyncingInteraction : CATOperation {
    <CRKEnableStudentCloudSyncingInteractionDelegate> * mDelegate;
    CATRemoteTaskOperation * mEnableSyncingOperation;
    bool  mIsPrompting;
    unsigned long long  mLocalCourseCount;
    <CRKRequestPerformingProtocol> * mStudentDaemonProxy;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)enableSyncing;
- (void)enableSyncingOperationDidFinish:(id)arg1;
- (void)endOperationWithSyncingEnabledState:(bool)arg1;
- (id)initWithLocalCourseCount:(unsigned long long)arg1 studentDaemonProxy:(id)arg2 delegate:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (id)makeEnableSyncingRequest;
- (void)processMergeDecision:(bool)arg1;
- (void)promptToMerge;
- (void)run;
- (void)stopPromptingToMerge;

@end
