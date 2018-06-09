/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUAtomicLRUCache : TSULRUCache

- (id)allKeys;
- (id)allValues;
- (void)clearEvictionCallbackTarget;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
