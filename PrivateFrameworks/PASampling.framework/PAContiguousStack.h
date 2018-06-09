/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAContiguousStack : NSObject {
    unsigned long long  _firstTimestampIndex;
    unsigned long long  _previousCpuCycles;
    unsigned long long  _previousCpuInstructions;
    unsigned long long  _previousCpuTimeNs;
    NSMutableArray * _threads;
}

@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) unsigned long long threadId;

- (void).cxx_destruct;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)firstTimestampIndex;
- (bool)hasSingleName:(id*)arg1;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 andPreviousCpuInstructions:(unsigned long long)arg3 andPreviousCpuCycles:(unsigned long long)arg4;
- (bool)isGlobalForcedIdleThread;
- (bool)isIdleWorkQueueThread;
- (bool)isProcessorIdleThread;
- (bool)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2;
- (void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned long long)arg2 toTimestampIndex:(unsigned long long)arg3 callback:(id /* block */)arg4;
- (void)iterateSampleThreadsFromTimestampIndex:(unsigned long long)arg1 toTimestampIndex:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (unsigned long long)lastTimestampIndex;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (bool)threadExistedPreviously;
- (unsigned long long)threadId;

@end
