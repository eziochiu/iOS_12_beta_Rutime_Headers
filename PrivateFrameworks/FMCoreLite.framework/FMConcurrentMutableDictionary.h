/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMConcurrentMutableDictionary : NSObject {
    FMReadWriteLock * _lock;
    NSMutableDictionary * _underlyingDictionary;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) FMReadWriteLock *lock;
@property (nonatomic, retain) NSMutableDictionary *underlyingDictionary;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)lock;
- (id)nativeDictionary;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withConstructor:(id /* block */)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)popObjectforKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)setLock:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setUnderlyingDictionary:(id)arg1;
- (id)underlyingDictionary;

@end
