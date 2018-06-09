/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderPipelineFunction : NSObject

+ (id)functionWithEvaluationBlock:(id /* block */)arg1;

- (id)evaluate:(id)arg1 error:(out id*)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;

@end