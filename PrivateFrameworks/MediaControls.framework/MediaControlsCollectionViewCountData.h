/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsCollectionViewCountData : NSObject <NSCopying> {
    NSMutableIndexSet * _deletedIndexes;
    bool  _hasPendingChanges;
    NSMutableIndexSet * _insertedIndexes;
    long long  _numberOfItems;
    NSMutableIndexSet * _updatedIndexes;
}

@property (nonatomic, readonly, copy) NSIndexSet *deletedIndexes;
@property (nonatomic) bool hasPendingChanges;
@property (nonatomic, readonly, copy) NSIndexSet *insertedIndexes;
@property (nonatomic) long long numberOfItems;
@property (nonatomic, readonly, copy) NSIndexSet *updatedIndexes;

- (void).cxx_destruct;
- (void)applyChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)deleteItemsAtIndexes:(id)arg1;
- (id)deletedIndexes;
- (bool)hasPendingChanges;
- (id)init;
- (id)initWithNumberOfItems:(long long)arg1;
- (void)insertItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (id)insertedIndexes;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (long long)numberOfItems;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)setHasPendingChanges:(bool)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (id)updatedIndexes;
- (bool)validateCountForNumberOfItems:(long long)arg1;

@end
