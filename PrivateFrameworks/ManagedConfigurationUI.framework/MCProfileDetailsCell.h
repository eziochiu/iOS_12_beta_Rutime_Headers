/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileDetailsCell : UITableViewCell {
    UIImageView * _detailImageView;
    UILabel * _detailSubtitle1Label;
    UILabel * _detailSubtitle2Label;
    UILabel * _detailTitleLabel;
    UIView * _detailView;
}

@property (nonatomic, retain) UIImageView *detailImageView;
@property (nonatomic, retain) UILabel *detailSubtitle1Label;
@property (nonatomic, retain) UILabel *detailSubtitle2Label;
@property (nonatomic, retain) UILabel *detailTitleLabel;
@property (nonatomic, retain) UIView *detailView;

+ (double)cellHeight;

- (void).cxx_destruct;
- (id)_detailImage;
- (id)_imageForApplicationIdentifier:(id)arg1;
- (void)_setPayloadInfo:(id)arg1;
- (void)_setupCell;
- (id)_textForLabel:(id)arg1 value:(id)arg2;
- (id)detailImageView;
- (id)detailSubtitle1Label;
- (id)detailSubtitle2Label;
- (id)detailTitleLabel;
- (id)detailView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCertificate:(struct __SecCertificate { }*)arg1;
- (void)setDetailImageView:(id)arg1;
- (void)setDetailSubtitle1Label:(id)arg1;
- (void)setDetailSubtitle2Label:(id)arg1;
- (void)setDetailTitleLabel:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setManagedApp:(id)arg1;
- (void)setManagedBook:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadInfo:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3;
- (void)setUnmanagedEnterpriseApp:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
