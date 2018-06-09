/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPillsControl : UIControl {
    SKUIColorScheme * _colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    long long  _maximumNumberOfVisiblePills;
    NSString * _moreListTitle;
    SKUISegmentedControl * _segmentedControl;
    NSArray * _titles;
}

@property (nonatomic, copy) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long maximumNumberOfVisiblePills;
@property (nonatomic, copy) NSString *moreListTitle;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectedPillFrame;
@property (nonatomic, copy) NSArray *titles;

- (void).cxx_destruct;
- (void)_segmentedControlAction:(id)arg1;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)maximumNumberOfVisiblePills;
- (id)moreListTitle;
- (void)reloadPills;
- (long long)selectedIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectedPillFrame;
- (void)setColorScheme:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaximumNumberOfVisiblePills:(long long)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titles;

@end
