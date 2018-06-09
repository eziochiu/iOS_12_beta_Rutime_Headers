/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKEnlargedTitleView : TLKView {
    TLKMultilineText * _subtitle;
    TLKVibrantLabel * _subtitleLabel;
    TLKMultilineText * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (retain) TLKVibrantLabel *subtitleLabel;
@property (nonatomic, retain) TLKMultilineText *title;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)init;
- (void)observedPropertiesChanged;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (id)title;
- (id)titleLabel;
- (id)titleLabelText;

@end
