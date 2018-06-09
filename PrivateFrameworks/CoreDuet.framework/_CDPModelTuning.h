/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPModelTuning : NSObject {
    _CDPModelTuningState * _currentState;
    id /* block */  _heartBeat;
    _CDPSimpleModel * _model;
    int  _numberOfGridTests;
    id /* block */  _scorer;
    NSIndexSet * _testIndices;
}

@property (nonatomic, readonly) _CDPModelTuningState *currentState;
@property (nonatomic, copy) id /* block */ heartBeat;
@property (nonatomic, retain) _CDPSimpleModel *model;
@property (nonatomic, readonly) int numberOfGridTests;
@property (nonatomic, copy) id /* block */ scorer;
@property (nonatomic, retain) NSIndexSet *testIndices;

+ (void)_addArray:(float*)arg1 size:(unsigned long long)arg2 inArray:(float*)arg3;
+ (void)_cumulativeSumOfArray:(float*)arg1 size:(unsigned long long)arg2 reverse:(bool)arg3;
+ (void)_enumerateSubsetsOfSet:(unsigned int*)arg1 setLength:(unsigned long long)arg2 index:(unsigned long long)arg3 subset:(unsigned int*)arg4 subsetLength:(unsigned long long)arg5 index:(unsigned long long)arg6 callback:(id /* block */)arg7;
+ (void)_enumerateSubsetsOfSet:(unsigned int*)arg1 setLength:(unsigned long long)arg2 withSize:(unsigned long long)arg3 callback:(id /* block */)arg4;
+ (unsigned int*)_newSetDifference:(unsigned int*)arg1 setLength:(unsigned long long)arg2 subset:(unsigned int*)arg3 subsetLength:(unsigned long long)arg4;
+ (id /* block */)f1Score;
+ (id /* block */)f2Score;
+ (id /* block */)fScoreWithBeta:(float)arg1;

- (void).cxx_destruct;
- (float)_testModelWithThreshold:(float*)arg1;
- (id)currentState;
- (id /* block */)heartBeat;
- (id)model;
- (int)numberOfGridTests;
- (void)resumeTuningWithState:(id)arg1;
- (id /* block */)scorer;
- (void)setHeartBeat:(id /* block */)arg1;
- (void)setModel:(id)arg1;
- (void)setScorer:(id /* block */)arg1;
- (void)setTestIndices:(id)arg1;
- (id)testIndices;

@end