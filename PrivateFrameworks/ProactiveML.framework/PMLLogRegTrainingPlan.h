/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {
    long long  _beforeNoiseScaling;
    float  _constantScaleFactor;
    PMLModelWeights * _currentModelWeights;
    unsigned long long  _currentServerIteration;
    unsigned long long  _evaluationLevel;
    bool  _intercept;
    bool  _isMultiLabel;
    bool  _isSynchronous;
    unsigned long long  _localGradientIterations;
    float  _localLearningRate;
    unsigned long long  _localMinimumIterations;
    unsigned long long  _maxSessionsLimit;
    <PMLNoiseStrategy> * _noiseStrategy;
    struct NSString { Class x1; } * _planId;
    unsigned long long  _positiveLabel;
    bool  _reportScale;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    double  _skew;
    float  _stoppingThreshold;
    PMLTrainingStore * _store;
    double  _threshold;
    <PMLLogRegTrackerProtocol> * _tracker;
    bool  _useOnlyAppleInternalSessions;
}

@property (nonatomic, readonly) long long beforeNoiseScaling;
@property (nonatomic, readonly) float constantScaleFactor;
@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (nonatomic, readonly) unsigned long long currentServerIteration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) bool isMultiLabel;
@property (nonatomic, readonly) bool isSynchronous;
@property (nonatomic, readonly) unsigned long long localGradientIterations;
@property (nonatomic, readonly) float localLearningRate;
@property (nonatomic, readonly) unsigned long long localMinimumIterations;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) unsigned long long positiveLabel;
@property (nonatomic, readonly) bool reportScale;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) float stoppingThreshold;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLLogRegTrackerProtocol> *tracker;
@property (nonatomic, readonly) bool useOnlyAppleInternalSessions;

+ (id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4;

- (void).cxx_destruct;
- (long long)beforeNoiseScaling;
- (float)constantScaleFactor;
- (id)currentModelWeights;
- (unsigned long long)currentServerIteration;
- (id)description;
- (unsigned long long)evaluationLevel;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(id /* block */)arg3 start:(id)arg4;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString { Class x1; }*)arg4 isSynchronous:(bool)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 stoppingThreshold:(float)arg12 localMinimumIterations:(unsigned long long)arg13 localGradientIterations:(unsigned long long)arg14 useOnlyAppleInternalSessions:(bool)arg15 skew:(double)arg16 threshold:(double)arg17 isMultiLabel:(bool)arg18 intercept:(bool)arg19 positiveLabel:(unsigned long long)arg20 beforeNoiseScaling:(long long)arg21 constantScaleFactor:(float)arg22 evaluationLevel:(unsigned long long)arg23 reportScale:(bool)arg24;
- (bool)intercept;
- (bool)isMultiLabel;
- (bool)isSynchronous;
- (void)loadSessionsSince:(double)arg1 block:(id /* block */)arg2;
- (unsigned long long)localGradientIterations;
- (float)localLearningRate;
- (unsigned long long)localMinimumIterations;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (struct NSString { Class x1; }*)planId;
- (unsigned long long)positiveLabel;
- (bool)reportScale;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (float)scaleFactorFor:(id)arg1;
- (id)sessionDescriptor;
- (float)stoppingThreshold;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (id)train;
- (bool)useOnlyAppleInternalSessions;

@end
