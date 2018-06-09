/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLinearRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol> {
    PMLGradientSolver * _solver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)solverWithWeights:(id)arg1;
+ (id)solverWithWeights:(id)arg1 andIntercept:(bool)arg2;
+ (id)withWeights:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithSolver:(id)arg1;
- (float)predict:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
