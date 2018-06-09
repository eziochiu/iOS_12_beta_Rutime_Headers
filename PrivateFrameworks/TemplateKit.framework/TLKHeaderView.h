/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKHeaderView : TLKView <NUIContainerStackViewDelegate> {
    long long  _axis;
    TLKImage * _image;
    TLKImageView * _imageView;
    TLKStackView * _innerStackView;
    TLKStackView * _outerStackView;
    NSString * _roundedBorderText;
    TLKRoundedCornerLabel * _roundedCornerLabel;
    TLKMultilineText * _subtitle;
    TLKImage * _subtitleImage;
    TLKImageView * _subtitleImageView;
    TLKVibrantLabel * _subtitleLabel;
    TLKStackView * _subtitleStackView;
    TLKMultilineText * _title;
    UILabel * _titleLabel;
    TLKMultilineText * _trailingText;
    UILabel * _trailingTextLabel;
}

@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *image;
@property (retain) TLKImageView *imageView;
@property (retain) TLKStackView *innerStackView;
@property (retain) TLKStackView *outerStackView;
@property (nonatomic, retain) NSString *roundedBorderText;
@property (retain) TLKRoundedCornerLabel *roundedCornerLabel;
@property (nonatomic, retain) TLKMultilineText *subtitle;
@property (nonatomic, retain) TLKImage *subtitleImage;
@property (retain) TLKImageView *subtitleImageView;
@property (retain) TLKVibrantLabel *subtitleLabel;
@property (retain) TLKStackView *subtitleStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKMultilineText *title;
@property (retain) UILabel *titleLabel;
@property (nonatomic, retain) TLKMultilineText *trailingText;
@property (retain) UILabel *trailingTextLabel;

- (void).cxx_destruct;
- (long long)axis;
- (id)hasImage;
- (id)image;
- (id)imageView;
- (id)init;
- (id)innerStackView;
- (void)observedPropertiesChanged;
- (id)outerStackView;
- (id)roundedBorderText;
- (id)roundedCornerLabel;
- (id)roundedCornerLabelText;
- (void)setAxis:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInnerStackView:(id)arg1;
- (void)setOuterStackView:(id)arg1;
- (void)setRoundedBorderText:(id)arg1;
- (void)setRoundedCornerLabel:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleImage:(id)arg1;
- (void)setSubtitleImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (void)setTrailingTextLabel:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle;
- (id)subtitleImage;
- (id)subtitleImageView;
- (id)subtitleLabel;
- (id)subtitleLabelText;
- (id)subtitleStackView;
- (id)title;
- (id)titleLabel;
- (id)titleLabelFont;
- (id)titleLabelText;
- (id)trailingText;
- (id)trailingTextLabel;

@end
