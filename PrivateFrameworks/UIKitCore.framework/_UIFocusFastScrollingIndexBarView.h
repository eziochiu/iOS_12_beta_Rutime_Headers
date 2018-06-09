/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingIndexBarView : UIView {
    UIFont * _backgroundFont;
    NSMutableArray * _backgroundLabels;
    long long  _deflectedIndex;
    double  _deflectionAmount;
    NSArray * _entries;
    long long  _focusProminence;
    UIFont * _foregroundFont;
    NSMutableArray * _foregroundLabels;
    UIView * _foregroundMaskView;
    UIView * _foregroundWrapperView;
    UIView * _indicatorView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maximumContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _minimumContentOffset;
    double  _preferredIndicatorWidth;
    double  _preferredLabelFontSize;
    long long  _style;
}

@property (nonatomic, copy) NSArray *entries;
@property (nonatomic) long long focusProminence;
@property (nonatomic) struct CGPoint { double x1; double x2; } maximumContentOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } minimumContentOffset;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_backgroundFont;
- (id)_backgroundLabelTextColor;
- (void)_createLabels;
- (void)_determinePreferredSizes;
- (id)_foregroundFont;
- (id)_indicatorShadowPath;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_lowerEntryForOffset:(double)arg1;
- (bool)_shouldUseDarkAppearance;
- (void)_showNormalFocusProminence;
- (void)_showReducedFocusProminence;
- (void)_updateColors;
- (id)_upperEntryForOffset:(double)arg1;
- (bool)canBecomeFocused;
- (id)entries;
- (long long)focusProminence;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })maximumContentOffset;
- (struct CGPoint { double x1; double x2; })minimumContentOffset;
- (void)resetDeflection:(bool)arg1;
- (void)setEntries:(id)arg1;
- (void)setFocusProminence:(long long)arg1;
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;
- (void)setMaximumContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMinimumContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
