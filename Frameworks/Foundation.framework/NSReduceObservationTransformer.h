/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSReduceObservationTransformer : NSObservationTransformer {
    id  _accumulator;
    id /* block */  _reducer;
}

+ (id)reduceValue:(id)arg1 withReducer:(id /* block */)arg2;

- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (void)finishObserving;
- (id)initWithBlock:(id /* block */)arg1 initialValue:(id)arg2;

@end
