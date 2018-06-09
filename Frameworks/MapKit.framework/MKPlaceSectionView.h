/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionView : _MKStackView {
    <MKPlaceSectionViewDelegate> * _delegate;
    MKPlaceSectionItemView * _footerView;
    MKViewWithHairline * _hairLineView;
    MKPlaceSectionItemView * _headerView;
    bool  _highlightsTouches;
    NSArray * _rowViews;
    bool  _showsBottomHairline;
    unsigned long long  _trackingSelectForRow;
}

@property (nonatomic) <MKPlaceSectionViewDelegate> *delegate;
@property (nonatomic, retain) MKPlaceSectionItemView *footerView;
@property (nonatomic, retain) MKPlaceSectionItemView *headerView;
@property (nonatomic) bool highlightsTouches;
@property (nonatomic, copy) NSArray *rowViews;
@property (nonatomic) bool showsBottomHairline;

- (void).cxx_destruct;
- (void)_tappedRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2;
- (void)_updateHairlineInsets;
- (void)_updateViewsAnimated:(bool)arg1;
- (id)delegate;
- (id)footerView;
- (id)headerView;
- (bool)highlightsTouches;
- (unsigned long long)indexOfRowAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)rowAt:(struct CGPoint { double x1; double x2; })arg1;
- (id)rowViews;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterView:(id)arg1 animated:(bool)arg2;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderView:(id)arg1 animated:(bool)arg2;
- (void)setHighlightsTouches:(bool)arg1;
- (void)setRowViews:(id)arg1;
- (void)setRowViews:(id)arg1 animated:(bool)arg2;
- (void)setShowsBottomHairline:(bool)arg1;
- (bool)showsBottomHairline;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
