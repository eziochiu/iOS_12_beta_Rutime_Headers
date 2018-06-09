/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRTTCompatibleDocument : CRDocument {
    TTCRVectorMultiTimestamp * _sharedTopotextTimestamp;
    NSMutableArray * _stringsWithClocksNeedingUpdating;
    NSMutableArray * _stringsWithClocksToResetAfterRealizingLocalChanges;
}

@property (nonatomic, retain) TTCRVectorMultiTimestamp *sharedTopotextTimestamp;
@property (nonatomic, retain) NSMutableArray *stringsWithClocksNeedingUpdating;
@property (nonatomic, retain) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges;

- (void).cxx_destruct;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 topoTimestamp:(id)arg5;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (void)mergeTimestampWithDocument:(id)arg1;
- (void)realizeLocalChanges;
- (void)setSharedTopotextTimestamp:(id)arg1;
- (void)setStringsWithClocksNeedingUpdating:(id)arg1;
- (void)setStringsWithClocksToResetAfterRealizingLocalChanges:(id)arg1;
- (id)sharedTopotextTimestamp;
- (id)stringsWithClocksNeedingUpdating;
- (id)stringsWithClocksToResetAfterRealizingLocalChanges;

@end
