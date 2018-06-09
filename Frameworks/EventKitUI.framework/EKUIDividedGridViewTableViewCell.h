/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDividedGridViewTableViewCell : UITableViewCell {
    UIView * _bottomDivider;
    EKUIDividedGridViewController * _gridViewController;
    UIView * _topDivider;
}

@property (nonatomic, retain) UIView *bottomDivider;
@property (nonatomic) bool drawsTopDivider;
@property (retain) EKUIDividedGridViewController *gridViewController;
@property (nonatomic, retain) UIView *topDivider;

- (void).cxx_destruct;
- (bool)_isWiderThanMaximum;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)bottomDivider;
- (bool)drawBottomDivider;
- (bool)drawsTopDivider;
- (id)gridViewController;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5;
- (void)layoutSubviews;
- (void)setBottomDivider:(id)arg1;
- (void)setDrawBottomDivider:(bool)arg1;
- (void)setDrawsTopDivider:(bool)arg1;
- (void)setGridViewController:(id)arg1;
- (void)setTopDivider:(id)arg1;
- (id)topDivider;
- (bool)wantsDrawBackground;

@end
