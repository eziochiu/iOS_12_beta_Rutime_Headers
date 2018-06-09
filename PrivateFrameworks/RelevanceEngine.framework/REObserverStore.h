/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REObserverStore : NSObject {
    NSLock * _lock;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSArray *allObservers;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allObservers;
- (unsigned long long)count;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
