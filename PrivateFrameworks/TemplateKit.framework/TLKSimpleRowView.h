/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSimpleRowView : TLKView <NUIContainerGridViewDelegate> {
    NUIContainerGridView * _containerView;
    TLKImage * _leadingImage;
    TLKImageView * _leadingImageView;
    TLKRichText * _leadingSubtitle;
    TLKVibrantLabel * _leadingSubtitleLabel;
    TLKRichText * _leadingTitle;
    TLKVibrantLabel * _leadingTitleLabel;
    TLKImage * _trailingImage;
    TLKImageView * _trailingImageView;
    TLKRichText * _trailingSubtitle;
    TLKVibrantLabel * _trailingSubtitleLabel;
    TLKRichText * _trailingTitle;
    TLKVibrantLabel * _trailingTitleLabel;
}

@property (retain) NUIContainerGridView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *leadingImage;
@property (retain) TLKImageView *leadingImageView;
@property (nonatomic, retain) TLKRichText *leadingSubtitle;
@property (retain) TLKVibrantLabel *leadingSubtitleLabel;
@property (nonatomic, retain) TLKRichText *leadingTitle;
@property (retain) TLKVibrantLabel *leadingTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKImage *trailingImage;
@property (retain) TLKImageView *trailingImageView;
@property (nonatomic, retain) TLKRichText *trailingSubtitle;
@property (retain) TLKVibrantLabel *trailingSubtitleLabel;
@property (nonatomic, retain) TLKRichText *trailingTitle;
@property (retain) TLKVibrantLabel *trailingTitleLabel;

+ (void)applyText:(id)arg1 toLabel:(id)arg2;

- (void).cxx_destruct;
- (id)bottomRowViews;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)gridOfAllViews;
- (bool)hasSubtitles;
- (id)init;
- (id)leadingImage;
- (id)leadingImageView;
- (id)leadingSubtitle;
- (id)leadingSubtitleLabel;
- (id)leadingSubtitleLabelString;
- (id)leadingTitle;
- (id)leadingTitleLabel;
- (id)leadingTitleLabelFont;
- (id)leadingTitleLabelString;
- (void)observedPropertiesChanged;
- (void)setContainerView:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageView:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingSubtitleLabel:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setLeadingTitleLabel:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageView:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingSubtitleLabel:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (void)setTrailingTitleLabel:(id)arg1;
- (id)stringForLabel:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)topRowViews;
- (id)trailingImage;
- (id)trailingImageView;
- (id)trailingSubtitle;
- (id)trailingSubtitleLabel;
- (id)trailingSubtitleLabelFont;
- (id)trailingSubtitleLabelString;
- (id)trailingTitle;
- (id)trailingTitleLabel;
- (id)trailingTitleLabelFont;
- (id)trailingTitleLabelString;
- (double)widthOfColumnAtIndex:(unsigned long long)arg1;

@end
