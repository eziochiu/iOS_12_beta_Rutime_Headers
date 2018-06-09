/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorClipCollectionViewController : UICollectionViewController <MiroEditorClipCollection, MiroEditorFlowLayoutDelegate> {
    <MiroEditorClipCollectionDataSource> * _dataSource;
    <MiroEditorClipCollectionDelegate> * _delegate;
    NSIndexPath * _initialIndexPath;
    bool  _isInViewWillTransitionToSize;
}

@property (nonatomic) <MiroEditorClipCollectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroEditorClipCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *initialIndexPath;
@property (nonatomic) bool isInViewWillTransitionToSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (id)cellForClip:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)dataSource;
- (id)delegate;
- (id)initialIndexPath;
- (bool)isInViewWillTransitionToSize;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialIndexPath:(id)arg1;
- (void)setIsInViewWillTransitionToSize:(bool)arg1;
- (void)snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
