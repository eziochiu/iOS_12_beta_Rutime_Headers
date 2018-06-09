/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSISVariableObservable : NSObservationSource {
    NSISEngine * _associatedEngine;
    unsigned int  _hasLastValue;
    double  _lastValue;
    _NSISVariableObservable * _nextDirtyObservable;
    _NSISVariableObservable * _prevDirtyObservable;
    unsigned int  _valueIsDirtied;
    NSISVariable * _variable;
}

+ (id)observableForVariable:(id)arg1 inEngine:(id)arg2;

- (void)dealloc;
- (void)emitValueIfNeeded;
- (id)initWithVariable:(id)arg1 inEngine:(id)arg2;
- (void)receiveObservedValue:(id)arg1;
- (bool)valueHasChanged;

@end
