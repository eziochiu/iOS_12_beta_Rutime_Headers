/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPageViewControllerBackgroundView : UIView {
    UIPageControl * _pageControl;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _pageMargins;
    NSString * _pageTitle;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } pageMargins;
@property (nonatomic, copy) NSString *pageTitle;

- (void).cxx_destruct;
- (id)_createTitleLabel;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (struct CGSize { double x1; double x2; })contentSizeForWidth:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pageControl;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pageMargins;
- (id)pageTitle;
- (void)setPageMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageTitle:(id)arg1;

@end
