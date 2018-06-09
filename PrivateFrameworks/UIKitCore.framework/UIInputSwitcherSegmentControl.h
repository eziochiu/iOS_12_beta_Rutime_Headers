/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherSegmentControl : UIControl {
    NSArray * _segmentImages;
    NSArray * _segmentTitles;
    long long  _selectedSegmentIndex;
    UIStackView * _stackView;
    bool  _usesDarkTheme;
}

@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (nonatomic, retain) NSArray *segmentImages;
@property (nonatomic, copy) NSArray *segmentTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic) bool usesDarkTheme;

- (void).cxx_destruct;
- (void)_populateSegmentViewsWithCount:(unsigned long long)arg1;
- (void)_removeAllSegmentViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfSegments;
- (id)segmentImages;
- (id)segmentTitles;
- (long long)selectedSegmentIndex;
- (void)setSegmentImages:(id)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsesDarkTheme:(bool)arg1;
- (bool)shouldTrack;
- (id)stackView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)usesDarkTheme;

@end
