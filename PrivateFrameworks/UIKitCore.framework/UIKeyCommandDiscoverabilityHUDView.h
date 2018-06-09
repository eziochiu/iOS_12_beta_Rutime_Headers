/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIKeyCommandDiscoverabilityHUDColumnViewDelegate> {
    UIView * _HUDOutlineView;
    NSLayoutConstraint * _HUDOutlineViewHeightConstraint;
    NSLayoutConstraint * _HUDOutlineViewWidthConstraint;
    UIVisualEffectView * _backdropView;
    UIBlurEffect * _blurEffect;
    unsigned long long  _cellsPerColumn;
    UICollectionView * _collectionView;
    NSLayoutConstraint * _collectionViewBottomConstraint;
    NSLayoutConstraint * _collectionViewLeadingConstraint;
    NSLayoutConstraint * _collectionViewTopConstraint;
    NSLayoutConstraint * _collectionViewTrailingConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _columnSize;
    UICollectionViewFlowLayout * _flowLayout;
    double  _fontScaleFactor;
    NSArray * _keyCommands;
    UIPageControl * _pageControl;
    NSLayoutConstraint * _pageControlYAnchor;
    unsigned long long  _pageCount;
    bool  _shouldUseWordsNotSymbols;
    bool  _twoColumnsPerPage;
    UIVibrancyEffect * _vibrancyEffect;
    UIKeyCommandDiscoverabilityHUDVisualStyle * _visualStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_shouldUseWordsNotSymbols, nonatomic, readonly) bool shouldUseWordsNotSymbols;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIKeyCommandDiscoverabilityHUDVisualStyle *visualStyle;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_bestColumnSizeWithCellsPerColumn:(unsigned long long)arg1 maxColumnSize:(struct CGSize { double x1; double x2; })arg2 columnCount:(unsigned long long)arg3 usingColumnView:(id)arg4 getFontScaleFactor:(double*)arg5;
- (id)_columnViewForColumnIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (id)_discoverabilityTitleForKeyCommand:(id)arg1;
- (id)_displayInputAndModifierFlagsForInput:(id)arg1 modifierFlags:(long long)arg2;
- (id)_keyCommandsForColumnIndex:(unsigned long long)arg1 withCellsPerColumn:(unsigned long long)arg2;
- (void)_pageControlValueChanged:(id)arg1;
- (bool)_shouldUseWordsNotSymbols;
- (id)_stringForInput:(id)arg1 withModifierFlags:(long long)arg2;
- (id)_stringForModifierFlags:(long long)arg1;
- (void)animateIn;
- (void)animateOutWithCompletion:(id /* block */)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 descriptionStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 inputStringForKeyCommand:(id)arg2;
- (id)discoverabilityHUDColumnView:(id)arg1 modifiersStringForKeyCommand:(id)arg2;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard { }*)arg2;
- (void)recalculatePages;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualStyle:(id)arg1;
- (id)visualStyle;

@end
