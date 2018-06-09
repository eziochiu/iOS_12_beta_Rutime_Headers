/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTimelineClipCollectionViewController : UICollectionViewController <MiroCollectionViewDelegate, MiroEditorClipCollection, MiroEditorFlowLayoutDelegate> {
    NSIndexPath * _collectionViewDraggingIndexPath;
    <MiroEditorClipCollectionDataSource> * _dataSource;
    <MiroEditorClipCollectionDelegate> * _delegate;
    bool  _highlightCenterThumbnail;
    NSIndexPath * _initialIndexPath;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewContentInsets;
@property (nonatomic, retain) NSIndexPath *collectionViewDraggingIndexPath;
@property (nonatomic) <MiroEditorClipCollectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroEditorClipCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightCenterThumbnail;
@property (nonatomic, retain) NSIndexPath *initialIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cellSizeForClipAtIndex:(long long)arg1;
- (double)_proximityToCenterForCellAtIndexPath:(id)arg1;
- (void)_snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_updateHighlightForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateHighlightForVisibleCellsAnimated:(bool)arg1;
- (id)cellForClip:(id)arg1;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewContentInsets;
- (id)collectionViewDraggingIndexPath;
- (id)dataSource;
- (id)delegate;
- (bool)highlightCenterThumbnail;
- (id)initialIndexPath;
- (void)miroCollectionView:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
- (void)miroCollectionViewDidCancelInteractiveMovement:(id)arg1;
- (void)miroCollectionViewDidEndInteractiveMovement:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionViewDraggingIndexPath:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightCenterThumbnail:(bool)arg1;
- (void)setInitialIndexPath:(id)arg1;
- (void)snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
