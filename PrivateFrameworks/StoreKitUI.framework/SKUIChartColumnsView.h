/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate> {
    NSArray * _allViewControllers;
    long long  _animatingToNumberOfVisibleColumns;
    _UIBackdropView * _backdropView;
    UIView * _borderView0;
    UIView * _borderView1;
    long long  _columnChangeAnimationCount;
    NSArray * _columnViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView * _headerBackgroundBottomBorder;
    UIView * _headerBackgroundView;
    NSArray * _headerViews;
    long long  _numberOfVisibleColumns;
    SKUIFlexibleSegmentedControl * _segmentedControl;
}

@property (nonatomic, readonly) _UIBackdropView *backdropView;
@property (nonatomic, copy) NSArray *chartViewControllers;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfVisibleColumns;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_headerViewAction:(id)arg1;
- (id)_headerViewWithViewControllers:(id)arg1;
- (void)_reloadColumnViews;
- (id)backdropView;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;
- (id)chartViewControllers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (void)endColumnChangeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfVisibleColumns;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)setChartViewControllers:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfVisibleColumns:(long long)arg1;

@end
