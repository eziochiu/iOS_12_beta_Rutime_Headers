/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCommonSenseView : UIView {
    UIView * _containerView;
    _TVCommonSenseFooterView * _footerView;
    UIView * _headerView;
    NSArray * _infoViews;
}

@property (nonatomic, retain) _TVCommonSenseFooterView *footerView;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSArray *infoViews;

- (void).cxx_destruct;
- (id)footerView;
- (id)headerView;
- (id)infoViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfoViews:(id)arg1;

@end
