/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSampler : NSObject {
    id  _delegate;
    NSMutableDictionary * _dispatchQueueSerialNumToNameMap;
    unsigned int  _dispatchThreadHardLimit;
    unsigned int  _dispatchThreadHardLimitCount;
    unsigned int  _dispatchThreadSoftLimit;
    unsigned int  _dispatchThreadSoftLimitCount;
    double  _interval;
    NSMapTable * _lastThreadBacktraceMap;
    unsigned int  _mainThread;
    unsigned int  _maxPreviousThreadCount;
    bool  _needTaskPortDealloc;
    unsigned int  _numberOfCopiedBacktraces;
    unsigned int  _numberOfSamples;
    unsigned long long  _options;
    int  _pid;
    unsigned int  _previousThreadCount;
    unsigned int * _previousThreadList;
    VMUProcessDescription * _processDescription;
    NSString * _processName;
    bool  _recordThreadStates;
    unsigned int  _sampleLimit;
    NSMutableArray * _samples;
    bool  _sampling;
    struct sampling_context_t { } * _samplingContext;
    bool  _stacksFixed;
    NSConditionLock * _stateLock;
    unsigned int  _suspensionToken;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
    double  _tbInterval;
    double  _tbRate;
    NSMutableDictionary * _threadPortToNameMap;
    double  _timeLimit;
    double  _timeSpentSampling;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(bool)arg2;

- (void).cxx_destruct;
- (void)_checkDispatchThreadLimits;
- (void)_fixupStacks:(id)arg1;
- (void)_makeHighPriority;
- (void)_makeTimeshare;
- (void)_runSamplingThread;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(bool*)arg2 returnedThreadId:(unsigned long long*)arg3;
- (void)flushData;
- (void)forceStop;
- (id)initWithPID:(int)arg1;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;
- (id)initWithPID:(int)arg1 task:(unsigned int)arg2 processName:(id)arg3 is64Bit:(bool)arg4 options:(unsigned long long)arg5;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)initializeSamplingContextWithOptions:(int)arg1;
- (unsigned int)mainThread;
- (id)outputString;
- (int)pid;
- (void)preloadSymbols;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4 recordFramePointers:(bool)arg5 clearMemoryCache:(bool)arg6;
- (id)sampleAllThreadsOnce;
- (id)sampleAllThreadsOnceWithFramePointers:(bool)arg1;
- (unsigned int)sampleCount;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (unsigned int)sampleLimit;
- (id)sampleThread:(unsigned int)arg1;
- (id)samples;
- (double)samplingInterval;
- (void)setDelegate:(id)arg1;
- (void)setRecordThreadStates:(bool)arg1;
- (void)setSampleLimit:(unsigned int)arg1;
- (void)setSamplingInterval:(double)arg1;
- (void)setTimeLimit:(double)arg1;
- (bool)start;
- (bool)stop;
- (void)stopSampling;
- (id)stopSamplingAndReturnCallNode;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;
- (id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3;
- (double)timeLimit;
- (bool)waitUntilDone;
- (void)writeOutput:(id)arg1 append:(bool)arg2;

@end
