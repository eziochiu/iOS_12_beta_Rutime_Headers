/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAThreadStateChangeEvent : NSObject {
    double  _machTimestamp;
    unsigned long long  _stateChangeType;
    PASampleThreadData * _threadData;
}

@property (nonatomic) double machTimestamp;
@property (nonatomic) unsigned long long stateChangeType;
@property (nonatomic, readonly) PASampleThreadData *threadData;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initUnknownThreadStateChangeEventWithTid:(unsigned long long)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (id)initWithThreadData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (double)machTimestamp;
- (void)setMachTimestamp:(double)arg1;
- (void)setStateChangeType:(unsigned long long)arg1;
- (unsigned long long)stateChangeType;
- (id)threadData;

@end