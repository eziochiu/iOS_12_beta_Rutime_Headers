/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SACountedTreeState : SACountedTreeNode <SAJSONSerialization> {
    unsigned int  _microstackshotState;
    int  _pid;
    SATimestamp * _startTimestamp;
    unsigned long long  _state;
    unsigned long long  _threadId;
    SAWaitInfo * _waitInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int microstackshotState;
@property (readonly) int pid;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadId;
@property (readonly) SAWaitInfo *waitInfo;

+ (id)treeCountedStateWithWaitInfo:(id)arg1 state:(unsigned long long)arg2 microstackshotState:(unsigned int)arg3 pid:(int)arg4 threadId:(unsigned long long)arg5 startSampleIndex:(unsigned long long)arg6 startTimestamp:(id)arg7 sampleCount:(unsigned long long)arg8;
+ (void)writeJSONDictionaryEntriesToStream:(id)arg1 microstackshotState:(unsigned int)arg2 primaryMicrostackshotState:(unsigned int)arg3 includeIdleAndBattery:(bool)arg4;

- (void).cxx_destruct;
- (id)initWithWaitInfo:(id)arg1 state:(unsigned long long)arg2 microstackshotState:(unsigned int)arg3 pid:(int)arg4 threadId:(unsigned long long)arg5 startSampleIndex:(unsigned long long)arg6 startTimestamp:(id)arg7 sampleCount:(unsigned long long)arg8;
- (unsigned int)microstackshotState;
- (int)pid;
- (id)startTimestamp;
- (unsigned long long)state;
- (unsigned long long)threadId;
- (id)waitInfo;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
