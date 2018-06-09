/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAStackString : NSObject {
    unsigned long long  _count;
    unsigned long long  _dispatchQueueId;
    bool  _isMainThread;
    bool  _isTargetThread;
    SAMutableDataOutputStream * _stream;
    unsigned long long  _threadId;
}

@property unsigned long long count;
@property unsigned long long dispatchQueueId;
@property bool isMainThread;
@property bool isTargetThread;
@property (retain) SAMutableDataOutputStream *stream;
@property unsigned long long threadId;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)dispatchQueueId;
- (bool)isMainThread;
- (bool)isTargetThread;
- (void)setCount:(unsigned long long)arg1;
- (void)setDispatchQueueId:(unsigned long long)arg1;
- (void)setIsMainThread:(bool)arg1;
- (void)setIsTargetThread:(bool)arg1;
- (void)setStream:(id)arg1;
- (void)setThreadId:(unsigned long long)arg1;
- (id)stream;
- (unsigned long long)threadId;

@end
