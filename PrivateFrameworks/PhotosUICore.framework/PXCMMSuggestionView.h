/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionView : UIView {
    PXCMMPosterHeaderView * _headerView;
    UIColor * _opaqueAncestorBackgroundColor;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UIFont * _titleBoldFont;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _titleBoldRange;
    UIFont * _titleFont;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) PXCMMPosterHeaderView *headerView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (id)asset;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)mediaProvider;
- (id)opaqueAncestorBackgroundColor;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)title;

@end
