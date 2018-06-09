/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNObserverHashTable : NSObject {
    NSHashTable * _observers;
    Protocol * _protocol;
}

@property (readonly) bool hasObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (bool)hasObservers;
- (id)initWithProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;

@end
