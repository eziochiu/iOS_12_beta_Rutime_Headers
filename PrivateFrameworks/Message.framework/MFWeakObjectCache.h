/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWeakObjectCache : NSObject {
    id /* block */  _block;
    NSMutableDictionary * _dictionary;
    NSLock * _lock;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 shouldGenerate:(bool)arg2 wasCached:(bool*)arg3;
- (id)objectForKey:(id)arg1 wasCached:(bool*)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)weakObjectCacheRefForKey:(id)arg1;

@end
