/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAHIDStep : NSObject {
    unsigned int  _debugid;
    int  _pid;
    unsigned long long  _tid;
    SATimestamp * _timestamp;
}

@property (readonly) unsigned int debugid;
@property (readonly) int pid;
@property (readonly) unsigned long long tid;
@property (retain) SATimestamp *timestamp;

+ (id)hidStepWithDebugId:(unsigned int)arg1 pid:(int)arg2 tid:(unsigned long long)arg3;
+ (id)hidStepWithKTraceEvent:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 fromSession:(struct ktrace_session { }*)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned int)debugid;
- (id)initWithKTraceEvent:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 fromSession:(struct ktrace_session { }*)arg2;
- (id)initWithTimestamp:(id)arg1 debugID:(unsigned int)arg2 pid:(int)arg3 tid:(unsigned long long)arg4;
- (int)pid;
- (void)setTimestamp:(id)arg1;
- (unsigned long long)tid;
- (id)timestamp;

@end