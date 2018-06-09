/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedSectionInfosChange : NSObject {
    NSIndexSet * _deletedIndexes;
    NSIndexSet * _insertedIndexes;
    NSSet * _sectionInfosWithCommentChanges;
    bool  _shouldReload;
    NSSet * _updatedAssets;
    NSIndexSet * _updatedIndexes;
}

@property (nonatomic, retain) NSIndexSet *deletedIndexes;
@property (nonatomic, retain) NSIndexSet *insertedIndexes;
@property (nonatomic, retain) NSSet *sectionInfosWithCommentChanges;
@property (nonatomic) bool shouldReload;
@property (nonatomic, retain) NSSet *updatedAssets;
@property (nonatomic, retain) NSIndexSet *updatedIndexes;

- (void).cxx_destruct;
- (id)deletedIndexes;
- (id)insertedIndexes;
- (id)sectionInfosWithCommentChanges;
- (void)setDeletedIndexes:(id)arg1;
- (void)setInsertedIndexes:(id)arg1;
- (void)setSectionInfosWithCommentChanges:(id)arg1;
- (void)setShouldReload:(bool)arg1;
- (void)setUpdatedAssets:(id)arg1;
- (void)setUpdatedIndexes:(id)arg1;
- (bool)shouldReload;
- (id)updatedAssets;
- (id)updatedIndexes;

@end
