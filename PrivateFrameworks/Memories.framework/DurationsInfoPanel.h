/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface DurationsInfoPanel : UICollectionViewController {
    <DurationDelegate> * _durationDelegate;
    NSMutableArray * _durationNames;
    int  _initial_index;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic) <DurationDelegate> *durationDelegate;
@property (nonatomic, retain) NSMutableArray *durationNames;
@property int initial_index;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (double)_estimatedWidth;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)durationDelegate;
- (id)durationNames;
- (id)initWithCollectionViewLayout:(id)arg1 andDurations:(id)arg2;
- (int)initial_index;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDurationDelegate:(id)arg1;
- (void)setDurationNames:(id)arg1;
- (void)setInitial_index:(int)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)widthConstraint;

@end
