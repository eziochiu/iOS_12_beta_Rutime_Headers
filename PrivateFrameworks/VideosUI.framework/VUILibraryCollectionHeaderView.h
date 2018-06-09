/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryCollectionHeaderView : UICollectionReusableView {
    double  _bottomTextMargin;
    double  _buttonHorizontalPadding;
    long long  _headerViewStyle;
    UIButton * _seeAllButton;
    VUILabel * _subtitleLabel;
    double  _subtitleTitleMargin;
    VUILabel * _titleLabel;
    double  _titleTopMargin;
}

@property (nonatomic) double bottomTextMargin;
@property (nonatomic) double buttonHorizontalPadding;
@property (nonatomic, readonly) long long headerViewStyle;
@property (nonatomic, retain) UIButton *seeAllButton;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic) double subtitleTitleMargin;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic) double titleTopMargin;

+ (void)configureCollectionHeaderView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 buttonString:(id)arg4 style:(long long)arg5;

- (void).cxx_destruct;
- (double)bottomTextMargin;
- (double)buttonHorizontalPadding;
- (long long)headerViewStyle;
- (void)layoutSubviews;
- (id)seeAllButton;
- (void)setBottomTextMargin:(double)arg1;
- (void)setButtonHorizontalPadding:(double)arg1;
- (void)setSeeAllButton:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleTitleMargin:(double)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleTopMargin:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (double)subtitleTitleMargin;
- (id)titleLabel;
- (double)titleTopMargin;

@end
