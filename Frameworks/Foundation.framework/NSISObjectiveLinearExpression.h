/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISObjectiveLinearExpression : NSObject {
    struct __CFData { } * _constant;
    NSISEngine * _engine;
    struct __CFDictionary { } * _priorityMap;
    struct __CFArray { } * _variablesSortedByPriorityVectors;
}

- (void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(id /* block */)arg4 processVarDroppedFromReceiver:(id /* block */)arg5;
- (void)addVar:(struct { unsigned int x1; })arg1 priority:(double)arg2 times:(double)arg3;
- (void)addVar:(struct { unsigned int x1; })arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(id /* block */)arg4 processVarDroppedFromReceiver:(id /* block */)arg5;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3;
- (bool)constantTermIsZero;
- (void)dealloc;
- (id)description;
- (void)enumerateVars:(id /* block */)arg1;
- (void)incrementConstantWithPriority:(double)arg1 value:(double)arg2;
- (void)incrementConstantWithPriorityVector:(struct __CFData { }*)arg1 timesScalarCoefficient:(double)arg2;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (id)initWithLinearExpression:(id)arg1 priority:(double)arg2 engine:(id)arg3;
- (void)leadingPriority:(double*)arg1 andValue:(double*)arg2 forVar:(struct { unsigned int x1; })arg3;
- (struct __CFData { }*)priorityVectorForVar:(struct { unsigned int x1; })arg1;
- (void)removeVar:(struct { unsigned int x1; })arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVar:(struct { unsigned int x1; })arg1 withExpression:(id)arg2 processVarNewToReceiver:(id /* block */)arg3 processVarDroppedFromReceiver:(id /* block */)arg4;
- (void)replaceVar:(struct { unsigned int x1; })arg1 withVarPlusDelta:(double)arg2;
- (void)replaceVar:(struct { unsigned int x1; })arg1 withVarPlusDelta:(double)arg2 timesVar:(struct { unsigned int x1; })arg3 processVarNewToReceiver:(id /* block */)arg4 processVarDroppedFromReceiver:(id /* block */)arg5;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (bool)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct { unsigned int x1; }*)arg1;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)setPriorityVector:(struct __CFData { }*)arg1 forKnownAbsentVar:(struct { unsigned int x1; })arg2;
- (int)valueRestrictionForVar:(struct { unsigned int x1; })arg1;
- (unsigned long long)variableCount;
- (void)verifyInternalIntegrity;

@end
