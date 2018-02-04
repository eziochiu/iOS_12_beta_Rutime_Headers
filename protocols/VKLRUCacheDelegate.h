/* made by EzioChiu.
 */

@protocol VKLRUCacheDelegate

@required

- (bool)cache:(VKLRUCache *)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3;

@end
