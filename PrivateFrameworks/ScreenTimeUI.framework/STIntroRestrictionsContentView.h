/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroRestrictionsContentView : UIView {
    UITableView * _bottomTableView;
    UITableView * _topTableView;
}

@property (retain) UITableView *bottomTableView;
@property (retain) UITableView *topTableView;

- (void).cxx_destruct;
- (id)bottomTableView;
- (void)layoutSubviews;
- (void)setBottomTableView:(id)arg1;
- (void)setTopTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)topTableView;

@end