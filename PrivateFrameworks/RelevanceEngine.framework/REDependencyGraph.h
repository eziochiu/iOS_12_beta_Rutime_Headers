/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDependencyGraph : NSObject <NSCopying> {
    NSMapTable * _nodes;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4;
- (void)addItem:(id)arg1;
- (id)allItems;
- (bool)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)item:(id)arg1 isDependencyOfItem:(id)arg2;
- (void)markItem:(id)arg1 dependentOnItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (id)topolgicalSortedItems;

@end
