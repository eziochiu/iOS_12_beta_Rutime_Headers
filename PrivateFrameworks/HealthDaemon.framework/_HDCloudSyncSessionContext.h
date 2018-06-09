/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDCloudSyncSessionContext : NSObject <NSProgressReporting> {
    unsigned long long  _archiveCount;
    _HKArchiveCreator * _archiveCreator;
    unsigned long long  _changesetCount;
    id /* block */  _completion;
    NSError * _error;
    bool  _hasOpenSequence;
    bool  _isComplete;
    HDSyncAnchorRangeMap * _pendingAnchorRangeMap;
    HDProfile * _profile;
    NSProgress * _progress;
    bool  _success;
    NSMutableSet * _syncEntityClassesWithProcessedChanges;
}

@property (nonatomic) unsigned long long archiveCount;
@property (nonatomic, readonly) _HKArchiveCreator *archiveCreator;
@property (nonatomic, readonly) unsigned long long archiveSize;
@property (nonatomic) unsigned long long changesetCount;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) bool hasOpenSequence;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isComplete;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *pendingAnchorRangeMap;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (id)_assetFileHandleForArchiveURL:(id)arg1 fileManager:(id)arg2 error:(id*)arg3;
+ (bool)_updateAnchorRangeMap:(id)arg1 withChange:(id)arg2 outError:(id*)arg3;

- (void).cxx_destruct;
- (bool)addChangeData:(id)arg1 changes:(id)arg2 sessionIdentifier:(id)arg3 outError:(id*)arg4;
- (unsigned long long)archiveCount;
- (id)archiveCreator;
- (unsigned long long)archiveSize;
- (unsigned long long)changesetCount;
- (id /* block */)completion;
- (id)error;
- (void)finishProgress;
- (bool)hasOpenSequence;
- (id)initWithChangedSyncEntityCount:(unsigned long long)arg1 profile:(id)arg2;
- (bool)isComplete;
- (id)pendingAnchorRangeMap;
- (id)profile;
- (id)progress;
- (bool)resetInvalidArchiveCreatorWithSessionUUID:(id)arg1 error:(id*)arg2;
- (void)setArchiveCount:(unsigned long long)arg1;
- (void)setChangesetCount:(unsigned long long)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setIsComplete:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
