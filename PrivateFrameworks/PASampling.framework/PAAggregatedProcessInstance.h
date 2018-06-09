/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedProcessInstance : PAAggregatedTask {
    bool  _combinedStacks;
    NSMutableSet * _concurrentDispatchQueueIds;
    unsigned int  _countSuspended;
    unsigned int  _countTerminated;
    unsigned long long  _cpuCyclesCached;
    unsigned long long  _cpuInstructionsCached;
    unsigned long long  _cpuTimeNsCached;
    unsigned long long  _firstTimestampIndex;
    unsigned long long  _mainThreadId;
    double  _mostRecentTimeSamplingOnlyMainThread;
    bool  _previousThreadsWereUnchanged;
    NSDictionary * _threadsInPreviousSample;
    unsigned long long  _timestampIndexWhenTransitionedToSamplingAllThreads;
    NSMutableArray * _timestampIndexedTasks;
    struct __CFDictionary { } * stacks;
}

@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) bool allowsIdleExit;
@property (readonly) NSMutableSet *concurrentDispatchQueueIds;
@property (readonly) unsigned int count;
@property (readonly) unsigned int countSuspended;
@property (readonly) unsigned int countTerminated;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTranslocated;
@property (readonly) bool isUnresponsive;
@property (readonly) unsigned long long lastTimestampIndex;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (retain) NSDictionary *threadsInPreviousSample;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllThreads;
@property (readonly) NSArray *timestampIndexedTasks;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool workQueueExceededConstrainedThreadLimit;
@property (readonly) bool workQueueExceededTotalThreadLimit;

- (void).cxx_destruct;
- (void)_combineAllStacks;
- (void)_combineMainThreadStacks;
- (void)_combineSerialDispatchQueueStacks;
- (void)_combineStacksByThreadID;
- (bool)_shouldDisplayStacks;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(bool)arg3;
- (id)aggregator;
- (bool)allowsIdleExit;
- (id)architectureString;
- (void)calculateTimeIndexes;
- (void)combineStacks;
- (long long)compare:(id)arg1;
- (id)concurrentDispatchQueueIds;
- (unsigned int)count;
- (unsigned int)countSuspended;
- (unsigned int)countTerminated;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (void)fillGaps;
- (id)firstTask;
- (unsigned long long)firstTimestampIndex;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isThirdParty;
- (bool)isTranslocated;
- (bool)isUnresponsive;
- (unsigned long long)lastTimestampIndex;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (id)name;
- (int)pid;
- (int)ppid;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printStacksToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (int)rpid;
- (id)sampleTaskAtTimestampIndex:(unsigned long long)arg1;
- (void)setThreadsInPreviousSample:(id)arg1;
- (id)sortedStacks;
- (id)threadsInPreviousSample;
- (double)timeOfLastResponse;
- (unsigned long long)timestampIndexWhenTransitionedToSamplingAllThreads;
- (id)timestampIndexedTasks;
- (unsigned int)uid;
- (unsigned long long)uniquePid;
- (bool)usesSuddenTermination;
- (bool)workQueueExceededConstrainedThreadLimit;
- (bool)workQueueExceededTotalThreadLimit;

@end
