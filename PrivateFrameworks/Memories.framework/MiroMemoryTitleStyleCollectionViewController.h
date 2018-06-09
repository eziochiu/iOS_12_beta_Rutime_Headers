/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryTitleStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    NSString * _initialTitleStyleID;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    MiroMemory * _memory;
    long long  _numberOfColumnsUsed;
    <MiroMemoryEditorPlayerViewDelegate> * _playerViewDelegate;
    MiroMemoryEditorPosterController * _posterController;
    NSIndexPath * _previouslySelectedIndexPath;
    NSObject<OS_dispatch_queue> * _serialTaskQueue;
    bool  _shouldNoteUserChangedTitleStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *initialTitleStyleID;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) long long numberOfColumnsUsed;
@property (nonatomic) <MiroMemoryEditorPlayerViewDelegate> *playerViewDelegate;
@property (nonatomic, retain) MiroMemoryEditorPosterController *posterController;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (nonatomic) bool shouldNoteUserChangedTitleStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didEndTitleStyleEditing;
- (void)_refreshAllPosters;
- (id)_selectedIndexPathForBlueprint:(id)arg1;
- (void)addObservers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)contentHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initialTitleStyleID;
- (struct CGSize { double x1; double x2; })itemSize;
- (struct CGSize { double x1; double x2; })layoutSize;
- (id)memory;
- (long long)numberOfColumnsUsed;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerViewDelegate;
- (id)posterController;
- (id)previouslySelectedIndexPath;
- (void)removeObservers;
- (void)setInitialTitleStyleID:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMemory:(id)arg1;
- (void)setNumberOfColumnsUsed:(long long)arg1;
- (void)setPlayerViewDelegate:(id)arg1;
- (void)setPosterController:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setShouldNoteUserChangedTitleStyle:(bool)arg1;
- (bool)shouldNoteUserChangedTitleStyle;
- (struct CGSize { double x1; double x2; })sizeForItemForViewWidth:(double)arg1 layout:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
