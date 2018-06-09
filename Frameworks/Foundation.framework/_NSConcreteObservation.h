/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> * _LHSobservable;
    NSObject<NSObserver> * _RHSobserver;
    /* Warning: unhandled array encoding: '[4@]' */ id  _observers;
}

- (void*)_observerStorageOfSize:(unsigned long long)arg1;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)remove;

@end
