/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REObservableSingleton : RESingleton {
    REObserverStore * _store;
}

@property (nonatomic, readonly) unsigned long long numberOfObservers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)init;
- (unsigned long long)numberOfObservers;
- (void)removeObserver:(id)arg1;

@end
