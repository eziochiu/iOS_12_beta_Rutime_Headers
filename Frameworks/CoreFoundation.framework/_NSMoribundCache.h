/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSMoribundCache : NSCache

- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countLimit;
- (void)dealloc;
- (id)delegate;
- (bool)evictsObjectsWithDiscardedContent;
- (id)name;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvictsObjectsWithDiscardedContent:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;

@end
