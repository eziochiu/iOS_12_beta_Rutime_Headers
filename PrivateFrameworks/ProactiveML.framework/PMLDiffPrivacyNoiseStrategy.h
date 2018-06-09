/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy> {
    bool  _inplaceNorm;
    int  _maxIterations;
    float  _minimumMagnitude;
    Class  _samplerClass;
    float  _scaleFactor;
    unsigned long long  _seed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int maxIterations;
@property float minimumMagnitude;
@property (retain) Class samplerClass;
@property float scaleFactor;
@property (readonly) Class superclass;

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;

- (void).cxx_destruct;
- (void)addNoiseToDenseVector:(id)arg1;
- (void)addNoiseToFeatureMatrix:(id)arg1;
- (void)addNoiseToGradient:(id)arg1;
- (void)addNoiseToObjectiveFeatures:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToWeights:(id)arg1;
- (id)createSampler;
- (id)description;
- (id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 samplerClass:(Class)arg4 inplaceNorm:(bool)arg5;
- (id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 samplerClass:(Class)arg5 inplaceNorm:(bool)arg6;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (int)maxIterations;
- (float)minimumMagnitude;
- (Class)samplerClass;
- (float)scaleFactor;
- (void)setMaxIterations:(int)arg1;
- (void)setMinimumMagnitude:(float)arg1;
- (void)setSamplerClass:(Class)arg1;
- (void)setScaleFactor:(float)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
