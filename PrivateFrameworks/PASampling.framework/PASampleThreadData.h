/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleThreadData : NSObject <PASerializable> {
    int  currentScheduledPriority;
    unsigned long long  cycles;
    unsigned long long  dispatchQueueId;
    unsigned long long  instructions;
    unsigned char  ioTier;
    unsigned int  isDarwinBG;
    unsigned int  isGlobalForcedIdle;
    unsigned int  isIOPassive;
    unsigned int  isIdleWorkQueue;
    unsigned int  isRunning;
    unsigned int  isSuspended;
    PASampleFrame * leafKernelFrame;
    PASampleFrame * leafUserFrame;
    NSString * name;
    int  schedulerFlags;
    int  state;
    int  staticPriority;
    unsigned long long  systemTimeInNs;
    unsigned long long  threadId;
    BOOL  threadQos;
    BOOL  threadQosIpcOverride;
    BOOL  threadQosPromote;
    BOOL  threadQosSyncIpcOverride;
    BOOL  threadRequestedQos;
    BOOL  threadRequestedQosOverride;
    unsigned long long  userTimeInNs;
    unsigned long long  voucherIdentifier;
    PASampleWaitInfo * waitInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasAnyInfo;
@property (readonly) bool hasDispatchQueue;
@property (readonly) bool hasValidPowerstatsFlags;
@property (readonly) unsigned long long hash;
@property (readonly) bool isAbortingInterruptibleWaits;
@property (readonly) bool isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) bool isHaltedAtTermination;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) bool isRunnable;
@property (readonly) bool isStopped;
@property (readonly) bool isWaiting;
@property (readonly) bool isWaitingUninterruptibly;
@property (readonly) unsigned int powerstatsFlags;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (bool)hasAnyInfo;
- (bool)hasDispatchQueue;
- (bool)hasValidPowerstatsFlags;
- (unsigned long long)hash;
- (id)initWithKCDataStackshotDeltaThreadV2:(const struct thread_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6;
- (id)initWithKCDataStackshotDeltaThreadV3:(const struct thread_delta_snapshot_v3 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; unsigned long long x14; }*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andOldThreadData:(id)arg5 andWaitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7;
- (id)initWithKCDataStackshotThreadV2:(const struct thread_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; }*)arg1 withName:(id)arg2 andLeafUserFrame:(id)arg3 andLeafKernelFrame:(id)arg4 andMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg5 andWaitInfo:(id)arg6;
- (id)initWithKCDataStackshotThreadV4:(const struct thread_snapshot_v4 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; }*)arg1 withName:(id)arg2 leafUserFrame:(id)arg3 leafKernelFrame:(id)arg4 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg5 waitInfo:(id)arg6 threadPolicyVersion:(unsigned int)arg7 threadInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg8;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2 andLeafKernelFrame:(id)arg3;
- (id)initWithTid:(unsigned long long)arg1;
- (bool)isAbortingInterruptibleWaits;
- (bool)isAbortingInterruptibleWaitsAtSafePoints;
- (bool)isEqual:(id)arg1;
- (bool)isHaltedAtTermination;
- (bool)isProcessorIdleThread;
- (bool)isRunnable;
- (bool)isStackEqualTo:(id)arg1;
- (bool)isStopped;
- (bool)isWaiting;
- (bool)isWaitingUninterruptibly;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned int)powerstatsFlags;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)stack;

@end
