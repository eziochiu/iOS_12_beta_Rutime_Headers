/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore> {
    NSString * _domain;
    _DKKnowledgeStorage * _storage;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;

- (void).cxx_destruct;
- (id)domain;
- (id)initWithStorage:(id)arg1 domain:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)storage;

@end
