/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * __itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary * __sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary * __subitemIndexesByItemBySectionByDataSourceIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier;
@property (nonatomic, readonly) long long count;

+ (id)indexPathSet;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

- (void).cxx_destruct;
- (id)_itemIndexesBySectionByDataSourceIdentifier;
- (id)_sectionIndexesByDataSourceIdentifier;
- (id)_subitemIndexesByItemBySectionByDataSourceIdentifier;
- (bool)containsIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)enumerateAllIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateDataSourceIdentifiers:(id /* block */)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(id /* block */)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(id /* block */)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(id /* block */)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
