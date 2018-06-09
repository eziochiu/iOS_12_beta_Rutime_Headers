/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack> {
    PAAggregatedProcessInstance * _aggregatedTask;
    NSMutableArray * _contiguousStacks;
    unsigned long long  _cpuCyclesCached;
    unsigned long long  _cpuInstructionsCached;
    unsigned long long  _cpuTimeNsCached;
    unsigned long long  _dispatchQueueId;
    int  _maxBasePriority;
    int  _maxPriority;
    int  _minBasePriority;
    int  _minPriority;
    unsigned long long  _threadId;
}

@property (readonly) PAAggregatedProcessInstance *aggregatedTask;
@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) NSMutableArray *contiguousStacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long dispatchQueueId;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) unsigned long long hash;
@property (readonly) bool isGlobalForcedIdleThread;
@property (readonly) bool isIdleWorkQueueThread;
@property (readonly) bool isMainThread;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) unsigned long long lastTimestampIndex;
@property int maxBasePriority;
@property int maxPriority;
@property int minBasePriority;
@property int minPriority;
@property (readonly) Class superclass;
@property unsigned long long threadId;

- (void).cxx_destruct;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(bool)arg3;
- (void)addStack:(id)arg1;
- (id)aggregatedTask;
- (id)aggregator;
- (long long)compare:(id)arg1;
- (id)contiguousStacks;
- (id)copyDescriptionForSampleFrame:(id)arg1 inSampleTask:(id)arg2;
- (id)copyStringForMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (int)count;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)firstTimestampIndex;
- (bool)hasSingleName:(id*)arg1;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isGlobalForcedIdleThread;
- (bool)isIdleWorkQueueThread;
- (bool)isMainThread;
- (bool)isProcessorIdleThread;
- (bool)isSingleStack;
- (unsigned long long)lastTimestampIndex;
- (int)maxBasePriority;
- (int)maxPriority;
- (int)minBasePriority;
- (int)minPriority;
- (unsigned long long)numMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printHeavyStacksToOutputStream:(id)arg1 onlyPrintHeaviest:(bool)arg2;
- (void)printStackToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (id)sampleStore;
- (void)setDispatchQueueId:(unsigned long long)arg1;
- (void)setMaxBasePriority:(int)arg1;
- (void)setMaxPriority:(int)arg1;
- (void)setMinBasePriority:(int)arg1;
- (void)setMinPriority:(int)arg1;
- (void)setThreadId:(unsigned long long)arg1;
- (unsigned long long)threadId;

@end