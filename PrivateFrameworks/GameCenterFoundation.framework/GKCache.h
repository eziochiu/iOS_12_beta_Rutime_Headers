/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCache : NSObject <GKCache> {
    GKLinkedList * _cacheList;
    unsigned long long  _count;
    NSMutableDictionary * _dictionary;
    unsigned long long  _maxCount;
}

@property (nonatomic, retain) GKLinkedList *cacheList;
@property (nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxCount;
@property (readonly) Class superclass;

- (id)cacheList;
- (unsigned long long)count;
- (void)dealloc;
- (id)dictionary;
- (id)initWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)maxCount;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCacheList:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDictionary:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
