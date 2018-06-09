/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLClassificationEvaluationMetrics : NSObject

+ (void)addScoresForOutcomes:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3 metrics:(id)arg4;
+ (float)f1Score:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (unsigned long long)falseNegatives:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (unsigned long long)falsePositives:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (float)precision:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (float)recall:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (float)roundFloatToSigFigs:(float)arg1 sigFigs:(int)arg2;
+ (unsigned long long)trueNegatives:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;
+ (unsigned long long)truePositives:(id)arg1 predictions:(id)arg2 predicate:(id /* block */)arg3;

@end
