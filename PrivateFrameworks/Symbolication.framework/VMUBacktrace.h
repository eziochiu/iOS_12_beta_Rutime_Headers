/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUBacktrace : NSObject <NSCopying> {
    struct { 
        struct { 
            double t_begin; 
            double t_end; 
            int pid; 
            unsigned int thread; 
            int run_state; 
            unsigned long long dispatch_queue_serial_num; 
        } context; 
        unsigned long long *frames; 
        unsigned long long *framePtrs; 
        unsigned int length; 
    }  _callstack;
    int  _flavor;
}

- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })_symbolicator;
- (unsigned long long*)backtrace;
- (unsigned int)backtraceLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)dispatchQueueSerialNumber;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { }*)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithSamplingContext:(struct sampling_context_t { }*)arg1 thread:(unsigned int)arg2 recordFramePointers:(bool)arg3;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(bool)arg3;
- (void)setEndTime:(double)arg1;
- (void)setLengthTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setThreadState:(int)arg1;
- (unsigned long long*)stackFramePointers;
- (unsigned int)thread;
- (int)threadState;

@end
