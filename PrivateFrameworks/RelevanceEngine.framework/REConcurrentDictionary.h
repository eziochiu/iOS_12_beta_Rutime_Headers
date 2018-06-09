/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REConcurrentDictionary : NSObject {
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
