/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSObserverList : NSObject {
    unsigned int  _observerCount;
    id  _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    id  _owner;
}

+ (id)_copyObserversOfObject:(id)arg1 creatingIfAbsent:(bool)arg2;
+ (void)destroyObserverListForObject:(id)arg1;

- (void).cxx_destruct;
- (void)_directAddObserver:(id)arg1;
- (void)_receiveBox:(id)arg1;
- (id)addBlockSink:(id /* block */)arg1 toObservableObject:(id)arg2 forTag:(int)arg3;
- (id)addObserver:(id)arg1 toObservableObject:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)finishObserving;
- (id)init;
- (void)removeBlockSink:(id /* block */)arg1 observation:(id)arg2;
- (void)removeObservation:(id)arg1;
- (void)removeObserver:(id)arg1 observation:(id)arg2;

@end
