/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKNumericalResultView : TLKView {
    TLKMultilineText * _subtitle;
    TLKVibrantLabel * _subtitleLabel;
    TLKMultilineText * _title;
    TLKVibrantLabel * _titleLabel;
    bool  _topLabelIsVibrant;
}

@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (retain) TLKVibrantLabel *subtitleLabel;
@property (nonatomic, retain) TLKMultilineText *title;
@property (retain) TLKVibrantLabel *titleLabel;
@property (nonatomic) bool topLabelIsVibrant;

- (void).cxx_destruct;
- (id)init;
- (void)observedPropertiesChanged;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopLabelIsVibrant:(bool)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle;
- (id)subtitleFont;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelText;
- (bool)topLabelIsVibrant;

@end
