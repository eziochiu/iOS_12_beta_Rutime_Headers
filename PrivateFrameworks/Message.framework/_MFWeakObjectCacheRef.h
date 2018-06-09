/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFWeakObjectCacheRef : NSObject {
    MFWeakObjectCache * _cache;
    <NSCopying> * _key;
}

@property (nonatomic) MFWeakObjectCache *cache;
@property (nonatomic, copy) <NSCopying> *key;

- (void).cxx_destruct;
- (id)cache;
- (void)dealloc;
- (id)key;
- (void)setCache:(id)arg1;
- (void)setKey:(id)arg1;

@end
