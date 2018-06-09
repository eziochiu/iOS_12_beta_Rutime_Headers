/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MoodInfoPanel : UICollectionViewController {
    bool  _firstPresentation;
    int  _initial_index;
    NSString * _kNeutralDisplayName;
    <MoodDelegate> * _moodDelegate;
    NSArray * _moods;
}

@property bool firstPresentation;
@property int initial_index;
@property (nonatomic, retain) NSString *kNeutralDisplayName;
@property (nonatomic) <MoodDelegate> *moodDelegate;
@property (nonatomic, retain) NSArray *moods;

- (void).cxx_destruct;
- (double)_estimatedWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)firstPresentation;
- (int)initial_index;
- (id)kNeutralDisplayName;
- (id)moodDelegate;
- (id)moods;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredFocusEnvironments;
- (void)setFirstPresentation:(bool)arg1;
- (void)setInitial_index:(int)arg1;
- (void)setKNeutralDisplayName:(id)arg1;
- (void)setMoodDelegate:(id)arg1;
- (void)setMoods:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
