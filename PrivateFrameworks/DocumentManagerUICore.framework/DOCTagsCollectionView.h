/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagsCollectionView : UIView <DOCTagViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    <DOCTagsCollectionViewDelegate> * _delegate;
    DOCTagView * _firstBaselineView;
    DOCTagView * _lastBaselineView;
    NSDictionary * _sizingCells;
    NSArray * _tags;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCTagsCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DOCTagView *firstBaselineView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DOCTagView *lastBaselineView;
@property (nonatomic, readonly) NSDictionary *sizingCells;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tags;

- (void).cxx_destruct;
- (void)_DOCTagsCollectionViewSharedInit;
- (void)awakeFromNib;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(id /* block */)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)firstBaselineView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)lastBaselineView;
- (void)setDelegate:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setupCells:(id)arg1;
- (id)sizingCells;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (id)tags;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
