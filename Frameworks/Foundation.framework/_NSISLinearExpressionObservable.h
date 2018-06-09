/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSISLinearExpressionObservable : NSObservationSource {
    NSISEngine * _associatedEngine;
    id  _changeTransactionObservation;
    NSISLinearExpression * _expression;
    NSNumber * _lastValue;
    bool  _valueIsDirtied;
    NSMutableArray * _variableObservations;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;

- (void)_lazilyObserveVariablesIfNeeded;
- (bool)_overrideUseFastBlockObservers;
- (id)addObserver:(id)arg1;
- (id)addObserverBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)emitValueIfNeeded;
- (id)initWithExpression:(id)arg1 inEngine:(id)arg2;
- (void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2;

@end
