/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUCompactAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource> {
    NSArray * __visibleModes;
    NSMutableSet * _expandedSupermodes;
    UIButton * _expansionButton;
    NSArray * _expansionButtonConstraints;
    PUSlidersCollectionView * _modeSlidersCollectionView;
    NSArray * _modeSlidersCollectionViewConstraints;
    PUAdjustmentsModeBadge * _titleBackground;
    UIButton * _titleButton;
    UILabel * _titleLabel;
    NSMutableDictionary * _titleViewConstraintsByKey;
    NSMutableDictionary * _titleViewsByKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addOrRemoveViewByKey:(id)arg1 wantsView:(bool)arg2 animated:(bool)arg3 factory:(id /* block */)arg4;
- (bool)_isExpandedSupermode:(id)arg1;
- (void)_modeToggleTapped:(id)arg1;
- (void)_setExpanded:(bool)arg1 forSupermode:(id)arg2 exclusive:(bool)arg3 animated:(bool)arg4;
- (void)_updateTitleViewAnimated:(bool)arg1;
- (void)_updateVisibleModesAnimated:(bool)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (id)currentSlidersCollectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)newModePickerListBackgroundView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)setListViewExpanded:(bool)arg1 explicitly:(bool)arg2 animated:(bool)arg3;
- (void)setSelectedMode:(id)arg1 animated:(bool)arg2;
- (bool)shouldShowModePickerOnFirstDisplay;
- (void)updateConstraints;
- (void)updateEnabledForCurrentMode;
- (id)visibleSliderAdjustmentModes;
- (bool)wantsToHandleEventAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)willMoveToWindow:(id)arg1;

@end
