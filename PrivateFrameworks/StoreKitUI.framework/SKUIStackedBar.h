/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackedBar : UIView {
    bool  _alwaysShowsBackButton;
    _UIBackdropView * _backdropView;
    NSArray * _cells;
    <SKUIStackedBarDelegate> * _delegate;
    bool  _hidesStatusBar;
    NSArray * _items;
    bool  _lastItemExpanded;
    UIView * _maskView;
    double  _newOffset;
    double  _offset;
    bool  _splitViewStyle;
    UIView * _wrapperView;
    bool  _zeroHeightWhenFirstChildExpanded;
}

@property (nonatomic) bool alwaysShowsBackButton;
@property <SKUIStackedBarDelegate> *delegate;
@property (nonatomic) bool hidesStatusBar;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) bool lastItemExpanded;
@property (nonatomic) double offset;
@property (nonatomic) bool splitViewStyle;
@property (nonatomic) bool zeroHeightWhenFirstChildExpanded;

- (void).cxx_destruct;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_reload;
- (void)_resetNewOffset;
- (void)_selectItemAtIndex:(long long)arg1;
- (bool)alwaysShowsBackButton;
- (void)animateToFullSizeIfNecessary;
- (id)delegate;
- (bool)hidesStatusBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (bool)lastItemExpanded;
- (void)layoutSubviews;
- (double)offset;
- (void)setAlwaysShowsBackButton:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesStatusBar:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setLastItemExpanded:(bool)arg1;
- (void)setLastItemExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setOffset:(double)arg1;
- (void)setSplitViewStyle:(bool)arg1;
- (void)setZeroHeightWhenFirstChildExpanded:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (bool)splitViewStyle;
- (bool)zeroHeightWhenFirstChildExpanded;

@end
