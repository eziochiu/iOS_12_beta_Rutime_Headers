/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLegacySectionedDataSourceChangeDetails : NSObject {
    NSArray * _changedIndexPaths;
    NSIndexSet * _changedSections;
    NSArray * _contentChangedIndexPaths;
    NSArray * _contentItemsChangedIndexPaths;
    NSArray * _deletedIndexPaths;
    NSIndexSet * _deletedSections;
    bool  _hasIncrementalChanges;
    bool  _hasMoves;
    NSArray * _insertedIndexPaths;
    NSIndexSet * _insertedSections;
    bool  _prepared;
    PXSectionedDataSourceChangeDetails * _sectionedDataSourceChangeDetails;
    long long  _shiftingSectionLocation;
}

@property (nonatomic, readonly) NSArray *changedItemsIndexPaths;
@property (nonatomic, readonly) NSIndexSet *changedSections;
@property (nonatomic, readonly) NSArray *contentItemsChangedIndexPaths;
@property (nonatomic, readonly) NSArray *deletedItemsIndexPaths;
@property (nonatomic, readonly) NSIndexSet *deletedSections;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, readonly) NSArray *insertedItemsIndexPaths;
@property (nonatomic, readonly) NSIndexSet *insertedSections;
@property (nonatomic, readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;

- (void).cxx_destruct;
- (void)_prepareIncrementalDetails;
- (id)changedItemsIndexPaths;
- (id)changedSections;
- (id)contentChangedItemsIndexPaths;
- (id)contentItemsChangedIndexPaths;
- (id)deletedItemsIndexPaths;
- (id)deletedSections;
- (id)description;
- (void)enumerateMovedIndexPathsUsingBlock:(id /* block */)arg1;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (id)initWithSectionedDataSourceChangeDetails:(id)arg1 shiftedSection:(long long)arg2;
- (id)insertedItemsIndexPaths;
- (id)insertedSections;
- (void)prepareIfNeeded;
- (id)sectionedDataSourceChangeDetails;

@end
